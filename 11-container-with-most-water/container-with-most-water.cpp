class Solution {
public:
    int maxArea(vector<int>& height) {
        int st=0;
        int end=height.size()-1;
        int maxArea=0;
        while (st<end)
        {int w;
        int ht;
        int area;
           w=end-st;
           ht=min (height[end],height[st]);
           area=w*ht;
           maxArea=max(area,maxArea);
           if(height[st]<height[end])
           st++;
           else
           
            end--;
           

        }
        //asdfghj
        
        return maxArea;
        
    }
};