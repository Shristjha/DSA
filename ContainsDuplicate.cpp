// Contains Duplicate

/*
Brute Force
TC: O(n²)
SC: O(1)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        for(int i = 0; i < nums.size(); i++) {

            for(int j = i + 1; j < nums.size(); j++) {

                if(nums[i] == nums[j])
                    return true;
            }
        }

        return false;
    }
};
*/

/*
Better
TC: O(n log n)
SC: O(1)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] == nums[i - 1])
                return true;
        }

        return false;
    }
};
*/

// Optimal
// TC: O(n)
// SC: O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {

            if(mp.find(nums[i]) != mp.end())
                return true;

            mp[nums[i]]++;
        }

        return false;
    }
};
