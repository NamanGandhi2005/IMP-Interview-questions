class Solution {
public:
    int minSwaps(string s) {
        stack<char>st;

        for(auto ch:s){
            if(ch=='['){
                st.push(ch);

            }
            else{
                if(!st.empty() && st.top()=='['){
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            }
        }

        int a=0;
        int b=0;
        while(!st.empty()){
            if(st.top()=='['){
                a++;
            }
            else{
                b++;
            }
            st.pop();
        }
        int ans=(a+1)/2+(b+1)/2;
        return ans/2;
    }
};