class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> nums1(nums.size());
        int j=0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                nums1[j]=nums[i];
                j++;
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