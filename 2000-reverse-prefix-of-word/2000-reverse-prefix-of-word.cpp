class Solution {
public:
    string reversePrefix(string word, char ch) {
        size_t chLocation={word.find(ch)};
        if(chLocation!=-1){
            char *frontPtr={&word[0]};
            char *backPtr={&word[chLocation]};

            //Reverse prefix chars.
            while(frontPtr<backPtr){
                char temp={*frontPtr};
                *frontPtr=*backPtr;
                *backPtr=temp;
                ++frontPtr;
                --backPtr;
            }       
        }

        return word;
    }
};