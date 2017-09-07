class compare():
    
    def __init__(self,train,data):

        self.train = train ##送入训练样本数据

        self.data = data ##送入待分析的实时数据

        self.fitRate = self.fitOne(self.train,self.data) ##计算相关系数并赋值给属性fitRate


    def pearson(self,T1,T2,cnt):​

        sum1 = sum(T1)

        sum2 = sum(T2)

        sqSum1 = sum(pow(num,2) for num in T1)

        sqSum2 = sum(pow(num,2) for num in T2)

        mulSum = sum(T1[i]*T2[i] for i in range(cnt))

        son = mulSum-sum1*sum2/cnt

        mot = sqrt( (sqSum1-pow(sum1,2)/cnt)*(sqSum2-pow(sum2,2)/cnt) )

        if mot == 0:

            r = 0

        else:

            r = son/mot

        return r

    def fitOne(self,train,data):

        '''

        计算单条曲线与训练函数曲线的拟合度

        当读取的数据长度大于训练样本数据时再进行分析，否则返回"0"

        '''

        if len(data) >= len(train):

            d = data[len(data)-len(train):] ##切片，截取。只选用最新的等长数据进行计算

            r = self.pearson(train,d,len(train)) ##把截取的数据与训练样本送去计算系数

            return r

        else:

            return 0