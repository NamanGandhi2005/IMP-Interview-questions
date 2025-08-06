class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        int count=0;
        int i=0;
        int j=1;

        while(j<n){
            vector<int>curr_interval=intervals[i];
            vector<int>next_interval=intervals[j];
            int cs=curr_interval[0];
            int ce=curr_interval[1];

            int ns=next_interval[0];
            int ne=next_interval[1];
            ///non overlappting con fiiton

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