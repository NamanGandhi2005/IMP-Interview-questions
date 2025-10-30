class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();

        int prefixProduct=1;
        int suffixProduct=1;
        // int n=nums.size();
        int maxProduct=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(prefixProduct==0){
                prefixProduct=1;
            }
            if(suffixProduct==0){
                suffixProduct=1;
            }

            prefixProduct*=nums[i];
            suffixProduct*=nums[n-i-1];

            maxProduct=max({maxProduct,prefixProduct,suffixProduct});

        }

        return maxProduct;

    }
};