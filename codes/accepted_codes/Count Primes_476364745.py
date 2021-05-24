class Solution:
    def countPrimes(self, n: int) -> int:
        if n <=1:
            return 0
        array =list()
        for i in range(0,n):
            array.append(1)
        array[0]=0
        array[1]=0
        for i in range(2,n):
            if i*i>=n:
                break
            if array[i]:
                for j in range(i*i,n,i):
                    array[j]=0
        count=0
        for i in range(2,n):
            if array[i]:
                count+=1
        return count
                
        
        
