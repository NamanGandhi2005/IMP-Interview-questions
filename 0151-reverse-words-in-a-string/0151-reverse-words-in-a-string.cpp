class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();

        string ans="";
        string temp="";

        int index=n-1;

        while(index>=0){
            if(index>=0 && s[index]==' '){
                if(!ans.empty()){
                    ans=ans+' ';

                }
                reverse(temp.begin(),temp.end());
                ans=ans+temp;
                temp="";
                
                while(index>=0 && s[index]==' '){
                    index--;
                }
            }
            else{
                temp.push_back(s[index]);
                index--;
            }
        }

        if(!temp.empty()){
            if(!ans.empty()){
                ans=ans+' ';
            }
            reverse(temp.begin(),temp.end());
            ans=ans+temp;
        }

        return ans;


    }
};