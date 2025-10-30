class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //map metho crate map that valu that count is 2 return
        //sort the array and caompare with adjacent if equal then return 

        //tortoise and hare algorithm

        int slow=nums[0];
        int fast=nums[0];


        slow=nums[slow];
        fast=nums[nums[fast]];


        while(slow!=fast){
            slow=nums[slow];
            fast=nums[nums[fast]];
        }

        slow=nums[0];

        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }

        return slow;
    }
};