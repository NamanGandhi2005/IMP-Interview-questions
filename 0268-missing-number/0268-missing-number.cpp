class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //sum method

        int n=nums.size();

        int currSum=0;

        for(auto num:nums){
            currSum+=num;
        }

        int actualSum=n*(n+1)/2;

        return actualSum-currSum;
    }
};