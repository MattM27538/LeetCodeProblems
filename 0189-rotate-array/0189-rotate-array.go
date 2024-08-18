func rotate(nums []int, k int)  {
    if len(nums)>1 {
        k = k%len(nums)
        rotatedArr := append(nums[len(nums)-k:],nums[:len(nums)-k]...)
        copy(nums, rotatedArr)
    }
}