class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        std::vector<std::vector<int>> ans;
        std::unordered_map<int,std::vector<int>> groupMembers;

        for(int i={0};i<groupSizes.size();++i){
            // std::cout<<groupSizes[i]<<" ";
            if(groupMembers.find(groupSizes[i])==groupMembers.end()){
                groupMembers[groupSizes[i]]={i};
                //RESERVE SPACE?
                // groupMembers[groupSizes[i]].reserve(VALUE HERE -1?);
            }
            else{
                groupMembers[groupSizes[i]].push_back(i);
            }

            if(groupMembers[groupSizes[i]].size()==groupSizes[i]){
                ans.push_back(groupMembers[groupSizes[i]]);
                groupMembers[groupSizes[i]].clear();
            }
        }


        // std::cout<<"\n";
        // for(const auto &pair:groupMembers){
        //     // std::cout<<pair.first<<"- ";
        //     // for(const auto &member:pair.second){
        //     // std::cout<<member<<" ";
        //     // }

        //     std::vector<int> group={};
        //     for(int i={0};i<pair.second.size();++i){
        //         group.push_back(pair.second[i]);
        //         if(((i+1)%pair.first)==0){
        //             ans.push_back(group);
        //             for(const int &i:group){
        //                 std::cout<<i;
        //             }
        //             std::cout<<"\n";
        //             group.clear();
        //         }
        //     }          
        // }
        
        return ans;
    }
};