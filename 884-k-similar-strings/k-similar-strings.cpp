#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kSimilarity(string s1, string s2) {
        if (s1 == s2) return 0;

        queue<pair<string, int>> q;
        unordered_set<string> visited;

        q.push({s1, 0});
        visited.insert(s1);

        while (!q.empty()) {
            auto [curr, swaps] = q.front();
            q.pop();

            int i = 0;
            while (curr[i] == s2[i]) i++;

            for (int j = i + 1; j < curr.size(); j++) {
                if (curr[j] == s2[i]) {
                    swap(curr[i], curr[j]);

                    if (curr == s2) return swaps + 1;

                    if (!visited.count(curr)) {
                        visited.insert(curr);
                        q.push({curr, swaps + 1});
                    }

                    swap(curr[i], curr[j]);
                }
            }
        }
        return -1;
    }
};