class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mx;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int fre=0;

        for(int x:nums){
            mx[x]++;
        }
        for(int x:nums){
            if(mx[x]>n/2){
                return x;
            }
        }
        return 0;
    }
};