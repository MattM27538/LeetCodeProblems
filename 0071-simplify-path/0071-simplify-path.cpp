class Solution {
public:
    string simplifyPath(string path) {
        vector<string> finalPath;
        stringstream pathStream;
        pathStream << path;
        string dir="";
        while(getline(pathStream,dir,'/')){
            cout<<dir<<endl;
            if(dir==".."){
                if(finalPath.size()>0){finalPath.pop_back();}
                }
            else if(dir!="."&& !dir.empty()){finalPath.push_back(dir);}
        }
        // cout<<finalPath.size()<<endl;
        string ans="/";
        if(finalPath.size()==0){return ans;}
        for(int i=0; i<finalPath.size();++i){
            // cout<<finalPath[i]<< " ";
            ans+=finalPath[i]+"/";
            // ans+="/";
        }
        ans.pop_back();
        // cout<<ans;
        return ans;
    }
};