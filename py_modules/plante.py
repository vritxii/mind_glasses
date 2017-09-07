from PIL import Image
from PIL import ImageFilter
import urllib
import urllib2
import requests
import re
import json

import ssl
if hasattr(ssl, '_create_unverified_context'):
    ssl._create_default_https_context = ssl._create_unverified_context


UA = "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_2) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/41.0.2272.89 Safari/537.36"

def baidu_image_upload(im):
    #url = "http://image.baidu.com/pictureup/uploadshitu?fr=flash&fm=index&pos=upload"
    url = "http://stu.iplant.cn/upload.ashx"
    #im.save("./query_temp_img.png")
    raw = open(im, 'rb').read()

    files = {
        'fileheight'   : "0",
        'newfilesize'  : str(len(raw)),
        'compresstime' : "0",
        'Filename'     : "image.jpg",
        'filewidth'    : "0",
        'filesize'     : str(len(raw)),
        'filetype'     : 'image/jpg',
        'Upload'       : "Submit Query",
        'filedata'     : ("image.jpg", raw)
    }

    resp = requests.post(url, files=files, headers={'User-Agent':UA})

    #  resp.url
    redirect_url = "http://image.baidu.com" + resp.text
    return redirect_url



def baidu_stu_lookup(im):
    redirect_url = baidu_image_upload(im)

    #print redirect_url
    resp = requests.get(redirect_url)

    html = resp.text

    #return baidu_stu_html_extract(html)
    return html

def baidu_stu_html_extract(html):
    pattern = re.compile(r"'multitags':\s*'(.*?)'")
    matches = pattern.findall(html)
    if not matches:
        return '[ERROR?]'

    tags_str = matches[0]

    result =  list(filter(None, tags_str.replace('\t', ' ').split()))

    return '|'.join(result) if result else '[UNKOWN]'


def ocr_question_extract(im):
    # git@github.com:madmaze/pytesseract.git
    global pytesseract
    try:
        import pytesseract
    except:
        print "[ERROR] pytesseract not installed"
        return
    im = im.crop((127, 3, 260, 22))
    im = pre_ocr_processing(im)
    # im.show()
    return pytesseract.image_to_string(im, lang='chi_sim').strip()


if __name__ == '__main__':
    #im = Image.open("./2.jpg")
    im = "./1.jpg"
    result = baidu_stu_lookup(im)
    print result
