import requests
import simplejson
#proxies = {"http": "socks5://127.0.0.1:1080", "https": "socks5://127.0.0.1:1080"}
def get_Text(text_json):
    json_str = simplejson.loads(text_json)
    #print(json_str)
    #print(json_str['ParsedResults'][0]['ParsedText'])
    return json_str['ParsedResults'][0]['ParsedText']

def ocr_space_file(filename, overlay, api_key, language):
    """ OCR.space API request with local file.
        Python3.5 - not tested on 2.7
    :param filename: Your file path & name.
    :param overlay: Is OCR.space overlay required in your response.
                    Defaults to False.
    :param api_key: OCR.space API key.
                    Defaults to 'helloworld'.
    :param language: Language code to be used in OCR.
                    List of available language codes can be found on https://ocr.space/OCRAPI
                    Defaults to 'en'.
    :return: Result in JSON format.
    """
    payload = {'isOverlayRequired': overlay,
               'apikey': api_key,
               'language': language,
               }
    with open(filename, 'rb') as f:
        r = requests.post('https://api.ocr.space/parse/image',
                          files={filename: f},
                          #proxies=proxies,
                          data=payload,
                          )
    #print(r.content.decode())
    return get_Text(r.content.decode())


def ocr_space_url(url, overlay=False, api_key='10d2c910ca88957', language='eng'):
    """ OCR.space API request with remote file.
        Python3.5 - not tested on 2.7
    :param url: Image url.
    :param overlay: Is OCR.space overlay required in your response.
                    Defaults to False.
    :param api_key: OCR.space API key.
                    Defaults to 'helloworld'.
    :param language: Language code to be used in OCR.
                    List of available language codes can be found on https://ocr.space/OCRAPI
                    Defaults to 'en'.
    :return: Result in JSON format.
    """

    payload = {'url': url,
               'isOverlayRequired': overlay,
               'apikey': api_key,
               'language': language,
               }
    r = requests.post('https://api.ocr.space/parse/image',
                      #proxies=proxies,
                      data=payload,
                      )
    return get_Text(r.content.decode())


# Use examples:
#test_file = ocr_space_file(filename='/home/vrit/test.jpg', language='pol')
#test_url = ocr_space_url(url='http://i.imgur.com/31d5L5y.jpg')