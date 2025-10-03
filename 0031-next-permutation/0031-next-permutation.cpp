class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();

        int gola_index=-1;

        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                gola_index=i;
                break;
            }
        }

        if(gola_index!=-1){
            for(int i=n-1;i>gola_index;i--){
                if(nums[i]>nums[gola_index]){
                    swap(nums[gola_index],nums[i]);
                    break;
                }
            }
        }


        reverse(nums.begin()+gola_index+1,nums.end());
        
    }
};