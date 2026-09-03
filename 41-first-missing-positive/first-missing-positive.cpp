class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> nums1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                nums1.push_back(nums[i]);
            }
        }
        sort(nums1.begin(), nums1.end());
        int b = 1;
        for(int i = 0; i < nums1.size(); i++) {
            if(nums1[i] < b) {
                continue;
            }
            if(nums1[i] == b) {
                b++;
            }
            else {
                break;
            }
        }

        return b;
    }
};