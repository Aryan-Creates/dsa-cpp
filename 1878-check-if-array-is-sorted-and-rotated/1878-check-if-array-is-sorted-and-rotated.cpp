class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> nums1 = nums;
        vector<int> original = nums;
        sort(nums1.begin(), nums1.end());
        nums.insert(nums.end(), original.begin(), original.end());
        auto result = ranges::search(nums, nums1);
        return (!result.empty());
    }
};