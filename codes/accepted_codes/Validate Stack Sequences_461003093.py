class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        stack=[]
        j=0
        for i in pushed:
            stack.append(i)
            while len(stack) and stack[len(stack)-1]==popped[j]:
                stack.pop()
                j+=1
        return False if len(stack) else True
        
