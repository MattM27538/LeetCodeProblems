class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        std::vector<string> operations;
        int *targetPtr=&target[0];

        for(int i={1};i<=n;++i){
            operations.push_back("Push");
            if(i!=*targetPtr){
                operations.push_back("Pop");
            }
            else if(target.back()==i){
                break;
            }
            else{
                ++targetPtr;
            }
        }

        return operations;
    }
};