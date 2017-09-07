# -*- coding: utf-8 -*-
"""
Created on Fri May 19 22:27:26 2017

@author: lenovo
"""

from PIL import Image
from PIL import ImageFilter
import urllib
import urllib2
import requests
import re,sys
import json
from bs4 import BeautifulSoup
import ssl
if hasattr(ssl, '_create_unverified_context'):
    ssl._create_default_https_context = ssl._create_unverified_context


UA = "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_2) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/41.0.2272.89 Safari/537.36"

def baidu_image_upload(im):
    url = "http://image.baidu.com/pictureup/uploadshitu?fr=flash&fm=index&pos=upload"
    #url = "http://stu.iplant.cn/upload.ashx"
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

    #print redirect_ur
    resp = requests.get(redirect_url)
    resp.encoding='utf-8'
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

def getResut(result):
    pattern = re.compile('<strong>(.*?)</strong>',re.S)
    items = re.findall(pattern,result)
    if(len(items)>0):
        print items[0]
    else:
        print('没有识别出')
    return items[0]

def getDescription(result):
    #content = re.compile('<div class="guess-baike-body">(.*?)<a href="http://baike.baidu.com',re.S)
    content = re.compile('<div class="guess-baike-body">(.*?)<a href="http://baike.baidu.com',re.S)
    items = re.findall(content,result)
    if(len(items)>0):
       
        #print items[0]
        
        x= re.split('>\n|\n',items[0])
        print(len(x))

        #print x
        print x[2]
    else:
        print('找不到...')
    return items[0]

#if __name__ == '__main__':
    #im = Image.open("./3.jpg")
    #im = "C:\\Users\\lenovo\\Desktop\\fe.jpg"
    #im = "C:\\Users\\lenovo\\Desktop\\plane.jpg"
def getInfo(picPath):
    result = baidu_stu_lookup(picPath)
    #print result
    '''
    getResut(result)
    getDescription(result)
    '''
    soup = BeautifulSoup(result,"html.parser")
    info=soup.findAll('div',{'class':"shituplant-tagscroll"})
    soup = BeautifulSoup(str(info),"html.parser")
    res = soup.findAll('li',{})
    paragraphs = []
    for x in res:
        paragraphs.append(str(x))
        
    pattern = re.compile('<li>(.*?)</li>',re.S)
    items = re.findall(pattern,''.join(paragraphs))
    print('______________')
    print(len(items))
    #s =''.join(items)
    ss = ""
    for s in items:
        ss += unicode(s, 'unicode-escape')
        ss += "\n"
    return ss.encode("utf-8")

if __name__ == "__main__":
    print getInfo("./1.jpg")
