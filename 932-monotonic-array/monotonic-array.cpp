class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isIncreasing = false;
        bool isDecreasing = false;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i+1]) isIncreasing = true;
            if (nums[i] > nums[i+1]) isDecreasing = true;
        }

        if (isIncreasing && isDecreasing){
        return false;
        }
        return true;
    }
};