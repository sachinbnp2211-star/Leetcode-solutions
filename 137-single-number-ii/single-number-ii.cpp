class Solution {
public:
    int singleNumber(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size()-1;
        for(int i=0;i<n-1;i+=3)
        {
            if(arr[i]==arr[i+1])
            {
                continue;
            }
            else{
                return arr[i];
            }
        }
        return arr[arr.size()-1];
        
    }
};