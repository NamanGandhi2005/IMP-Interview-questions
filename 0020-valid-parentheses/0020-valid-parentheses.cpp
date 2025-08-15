class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        for(auto ch:s){
            if(!st.empty() && (st.top()=='(' && ch==')' || st.top()=='{' && ch=='}' || st.top()=='[' && ch==']')){
                st.pop();
                

            }
            else if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }
            else{
                return false;
            }
        }

        if(st.empty()){
            return true;
        }
        return false;
    }
};