// problem link: https://leetcode.com/problems/two-sum/description/

// problem description: Given an array of integers nums and an integer target, 
// return indices of the two numbers such that they add up to target.

// test case: nums = [2,7,11,15]
//            target = 9


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // map definition
        map<int,int>mp;

        // vector definition for the answer
        vector<int>ans;

        // variable for the array size of nums
        int n = nums.size();

        // variable for 
        int rq;

        // for every item in nums
        for(int i=0;i<n;i++)
        {
            // for every item in nums, target - number
            rq = target-nums[i];

            // if the mapped rq is not the last value
            if(mp.find(rq)!=mp.end())
            {
                // adding in the current value of num to the answer
                ans.push_back(i);

                // adding in the target - current value of num to the answer
                ans.push_back(mp[rq]);

                // returning the answer
                return ans;
            }

            // adjusting the map before the next loop
            mp[nums[i]] = i;
        }

        // returning answer
        return ans;
    }
};