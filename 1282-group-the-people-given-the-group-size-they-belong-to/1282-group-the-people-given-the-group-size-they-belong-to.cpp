class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        std::vector<std::vector<int>> ans;
        std::unordered_map<int,std::vector<int>> groupMembers;

        for(int i={0};i<groupSizes.size();++i){
            // std::cout<<groupSizes[i]<<" ";
            if(groupMembers.find(groupSizes[i])==groupMembers.end()){
                groupMembers[groupSizes[i]]={i};
            }
            else{
                groupMembers[groupSizes[i]].push_back(i);
            }
        }


        std::cout<<"\n";
        for(const auto &pair:groupMembers){
            // std::cout<<pair.first<<"- ";
            // for(const auto &member:pair.second){
            // std::cout<<member<<" ";
            // }

            std::vector<int> group={};
            for(int i={0};i<pair.second.size();++i){
                group.push_back(pair.second[i]);
                if(((i+1)%pair.first)==0){
                    ans.push_back(group);
                    for(const int &i:group){
                        std::cout<<i;
                    }
                    std::cout<<"\n";
                    group.clear();
                }
            }
            // for(const auto &groupSize:pair.first){

            // }
            
        }
        
        return ans;
    }
};