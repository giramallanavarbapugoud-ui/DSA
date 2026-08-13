class Solution {
public:
    int bitwiseComplement(int n) {
        int x=n;
        int dummy=0;
        if (n==0){
            return 1;
        }
        while(x!=0){
            dummy=(dummy << 1) | 1;
            x=x >> 1;

        }
        int ans= (~n) & dummy;
        return ans;
    }
};