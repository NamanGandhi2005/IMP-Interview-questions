class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();

        int start=0;
        int end=n-1;
        sort(nums.begin(),nums.end());

        int mid=start+(end-start)/2;
        int ans=-1;
        while(start<=end){
            if(nums[mid]-mid==1){
                ans=mid;

                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }

        if(ans==-1){
            return n;
        }

        return ans;
    }
};