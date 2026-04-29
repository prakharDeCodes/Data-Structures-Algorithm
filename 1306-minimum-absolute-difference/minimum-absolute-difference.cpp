class Solution {
public:
   
   
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int md = INT_MAX;
        for (int i = 0; i < (int)arr.size() - 1; i++)

            md = min(md, arr[i + 1] - arr[i]);
         vector<vector<int>> result;
        
        for (int i = 0; i < (int)arr.size() - 1; i++)

       

            if ( arr [ i + 1] - arr[i] ==md)

                  
              
                  result.push_back({arr[i], arr[i + 1]});













        return result;
    }
};