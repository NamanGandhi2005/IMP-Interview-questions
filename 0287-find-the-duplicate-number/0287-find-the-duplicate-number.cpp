class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();

        for(auto num:nums){
            mp[num]++;
        }

        for(auto num:nums){
            if(mp[num]>1){
                return num;
            }
        }

        return -1;
    }
};