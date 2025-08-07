class Solution {
public:
    void merge(vector<int>&nums,int start,int end){
        int mid=start+(end-start)/2;

        int left=mid-start+1;
        int right=end-mid;

        vector<int>leftArray(left);
        vector<int>rightArray(right);

        //copy values into both arrays

        int k=start;

        for(int i=0;i<left;i++){
            leftArray[i]=nums[k++];
        }
        k=mid+1;
        for(int i=0;i<right;i++){
            rightArray[i]=nums[k++];
        }

        //now merge into main array by comparing

        int index1=0;
        int index2=0;
        int mainArrayIndex=start;

        while(index1<left && index2<right){
            if(leftArray[index1]<rightArray[index2]){
                nums[mainArrayIndex++]=leftArray[index1++];

            }
            else if(rightArray[index2]<leftArray[index1]){
                nums[mainArrayIndex++]=rightArray[index2++];
            }
            else {
                nums[mainArrayIndex++]=leftArray[index1++];
                // index2++;
            }
        }

        while(index1<left){
            nums[mainArrayIndex++]=leftArray[index1++];
        }
        while(index2<right){
            nums[mainArrayIndex++]=rightArray[index2++];
        }
        return;


    }

    void mergeSort(vector<int>&nums,int start,int end){
        if(start>=end){
            return;
        }

        int mid=start+(end-start)/2;

        mergeSort(nums,start,mid);
        mergeSort(nums,mid+1,end);

        merge(nums,start,end);
    }

    vector<int> sortArray(vector<int>& nums) {
        //merge sort
        int n=nums.size();
        int start=0;
        int end=n-1;
        mergeSort(nums,start,end);
        return nums;
    }
};