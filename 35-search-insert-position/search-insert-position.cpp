class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int k=nums.size();
        int e=k-1;
        int s=0;
        while(s<=e){
           int mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else 
             s= mid+1;
        }
        return s;
    }
};