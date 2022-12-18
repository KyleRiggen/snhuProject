// problem link: https://leetcode.com/problems/roman-to-integer/description/

// problem description: Given a roman numeral, convert it to an integer.

// test case: "MCMXCIV" which returns 1994

class Solution {
public:
    int romanToInt(string s) {

        // setup map
        unordered_map<char, int> m;

        // defining map with the letter that match the numbers
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        // setup answer
        int ans = 0;
        
        // for every letter in the input string
        for(int i = 0; i < s.length(); i++){

            // if the current map item is less than the next item, minus from answer
            if(m[s[i]] < m[s[i+1]]) {
                ans -= m[s[i]];
            }

            // else if its greater or equal, add it to answer
            else {
                ans += m[s[i]];
            }
        }

        // return answer
        return ans;
    }
};