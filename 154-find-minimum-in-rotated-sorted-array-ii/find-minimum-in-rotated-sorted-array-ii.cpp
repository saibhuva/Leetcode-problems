class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int min1= nums[0];
        for(int i=0;i<n;i++){
            min1 =min(min1,nums[i]);
        }
        return min1;
    }
};