class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        //check for 0 element and mark matrix[0][col] first element of col and matrix[row][0] first element of row

        //now check for first row and col


        bool firstRowImpacted=false;

        bool firstColImpacted=false;


        for(int col=0;col<m;col++){
            if(matrix[0][col]==0){
                firstRowImpacted=true;
            }
        }
        for(int row=0;row<n;row++){
            if(matrix[row][0]==0){
                firstColImpacted=true;
            }
        }



        for(int row=1;row<n;row++){
            for(int col=1;col<m;col++){
                if(matrix[row][col]==0){
                    matrix[row][0]=0;
                    matrix[0][col]=0;
                }
            }
        }


        for(int row=1;row<n;row++){
            for(int col=1;col<m;col++){
                if(matrix[row][0]==0 || matrix[0][col]==0){
                    matrix[row][col]=0;
                }
            }
        }

        //now check if first Row and Col are impacetd or not

        if(firstRowImpacted){
            for(int col=0;col<m;col++){
                matrix[0][col]=0;
            }
        }

        if(firstColImpacted){
            for(int row=0;row<n;row++){
                matrix[row][0]=0;
            }
        }


    }
};