func shuffle(nums []int, n int) []int {
    var ans []int
    for i:=0; i<n; i++{ans=append(ans,nums[i],nums[n+i])}
    return ans
}