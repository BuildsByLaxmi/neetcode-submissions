class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      int n=nums.size();
      int longest=1;
      int count=1;
      if(nums.empty())
       return 0;

    sort(nums.begin(), nums.end());
      for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]+1){
        count=count+1;
      }
        else if (nums[i]!=nums[i-1]){
            count=1;
        
        }
     longest=max(longest,count);

      }
      return longest;  
    }
};
