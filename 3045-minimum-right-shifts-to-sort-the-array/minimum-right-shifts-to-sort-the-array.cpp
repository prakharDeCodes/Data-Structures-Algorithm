class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        int breakCount = 0, breakoo = -1;

        for (int i = 0; i < n; i++) {
            int next = (i + 1) % n;
            if (nums[i] > nums[next]) {
                breakCount++;
                breakoo = i;
            }
        }

        if (breakCount == 0) return 0;          
        if (breakCount > 1) return -1;         

        
        return n - breakoo - 1;
    }
};