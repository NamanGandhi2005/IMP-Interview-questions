class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;

        

        for(int i=1;i<=numRows;i++){
            int res=1;
            vector<int>temp;
            // temp.push_back(res);
            for(int j=1;j<=i;j++){
               

                temp.push_back(abs(res));
                
                res=res*(i-j)/j;
                


            }
            ans.push_back(temp);
            temp.clear();


        }

        return ans;
    }
};