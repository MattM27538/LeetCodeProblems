class Solution:
    def daysBetweenDates(self, date1: str, date2: str) -> int:
        yearOne=int(date1[:4])
        monthOne=int(date1[5:7])
        dayOne=int(date1[8:])
        yearTwo=int(date2[:4])
        monthTwo=int(date2[5:7])
        dayTwo=int(date2[8:])

        print(yearOne,monthOne,dayOne)
        print(yearTwo,monthTwo,dayTwo)

        # smallestYear=min(yearOne,yearTwo)

        # daysOne=(yearOne-smallestYear)*365+(12-monthOne)
        # daysTwo=(yearTwo-smallestYear)*365+(12-monthTwo)
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
        print("year one days before leap = ", daysInOne)
        
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
        print("year two days before leap = ", daysInTwo)
        
        # Add extra days for leap years.
        for i in range(1972,2101,4):
            # print(i)
            if yearOne>i:
                daysInOne+=1
                # print(i)
            elif yearOne==i: 
                if (yearOne%100==0 and yearOne%400!=0):
                    pass
                elif monthOne>=3 or (monthOne==2 and dayOne==29):
                    daysInOne+=1
                    print("did it", i)
            if yearTwo>i:
                daysInTwo+=1
            elif yearTwo==i: 
                if (yearTwo%100==0 and yearTwo%400!=0):
                    pass
                elif monthTwo>=3 or (monthTwo==2 and dayTwo==29):
                    daysInTwo+=1

        print("year one days after leap = ", daysInOne)
        print("year two days after leap = ", daysInTwo)

        return abs(daysInOne-daysInTwo)
