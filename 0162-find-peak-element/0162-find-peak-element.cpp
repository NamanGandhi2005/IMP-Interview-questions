class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=n-1;

        int mid=start+(end-start)/2;
        int ans=0;

        while(start<end){
            if(nums[mid]>nums[mid+1] ){
                
                end=mid;
                
            }
            else if(nums[mid]<nums[mid+1]){
                start=mid+1;
            }
            mid=start+(end-start)/2;


        }
        return start;
    }
};