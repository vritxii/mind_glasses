#-*- coding=utf-8 -*-
'''
http://ai.baidu.com/docs
Created on 2017 4 12
appid=9509641
key=gx6GthI9gdUoZSYReBGzBqSc
secret=v5ZNqNMzTrv3mNBM37qp37HSBMxmtlK0
@author: lenovo
'''
# OCR SDK
from aip import AipOcr
#import cv2
import datetime
import json
import codecs
# 
APP_ID = '9509641'
API_KEY = 'gx6GthI9gdUoZSYReBGzBqSc'
SECRET_KEY = 'v5ZNqNMzTrv3mNBM37qp37HSBMxmtlK0'

#
def get_file_content(filePath):
    with open(filePath, 'rb') as fp:
        return fp.read()

options = {
  'detect_direction': True,
  'language_type': 'CHN_ENG',
}
#
def extract_img(filename):
     
    #start = datetime.datetime.now()
    aipOcr = AipOcr(APP_ID, API_KEY, SECRET_KEY)
    
    #mat = cv2.imread(filename)
    result = aipOcr.general(get_file_content(filename),options)
    '''
    end = datetime.datetime.now()
    print(end-start)
    print (json.dumps(result))
    print('the num of words detected',(result['words_result_num']))
    
    for item in result['words_result']:
        #print(item)    
        #print(item['location'])
        x = item['location']['left']
        print('x :',x)
        y = item['location']['top']
        print('y :',y)
        width = item['location']['width']
        print('width :',width)
        height = item['location']['height']
        print('height :',height)
        content =item['words']
        #content=codecs.utf_8_decode(content)
        #content = codecs.unicode_escape_decode(content)
        print('words',content)
        cv2.rectangle(mat,(int(x),int(y)),(int(x)+int(width),int(y)+int(height)),(255,0,0),2)
    '''
    return json.dumps(result).encode("utf-8")
