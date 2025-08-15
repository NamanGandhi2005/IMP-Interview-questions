class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index=0;
        int left=0;
        int n=nums.size();
        while(index<n){
            if(nums[index]!=0){
                swap(nums[index],nums[left]);
                index++;
                left++;

            }
            else{
                index++;
            }
        }
    }
};