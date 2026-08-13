class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n==1){
            return true;
        }
       for(int i=1;i<31;i++){
       int x=pow(2,i);
        if(x==n){
            return true;
        }
       }
       return false;

        
    };
};