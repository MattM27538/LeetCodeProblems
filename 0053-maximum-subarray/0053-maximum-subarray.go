func maxSubArray(nums []int) int {
    ans, subArrEnding:=nums[0], nums[0]
    for i:=1; i<len(nums); i++{
        // Loop through possible subarrays as mark which is largest.
        if subArrEnding+nums[i]>nums[i] {
            subArrEnding=subArrEnding+nums[i]
        }   else {subArrEnding=nums[i]}
        // Keep track of largest value of subarrays.
        if subArrEnding>ans {ans=subArrEnding}
    }
    return ans
}