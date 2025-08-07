class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        int n=intervals.size();

        sort(intervals.begin(),intervals.end());

        vector<vector<int>>result;

        for(int i=0;i<n;i++){
            if(!result.empty() && result.back()[1]>=intervals[i][0]){
                result.back()[1]=max(result.back()[1],intervals[i][1]);
            } 
            else{
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};