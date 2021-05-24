class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        return min(len(set(candyType)),int(len(candyType)/2))
        
