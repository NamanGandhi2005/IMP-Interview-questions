class Solution {
public:
    int pivotSolve(vector<int>&nums){
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

    int binarySearch(vector<int>nums,int start,int end,int target){
        int mid=start+(end-start)/2;

        // int index=-1;
        while(start<=end){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            mid=start+(end-start)/2;

        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n=nums.size();


        int pivotIndex=pivotSolve(nums);

        int leftIndex=binarySearch(nums,0,pivotIndex-1,target);
        int rightIndex=binarySearch(nums,pivotIndex,n-1,target);
        if(leftIndex==-1){
            return rightIndex;
        }
        if(rightIndex==-1){
            return leftIndex;
        }
        return -1;



    }
};