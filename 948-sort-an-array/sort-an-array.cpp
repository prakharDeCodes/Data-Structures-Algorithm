class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }

private:
    void mergeSort(vector<int>& nums, int lo, int hi) {
        if (lo >= hi) return;

        int mid = lo + (hi - lo) / 2;
        mergeSort(nums, lo, mid);
        mergeSort(nums, mid + 1, hi);
        merge(nums, lo, mid, hi);
    }

    void merge(vector<int>& nums, int lo, int mid, int hi) {
        vector<int> left(nums.begin() + lo, nums.begin() + mid + 1);
        vector<int> right(nums.begin() + mid + 1, nums.begin() + hi + 1);

        int i = 0, j = 0, k = lo;
        while (i < left.size() && j < right.size())
            nums[k++] = (left[i] <= right[j]) ? left[i++] : right[j++];

        while (i < left.size())  nums[k++] = left[i++];
        while (j < right.size()) nums[k++] = right[j++];
    }
};