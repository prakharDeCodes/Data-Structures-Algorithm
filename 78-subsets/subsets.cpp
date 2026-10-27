class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> answer;
        vector<int> current;

        solve(0, nums, current, answer);

        return answer;
    }

    void solve(int index, vector<int>& nums,
               vector<int>& current, vector<vector<int>>& answer) {

        if (index == nums.size()) {
            answer.push_back(current);
            return;
        }

        
        current.push_back(nums[index]);

        solve(index + 1, nums, current, answer);

        
        current.pop_back();

        solve(index + 1, nums, current, answer);
    }
};