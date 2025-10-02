class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;

        for(int i=1;i<=numRows;i++){
            vector<int>temp;
            int c=1;
            for(int j=1;j<=i;j++){
                temp.push_back(c);
                c=c*(i-j)/j;

            }
            result.push_back(temp);
        }

        return result;
    }
};