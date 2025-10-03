class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();

        int start=0;
        int end=n-1;

        int mid=start+(end-start)/2;

        while(start<end){
            bool isEven=false;
            if((end-mid)%2==0){
                isEven=true;
            }
            else{
                isEven=false;
            }

            if(nums[mid]==nums[mid+1]){
                //aabbc
                if(isEven){
                    start=mid+2;
                }
                else{
                    end=mid-1;
                }
            }
            else{
                if(isEven){
                    //abbcc
                    end=mid;

                }
                else{
                    //abbccd
                    start=mid+1;
                }

            }
            mid=start+(end-start)/2;
        }

        return nums[end];
    }
};