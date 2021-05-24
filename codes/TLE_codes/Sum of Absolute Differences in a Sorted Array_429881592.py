class Solution:
    def getSumAbsoluteDifferences(self, nums: List[int]) -> List[int]:
        table = dict()
        result = []
        for i in nums:
            s = 0
            for j in nums:
                if (i,j) in table.keys():
                    s += table[(i,j)]
                else:
                    table[(i,j)] = abs(i-j)
                    s += abs(i-j)
            result.append(s)
        return result
            
