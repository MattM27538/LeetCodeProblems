class Solution {
public:
    int countSeniors(vector<string>& details) {
        auto seniorCount{0};

        for(const auto& senior:details){
            //Check if age is greater than 60.
            if((((senior[11]-'0')*10)+(senior[12]-'0')>60)){
                ++seniorCount;
            }
        }

        return seniorCount;
    }
};