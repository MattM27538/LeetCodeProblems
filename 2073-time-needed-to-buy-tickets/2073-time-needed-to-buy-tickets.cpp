class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        auto timeRequired{0};

        for(int i{0};i<tickets.size();++i){
            if(i==k){
                timeRequired+=tickets[k];
            }
            //Add one second of time for each ticket bought
            //from customers before customer k up to tickets[k].
            else if(i<k){
                if(tickets[i]<tickets[k]){
                    timeRequired+=tickets[i];
                }
                else{
                    timeRequired+=tickets[k];
                }
            }
            //Add one second of time for each ticket bought
            //from customers before customer k up to tickets[k]-1.
            else{
                if(tickets[i]>(tickets[k]-1)){
                    timeRequired+=tickets[k]-1;
                }
                else{
                    timeRequired+=tickets[i];
                }
            }
        }

        return timeRequired;
    }
};