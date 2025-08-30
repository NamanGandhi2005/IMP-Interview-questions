class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int>mp(10,0);//store the freq of each 

        while(n){
            int digit=n%10;
            mp[digit]++;

            n=n/10;
        }

        int ans=INT_MIN;
        int mini=INT_MAX;
        for(auto it:mp){
            if(it!=0){
                mini=min(it,mini);
            }
        }

        for(int i=0;i<10;i++){
            if(mp[i]==mini){
                return i;
            }
        }
        return -1;


    }
};