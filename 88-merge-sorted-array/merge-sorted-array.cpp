class Solution {
public:
     vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int j=0,k=0;
      vector<int> nums(m);
      if(n==0){
        return nums1;
      }
     if(m == 0) {
     for(int i = 0; i < n; i++) {
        nums1[i] = nums2[i];
    }
    return nums1;
    }
      for(int i=m;i<m+n;i++){
        nums1[i]=nums2[j];
        j++;
      }
      sort(nums1.begin(),nums1.end());
      return nums1;
    }
};