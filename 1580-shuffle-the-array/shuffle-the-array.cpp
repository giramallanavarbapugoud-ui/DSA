class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int a=nums.size();
        vector<int> num(a);
        int s=0;
        int e=a-1;
        int mid=s+(e-s)/2;
        int b=0;
        for(int i=0;i<n;i++){
            num[b]=nums[i];
            b++;
            if(mid+1<=a){
                num[b]=nums[mid+1];
                mid=mid+1;
                b++;

            }
        }
        return num;
    }
};