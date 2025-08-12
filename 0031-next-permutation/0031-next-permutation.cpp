class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();

        int gola_index=-1;

        for(int i=n-1;i>=1;i--){
            if(nums[i]>nums[i-1]){
                gola_index=i-1;
                break;
            }
        }

        if(gola_index!=-1){
            for(int i=n-1;i>gola_index;i--){
                if(nums[gola_index]<nums[i]){
                    swap(nums[i],nums[gola_index]);
                    break;
                }
            }
        }

        reverse(nums.begin()+gola_index+1,nums.end());

    }
};