class Solution {
public:
    void merge(vector<int>&nums,int start,int end){
        int mid=start+(end-start)/2;

        int leftSize=mid-start+1;
        int rightSize=end-mid;

        vector<int>left(leftSize);
        vector<int>right(rightSize);

        int k=start;

        for(int i=0;i<leftSize;i++){
            left[i]=nums[k++];
        }
        k=mid+1;

        for(int i=0;i<rightSize;i++){
            right[i]=nums[k++];
        }
        int mainArrayIndex=start;
        int index1=0;
        int index2=0;

        while(index1<leftSize && index2<rightSize){
            if(left[index1]<right[index2]){
                nums[mainArrayIndex++]=left[index1++];
            }
            else{
                nums[mainArrayIndex++]=right[index2++];
            }
        }
        
        while(index1<leftSize){
            nums[mainArrayIndex++]=left[index1++];
        }
        while(index2<rightSize){
            nums[mainArrayIndex++]=right[index2++];
        }

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
        int n=nums.size();
        mergeSort(nums,0,n-1);
        return nums;
    }
};