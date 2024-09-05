class Solution:
    def canJump(self, nums: List[int]) -> bool:
        maxJump=nums[0]
        #Iterate through vector and check if each possible jump
        #can reach a value that allows a jump past the end of the previous jump range.
        for x in nums:
            if maxJump<=-1:
                return False
            elif x>=maxJump:
                maxJump=x
            maxJump-=1
        return True