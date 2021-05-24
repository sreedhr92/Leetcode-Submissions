class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums)<3:
            return len(nums)
    
        count=1
        start=0
        nextPointer=1
        while nextPointer<len(nums):
            if nums[start]==nums[nextPointer]:
                count+=1
                if count>2:
                    nums.pop(start)
                    count-=1
                    nextPointer-=1
                nextPointer+=1
            else:
                count=1
                start=nextPointer
                nextPointer+=1
        return len(nums)
        
