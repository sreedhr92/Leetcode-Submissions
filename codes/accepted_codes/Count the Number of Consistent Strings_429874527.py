class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        count = 0
        test = set()
        for i in allowed:
            test.add(i)
        for i in words:
            flag = 0
            for j in i:
                if j not in test:
                    flag = 1
                    break
            if flag==0:
                count+=1
        return count
        
