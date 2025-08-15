class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();

        int left=0;
        int right=0;
        int sum=0;
        int maxSum=INT_MIN;
        while(right<n){
            sum+=nums[right];
            if(right-left+1==k){
                maxSum=max(maxSum,sum);
                sum-=nums[left];
                left++;
            }
            right++;
        }
        double ans=(double)maxSum/(double)k;
        return ans;
    }
};