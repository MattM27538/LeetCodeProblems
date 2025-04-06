class Solution:
    def canAliceWin(self, nums: List[int]) -> bool:
        sumSingleDigits=0
        sumMultipleDigits=0
        for num in nums:
            if num<10:
                sumSingleDigits+=num
            else:
                sumMultipleDigits+=num
        
        return not (sumSingleDigits==sumMultipleDigits)