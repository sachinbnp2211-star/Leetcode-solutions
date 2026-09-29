class Solution {
public:
    int singleNumber(vector<int>& arr) {
        // sort(arr.begin(),arr.end());
        // int n=arr.size()-1;
        // for(int i=0;i<n-1;i+=3)
        // {
        //     if(arr[i]==arr[i+1])
        //     {
        //         continue;
        //     }
        //     else{
        //         return arr[i];
        //     }
        // }
        // return arr[arr.size()-1];
        int ones=0;
        int twos=0;
        for(int i=0;i<arr.size();i++)
        {
            ones=(ones^arr[i]) & ~twos;
            twos=(twos^arr[i]) & ~ones;
        }
        return ones;
        
    }
};