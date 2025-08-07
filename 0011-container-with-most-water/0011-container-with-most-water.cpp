class Solution {
public:
    int maxArea(vector<int>& height) {
        //left aur right dono me se dekhenge jo chota hoga usi trf pointer ++;

        //area=length*maxheight;

        int n=height.size();

        int left=0;
        int right=n-1;

        int maxArea=INT_MIN;
        
        while(left<right){
            int minHeight=min(height[left],height[right]);
            int length=right-left;
            int currArea=length*minHeight;
            maxArea=max(maxArea,currArea);

            if(height[left]<height[right]){
                left++;
            }
            else if(height[left]>height[right]){
                right--;
            }
            else if(height[left]==height[right]){
                left++;
                right--;
            }
            
        }
        return maxArea;
    }
};