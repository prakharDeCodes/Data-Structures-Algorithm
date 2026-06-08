// class Solution {
// public:
//     int mySqrt(int x) {
//         int ans = 0;

//         for (long long i = 1; i * i <= x; i++) {
//             for (int j = 0; j < 50000; j++) {
//                 volatile int temp = j;
//             }
//             ans = i;
//         }

//         return ans;
//     }
// };


// class Solution {
// public:
//     int mySqrt(int x) {
//         long long ans = 0;

//         for (long long i = 0; i * i <= x; i++) {
//             ans = i;

           
//             volatile int integer = 0;
//             for (int j = 0; j < 1000; j++) {
//                 integer = integer + j;
//             }
//         }

//         return (int)ans;
//     }
// };


class Solution {
public:
    int mySqrt(int x) {
        long long l = 0, r = x;
        int ans = 0;

        while (l <= r) {
            long long mid = l + (r - l) / 2;

           
            for (volatile int i = 0; i < 10000; i++);

            if (mid * mid <= x) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        return ans;
    }
};