class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //map methods create map and pick char 

        //xor method ans=0; 
        //xor with every element

        //binaery search

        int n=nums.size();
        int start=0;
        int end=n-1;

        int mid=start+(end-start)/2;

        while(start<end){
            bool isEven=false;
            if((end-mid)%2==0){
                isEven=true;
            }

            if(nums[mid]==nums[mid+1]){
                if(isEven){
                    //aabbc
                    start=mid+2;
                }
                else{
                    //aabbcc
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