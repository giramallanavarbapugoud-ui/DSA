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
            fre =max(fre,mx[x]);
            

        
        }
        for(auto a:mx){
            if(fre==a.second){
                return a.first;
            }
        }
        return 0;
    }
};