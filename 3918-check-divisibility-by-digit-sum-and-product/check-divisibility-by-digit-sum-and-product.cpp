class Solution {
public:
    bool checkDivisibility(int n) {
        int original = n;
        int sum = 0;
        int pro = 1;

        while (n != 0) {
            int digit = n % 10;

            sum = sum + digit;
            pro = pro * digit;

            n = n / 10;
        }

        int k = sum + pro;

        if (original%k == 0) {
            return true;
        }

        return false;
    }
};