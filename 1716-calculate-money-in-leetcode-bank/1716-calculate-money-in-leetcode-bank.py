class Solution:
    def totalMoney(self, n: int) -> int:
        ans=0
        valToAdd=1
        offSet=1

        # Add incrementing values to ans increasing
        # by 1 each addition. If value is divisible by 7
        # increase starting value.
        for i in range(1,n+1):
            ans+=valToAdd
            if i%7==0:
                valToAdd=1+offSet
                offSet+=1
            else:
                valToAdd+=1
        
        return ans