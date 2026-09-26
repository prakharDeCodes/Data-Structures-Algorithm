class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string cur;
        solve(n, 0, 0, cur, ans);

        return ans;
    }

private:
    void solve(int n, int op, int close,
               string& cur, vector<string>& ans) {
        if (cur.length() == n*2) {
            ans.push_back(cur);
            return  ;
        } 
        if (op< n){

            cur.push_back('(');
            solve(n, op+ 1, close, cur, ans);
            cur.pop_back();
        }
        if (close < op) {
            cur.push_back(')');
            solve(n, op, close+1, cur, ans);
            cur.pop_back();
        }
    }
};