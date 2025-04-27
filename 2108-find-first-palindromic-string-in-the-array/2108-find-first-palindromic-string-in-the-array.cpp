class Solution {
public:
    constexpr bool isPalindrome(std::string_view wordView){
        auto frontIT{wordView.begin()};
        auto backIT{wordView.rbegin()};

        //Check if word is a palindrome.
        while(std::distance(frontIT, backIT.base()-1)>0){
            if(*frontIT!=*backIT){
                return false;
            }
            ++frontIT;
            ++backIT;
        }

        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for(const auto& word:words){
           if(isPalindrome(word)==true){
                return word;
           }
        }

        return "";
    }
};