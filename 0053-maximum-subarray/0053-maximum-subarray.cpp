class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN;

        int currSum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            currSum+=nums[i];

            maxSum=max(currSum,maxSum);

            if(currSum<0){
                currSum=0;
            }
        }


        return maxSum;
    }
};