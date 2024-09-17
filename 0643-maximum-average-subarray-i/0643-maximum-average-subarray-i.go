func findMaxAverage(nums []int, k int) float64 {
    var currentVal float64=0
    temp:=math.Inf(-1)
    for i:=0; i<len(nums); i++{
        if i<k{
            currentVal+=float64(nums[i])
        } else{
            if temp<currentVal{temp=currentVal}
            currentVal+=float64(nums[i]-nums[i-k])
        }
    }
    if temp<currentVal{temp=currentVal}
    return temp/float64(k)
}