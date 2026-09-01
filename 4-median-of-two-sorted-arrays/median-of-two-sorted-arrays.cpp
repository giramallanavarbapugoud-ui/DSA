class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int c=nums1.size();
        int s=0;
        int e=c-1;
        int mid=s +(e-s)/2;
        if(c%2!=0){
            return nums1[mid];
        }
        else{
            double a= double(nums1[mid]+nums1[mid+1])/2;
            return a;
        }
    }
};