class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int maxWater=0;
        while(l<r){
            int width=r-l;
            int ht=min(height[l],height[r]);
            int currWater=width*ht;
            maxWater=max(maxWater,currWater);
            if(height[l]<height[r]){
            l++;
        }else{
            r--;
        }
        }
        return maxWater;
    }
};