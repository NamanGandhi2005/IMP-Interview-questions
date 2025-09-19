class Solution {
public:
    int findMin(vector<int>&nums){
        int n=nums.size();

        int start=0;
        int end=n-1;

        int mid=start+(end-start)/2;
        
        while(start<end){
            if(nums[mid]>nums[end]){
                start=mid+1;
            }
            else{
                end=mid;
            }
            mid=start+(end-start)/2;


        }

        return mid;
    }
    int binarySearch(vector<int>&nums,int start,int end,int target){
        int mid=start+(end-start)/2;
        int ans=-1;
        while(start<=end){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();

        int index=findMin(nums);

        int left=binarySearch(nums,0,index-1,target);
        int right=binarySearch(nums,index,n-1,target);

        if(left==-1 && right==-1){
            return -1;
        }
        else if(left==-1){
            return right;
        }
        return left;
    }
};