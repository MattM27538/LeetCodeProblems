class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        std::vector<std::vector<int>> finalGroups;
        std::unordered_map<int,std::vector<int>> groupSizeToMembersMap;

        for(int i={0};i<groupSizes.size();++i){
            // Add new group to map for size groupSizes[i].
            if(groupSizeToMembersMap.find(groupSizes[i])==groupSizeToMembersMap.end()){
                groupSizeToMembersMap[groupSizes[i]]={i};
            }
            else{
               groupSizeToMembersMap[groupSizes[i]].push_back(i);
            }
            // Add filled group to finalGroups.
            if(groupSizeToMembersMap[groupSizes[i]].size()==groupSizes[i]){
                finalGroups.push_back(groupSizeToMembersMap[groupSizes[i]]);
                groupSizeToMembersMap[groupSizes[i]].clear();
            }
        }

        return finalGroups;
    }
};