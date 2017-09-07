import time
import bluetooth
from mindwavemobile.MindwaveDataPoints import RawDataPoint
from mindwavemobile.MindwaveDataPointReader import MindwaveDataPointReader
import textwrap

def read(trains):
    raw = []
    MindwaveData = MindwaveDataPointReader.MindwaveDataPointReader()
    MindwaveData.start()
    while(True):
        dataPoint = MindwaveData.readNextDataPoint()
        if (dataPoint.__class__ is RawDataPoint):
            raw.append(float(dataPoint.rawValue))
            for train in trains: ##把训练样本拉出来准备比较
                fitRate = compare(train.data,raw).fitRate ##实例化并取得fitRate相关系数
                if fitRate > 0.9:
                    print '%s.The fitRate is %s'%(train.name,fitRate)
                    print '\n'
        else:
            raw = []

if __name__ == '__main__':
    mindwaveDataPointReader = MindwaveDataPointReader(address="AB:90:78:56:40:BD")
    mindwaveDataPointReader.start()
    if (mindwaveDataPointReader.isConnected()):    
        while(True):
            dataPoint = mindwaveDataPointReader.readNextDataPoint()
            if (not dataPoint.__class__ is RawDataPoint):
                print dataPoint
    else:
        print(textwrap.dedent("""\
            Exiting because the program could not connect
            to the Mindwave Mobile device.""").replace("\n", " "))
    trains = [train(data[54:56],'Blink1'),train(data[69:71],'Blink2'),train(data[70:73],'Relax')
