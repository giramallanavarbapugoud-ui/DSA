class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int nums2[n];
        for(int i=0;i<n-1;i=i+2){
            int a=nums1[i] +nums1[i+1];
           if(a%2==0){
            nums2[i]=nums1[i];
            nums2[i+1]=nums1[i+1];
           }
           else{
            nums2[i]=nums1[i]-nums1[i+1];
           }
        }
        return true;
    }
};