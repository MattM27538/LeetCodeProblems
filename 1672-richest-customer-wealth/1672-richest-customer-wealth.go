func maximumWealth(accounts [][]int) int {
    maxWealth:=0
    temp:=0
    for i:=0; i<len(accounts); i++{
        for j:=0; j<len(accounts[i]); j++{
            temp+=accounts[i][j]
        }
        if temp>maxWealth{maxWealth=temp}
        temp=0
    }
    return maxWealth
}