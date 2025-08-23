class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        

        int leftCol=0;

        int rightCol=n-1;

        int topRow=0;

        int bottomRow=n-1;

        int dir=0;
        int num=1;
        vector<vector<int>>ans(n,vector<int>(n));
        while(leftCol<=rightCol && topRow<=bottomRow){
            if(dir==0){
                for(int i=leftCol;i<=rightCol;i++){
                    ans[topRow][i]=num++;

                }
                topRow++;
            }
            if(dir==1){
                for(int i=topRow;i<=bottomRow;i++){
                    ans[i][rightCol]=num++;

                }
                
                rightCol--;
            }

            if(dir==2){
                for(int i=rightCol;i>=leftCol;i--){
                    ans[bottomRow][i]=num++;
                }
                
                bottomRow--;
            }

            if(dir==3){
                for(int i=bottomRow;i>=topRow;i--){
                    ans[i][leftCol]=num++;

                }
                
                leftCol++;
            }
            dir++;
            if(dir==4){
                dir=0;
            }
            // dir++;
        }
        return ans;
    }
};