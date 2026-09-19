class Solution {
public:
    bool isPalindrome(int x) {

        // Negative numbers are never palindrome
        // Numbers ending in 0 are not palindrome, except 0 itself
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int rev = 0;

        // Reverse only half of the number
        while (x > rev) {
            rev = rev * 10 + x % 10;
            x = x / 10;
        }

        // Even number of digits: x == rev
        // Odd number of digits: ignore middle digit using rev / 10
        return x == rev || x == rev / 10;
    }
};