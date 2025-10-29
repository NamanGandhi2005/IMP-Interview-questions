class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();


        int count=0;

        int i=0;
        int j=1;
        sort(intervals.begin(),intervals.end());
        while(j<n){
            vector<int>curr=intervals[i];
            vector<int>next=intervals[j];

            int cs=curr[0];
            int ce=curr[1];
            int ns=next[0];
            int ne=next[1];

            //non overlapping case

            if(ce<=ns){
                i=j;
                j++;
            }
            //overlapping
            else if(ce<=ne){
                count++;
                j++;
            }
            else if(ce>ne){
                i=j;
                j++;
                count++;
            }
        }

        return count;
    }
};