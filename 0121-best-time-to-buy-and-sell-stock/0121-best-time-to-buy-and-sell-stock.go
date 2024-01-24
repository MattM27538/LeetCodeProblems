func maxProfit(prices []int) int {
    low:=prices[0] 
    maxProfit:=0
    pricesSize:=len(prices)
    for i:=1; i<pricesSize; i++ {
            if(prices[i]<low){
                low=prices[i]
            } else if(maxProfit<prices[i]-low){
                maxProfit=prices[i]-low
            }
        }
        return maxProfit;
}