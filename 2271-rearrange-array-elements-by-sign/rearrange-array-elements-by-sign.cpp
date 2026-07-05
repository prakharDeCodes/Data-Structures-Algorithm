class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        for (int x : nums) {
            if (x > 0)
                pos.push_back(x);
            else
                neg.push_back(x);
        }

        vector<int> ans;

        for (int i = 0; i < pos.size(); i++) {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }

        return ans;
    }
};

// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         int n=nums.size();

//         vector<int> ans(n);

//         int pos=0;
//         int neg=1;

//         for (int i=0; i<n;i++) {

//             if (nums[i]>0) {
//                 ans[pos]=nums[i];
//                 pos = pos + 2;
//             }
//             else {
//                 ans[neg] = nums[i];
//                 neg = neg + 2;
//             }

//         }

//         return ans;
//     }
// };