func singleNumber(nums []int) int {
    // Sort array into ascending order
    sort.Ints(nums[:])
    
    switch len(nums){
    case 1: return nums[0]
    default: 
        //Check each index against the index two spots after it
        // when values don't match return value of first current index
        for i:=0; i<len(nums)-1; i=i+3{
            if nums[i]!=nums[i+2] {return nums[i]}
        } 
    }
    return nums[len(nums)-1]
}