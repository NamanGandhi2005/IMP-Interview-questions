class Solution {
public:
    void nextSmaller(vector<int>&heights,vector<int>&next){
        stack<int>st;
        st.push(-1);

        int n=heights.size();

        for(int i=n-1;i>=0;i--){
            while(st.top()!=-1 && heights[st.top()]>=heights[i]){
                st.pop();
            }
            next[i]=st.top();
            st.push(i);
        }
        
    }
    void prevSmaller(vector<int>&heights,vector<int>&prev){
        stack<int>st;
        st.push(-1);

        int n=heights.size();

        for(int i=0;i<n;i++){
            while(st.top()!=-1 && heights[st.top()]>=heights[i]){
                st.pop();
            }
            prev[i]=st.top();
            st.push(i);
        }
        
    }

    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();

        vector<int>next(n);
        nextSmaller(heights,next);

        vector<int>prev(n);
        prevSmaller(heights,prev);

        int currArea=0;
        int maxArea=INT_MIN;

        for(int i=0;i<n;i++){
            int length=heights[i];

            if(next[i]==-1){
                next[i]=n;
            }

            int width=next[i]-prev[i]-1;

            currArea=length*width;

            maxArea=max(maxArea,currArea);


        }
        return maxArea;
        
    }
};