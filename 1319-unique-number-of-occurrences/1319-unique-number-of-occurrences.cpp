class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>occur;

        int n=arr.size();
        unordered_map<int,int>mp;


        for(auto num:arr){
            mp[num]++;
            
        }

        unordered_set<int>st;

        for(auto it:mp){
            st.insert(it.second);
        }

        if(st.size()==mp.size()){
            return true;
        }

        return false;

        





    }
};