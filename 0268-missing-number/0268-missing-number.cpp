class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //sum method
        int n=nums.size();
        int sum=0;
        for(auto num:nums){
            sum+=num;
        }

        int actualSum=n*(n+1)/2;

        return actualSum-sum;
    }
};