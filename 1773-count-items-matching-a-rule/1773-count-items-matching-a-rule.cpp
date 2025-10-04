class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        auto numberOfItemsThatMatchRule {0};
        
        for(auto& item:items){
                if(((ruleKey == "type") && (ruleValue == item[0]))
                    || ((ruleKey == "color") && (ruleValue == item[1]))
                    || ((ruleKey == "name") && (ruleValue == item[2]))
                ){
                    ++numberOfItemsThatMatchRule;
                }
        }

        return numberOfItemsThatMatchRule;
    }
};