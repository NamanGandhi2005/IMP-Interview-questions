class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]-i==1){
                ans=i;
                break;
            }
            
        }

        if(ans==-1){
            return n;
        }

        return ans;

    }
};