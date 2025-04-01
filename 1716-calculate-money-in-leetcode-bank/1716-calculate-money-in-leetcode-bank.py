class Solution:
    def totalMoney(self, n: int) -> int:
        weekCount=n//7
        remainingDays=n%7
        
        #Calculate final value in bank.
        total=((weekCount*(weekCount-1))//2)*7 
        total+=weekCount*28
        total+=((remainingDays*(remainingDays+1))//2)+(weekCount*remainingDays)
        
        return total