class Solution {
public:
    int mySqrt(int x) {
        
        int ans=-1;
        for(int i=0;i<=x;i++){
            if((long long)i*i==x){
                return i;
            }
            else if((long long)i*i<x){
                ans=i;
            }
            else{
                break;
            }
        }

        return ans;
    }
};