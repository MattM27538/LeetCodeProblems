class Solution {
public:
    string simplifyPath(string path) {
        vector<string> finalPath;
        stringstream pathStream;
        pathStream << path;
        string dir="";
        //Read each directory for final path into vector.
        while(getline(pathStream,dir,'/')){
            if(dir==".."){
                if(finalPath.size()>0){finalPath.pop_back();}
            }
            else if(dir!="."&& dir!=""){finalPath.push_back(dir);}
        }
        string ans="/";
        if(finalPath.size()==0){return ans;}

        //Append each directory to string and return it.
        for(int i=0; i<finalPath.size();++i){
            ans+=finalPath[i]+"/";
        }
        ans.pop_back();
        return ans;
    }
};