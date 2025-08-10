class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();

        int slow=nums[0];
        int fast=nums[0];

        slow=nums[slow];
        fast=nums[nums[fast]];

        while(slow!=fast){
            slow=nums[slow];
            fast=nums[nums[fast]];

        }

        //ab slow aur fast euqla pos pe h 

        slow=nums[0];

        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];

        }

        return slow;
    }
};