import java.util.Scanner;

class Solution {

    public boolean isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int temp = x;
        int reversenum = 0;

        while (x != 0) {
            int digit = x % 10;
            reversenum = reversenum * 10 + digit;
            x = x / 10;
        }

        return reversenum == temp;
    }

   
}