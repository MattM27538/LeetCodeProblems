class Solution:
    def trimMean(self, arr: List[int]) -> float:
        fivePercentOfArr=len(arr)/20
        arr.sort()

        #Remove 5% of arr from each end of arr.
        arr=arr[int(fivePercentOfArr):(int(len(arr)-fivePercentOfArr))]

        return sum(arr)/len(arr)

