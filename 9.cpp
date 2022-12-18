// problem link: https://leetcode.com/problems/palindrome-number/description/

// problem description: Given an integer x, return true if x is a palindrome, and false otherwise.

// test cases: 121, -121, 10

class Solution {
public:
    bool isPalindrome(int x) {

        // if x is less than zero, or x is not zero and x modulo of 10 is zero, return false
        if(x<0|| (x!=0 &&x%10==0)) return false;

        // setup sum variable
        int sum = 0;

        // while x is greater than sum
        while(x>sum)
        {
            // sum becomes sum times 10 plus x modulo 10
            sum = sum * 10 + x % 10;

            // x becomes x divided by 10
            x = x/10;
        }

        // return boolean depending on if x is equal to sum or x is equal to sum divided by 10
        return (x == sum) || (x == sum / 10);
    }
};