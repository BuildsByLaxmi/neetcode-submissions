class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string,vector<string>>res;
     for(auto x:strs){
        vector<int>count(26,0);
        for(char c:x){
            count[c-'a']++;
        }
        string key=to_string(count[0]);
        for(int i=0;i<26;i++){
            key +=','+ to_string(count[i]);
        }
        res[key].push_back(x);
     }
     vector<vector<string>>result;
     for(auto p:res){
        result.push_back(p.second);
     }
     return result;
     }   
    
};
