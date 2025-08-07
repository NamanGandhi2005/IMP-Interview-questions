class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();

        int ans=INT_MIN;
        int i=0;
        int j=0;
        int sum=0;
        

        while(j<n){
            sum+=nums[j];
            if(j-i+1==k){
                ans=max(ans,sum);
                sum-=nums[i];
                
                i++;
                
            }
            j++;
        }
        // ans=max(ans,sum);
        double maxAvg=ans/(double)k;
        cout<<ans<<endl;
        return maxAvg;



    }
};