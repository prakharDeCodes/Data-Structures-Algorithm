class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        long long sum = 0;
        for (int x : nums)
            sum = sum+ x;

        for (int i = nums.size() - 1; i >= 2;i--){


            if (sum > 2LL *nums[i])

                return sum;

            sum = sum- nums[i];
        }



        return -1;
    }
};