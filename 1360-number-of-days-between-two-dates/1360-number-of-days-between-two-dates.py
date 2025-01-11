class Solution:
    def daysBetweenDates(self, date1: str, date2: str) -> int:
        yearOne=int(date1[:4])
        monthOne=int(date1[5:7])
        dayOne=int(date1[8:])
        yearTwo=int(date2[:4])
        monthTwo=int(date2[5:7])
        dayTwo=int(date2[8:])

        #Count up days and months excluding final month of date1.
        daysInOne=yearOne*365
        for i in range(1,monthOne+1):
            daysInMonth=0
            if i in [1,3,5,7,8,10,12]:
                daysInMonth=31
            elif i==2:
                daysInMonth=28
            else:
                daysInMonth=30
            daysInOne+=daysInMonth
            
            if i==monthOne:
                daysInOne-=daysInMonth-dayOne
        
        #Count up days and months excluding final month of date2.
        daysInTwo=yearTwo*365
        for i in range(1,monthTwo+1):
            daysInMonth=0
            if i in [1,3,5,7,8,10,12]:
                daysInMonth=31
            elif i==2:
                daysInMonth=28
            else:
                daysInMonth=30
            daysInTwo+=daysInMonth
            
            if i==monthTwo:
                daysInTwo-=daysInMonth-dayTwo
        
        # Add extra days for leap years.
        for i in range(1972,max(yearOne,yearTwo)+1,4):
            if yearOne>i:
                daysInOne+=1
            elif yearOne==i: 
                if yearOne%100==0 and yearOne%400!=0:
                    pass
                elif monthOne>=3 or (monthOne==2 and dayOne==29):
                    daysInOne+=1
            if yearTwo>i:
                daysInTwo+=1
            elif yearTwo==i: 
                if yearTwo%100==0 and yearTwo%400!=0:
                    pass
                elif monthTwo>=3 or (monthTwo==2 and dayTwo==29):
                    daysInTwo+=1

        return abs(daysInOne-daysInTwo)
