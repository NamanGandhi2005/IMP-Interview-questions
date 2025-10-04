class Solution {
public:
    int firstElement(vector<int>&nums,int target){
        int n=nums.size();

        int start=0;
        int end=n-1;

        int mid=start+(end-start)/2;
        int ans=-1;
        while(start<=end){
            if(nums[mid]==target){
                ans=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }

        return ans;
    }
    int lastElement(vector<int>&nums,int target){
        int n=nums.size();

        int start=0;
        int end=n-1;

        int mid=start+(end-start)/2;
        int ans=-1;
        while(start<=end){
            if(nums[mid]==target){
                ans=mid;
                start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }

        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();

        vector<int>ans;

        int first=firstElement(nums,target);
        int last=lastElement(nums,target);
        ans.push_back(first);
        ans.push_back(last);

        return ans;

    }
};