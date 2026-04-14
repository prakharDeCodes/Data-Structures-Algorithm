class Solution {
public:
    void nextPermutation(vector<int>& nm) {

        
        int n = nm.size();
        int i = n - 2;

        
        while (i >= 0 && nm[i]>=nm[i + 1]){
            i--  ;
        }
        if (i >= 0) {
            int j = n - 1;
            while (nm[j] <= nm[i]) {
                j-- ;
            }
            swap(nm[i], nm[j]);
        }

        
        reverse(nm.begin() + i + 1, nm.end());
    }
};