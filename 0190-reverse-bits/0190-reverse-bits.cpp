class Solution {
public:
    int reverseBits(int n) {
        stack<int>st;

        for(int i=0;i<32;i++){
            st.push(n%2);
            n=n/2;
        }
        int ans=0;
        int index=0;
        while(!st.empty()){
            int digit=st.top();

            if(digit==1){
                ans=ans+pow(2,index);
            }
            index++;
            st.pop();
        }

        return ans;
    }
};