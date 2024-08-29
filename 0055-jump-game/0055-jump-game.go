func canJump(nums []int) bool {
    switch len(nums){
        case 1: return true
        default:
            maxJump:=nums[0]
            //Iterate through vector and check if each possible jump
            //can reach a value that allows for continual jumping forward.
            for i:=0; i<len(nums); i++{
                if maxJump==-1 {return false}
                if nums[i]>=maxJump {maxJump=nums[i]}
                maxJump-=1
            }
    }
    return true
}