class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      unordered_set<int> s;
      for(int i=0;i<nums.size();i++){
        int x = nums[i];
        if (s.count(x)) {
        return true;
    }
    s.insert(x);
}

return false;
      }  
    
};