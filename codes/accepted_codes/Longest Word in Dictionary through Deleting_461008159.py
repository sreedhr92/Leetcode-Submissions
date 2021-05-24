class Solution:           
    def findLongestWord(self, s: str, dictionary: List[str]) -> str:
        def is_possible(s,t):
            j=0
            for i in range(0,len(s)):
                if s[i]==t[j]:
                    j+=1
                if j==len(t):
                    return True
            return False
        m=0
        ret =""
        for i in dictionary:
            if len(i) < m:
                continue
            if is_possible(s,i):
                if len(i)==m:
                    if ret>i:
                        ret=i
                else:
                    ret=i
                    m=len(i)
        return ret     
        
