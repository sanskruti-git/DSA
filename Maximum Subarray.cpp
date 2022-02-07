class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        
        int ans = INT_MIN;
        int temp = 0;
        
        for(auto i : nums){
            temp += i;
            
            if(temp > ans){
                ans = temp;
            }
            if(temp < 0){
                temp = 0;
            }
        }
        
        
        
        return ans;
        
    }
};