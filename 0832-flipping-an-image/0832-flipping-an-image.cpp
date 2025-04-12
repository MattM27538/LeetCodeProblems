class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto &row:image){
            int *frontPtr{&row[0]};
            int *backPtr{&row[row.size()-1]};
            
            //Flip image horizontally.
            while(frontPtr<backPtr){
                auto rowValue{*frontPtr};
                *frontPtr=*backPtr;
                *backPtr=rowValue;
                ++frontPtr;
                --backPtr;
            }

            //Invert image.
            for(auto &value:row){
                if(value==1){
                    value=0;
                }
                else{
                    value=1;
                }
            }
        }
        
        return image;
    }
};