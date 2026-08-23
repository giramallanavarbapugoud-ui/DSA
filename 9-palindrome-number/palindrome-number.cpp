

class Solution {

    public:
     bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int temp = x;
        long reversenum = 0;

        while (x != 0) {
            int digit = x % 10;
            reversenum = reversenum * 10 + digit;
            x = x / 10;
        }

        return reversenum == temp;
    }

   
};