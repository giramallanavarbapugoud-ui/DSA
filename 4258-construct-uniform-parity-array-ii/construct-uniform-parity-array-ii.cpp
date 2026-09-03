class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int mn = INT_MAX;
        for(int i=0;i<n;i++){
            int x=nums1[i];
            mn=min(mn,x);
        }
        if(mn%2!=0){
            return true;
        }
        else{
            for(int i=0;i<n;i++){
                int x=nums1[i];
                if(x%2!=0){
                    return false;
                }
            }

        }
        return true;
        
    }
};