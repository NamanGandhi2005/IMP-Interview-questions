class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }

        int start=0;
        int end=n-1;
        int mid=start+(end-start)/2;
        int ans=0;
        while(start<end){
            if(nums[mid]>nums[end]){
                start=mid+1;
            }
            else{
                ans=mid;
                end=mid;
            }
            mid=start+(end-start)/2;

        }
        return nums[mid];
    }
};