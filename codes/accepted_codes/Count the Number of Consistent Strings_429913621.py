class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        count = 0
        for i in words:
            flag = 1
            for j in i:
                if j not in allowed:
                    flag = 0
                    break
            if flag:count+=flag
        return count
        
