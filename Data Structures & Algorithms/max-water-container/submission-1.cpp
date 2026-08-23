class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0,j=n-1;
        int amax=0;
        while(i<j){
            int h1=heights[i],h2=heights[j];
            int minh=min(h1,h2);
            int area=(j-i)*minh;
            if(minh==h1) i++;
            else j--;
            amax=max(area,amax);
        }
        return amax;
    }
};
