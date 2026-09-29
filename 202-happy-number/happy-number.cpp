class Solution {
public:
    bool isHappy(int n) { 
        vector<int> count;
        if(n==1) return 1;
        int sum=0;
        int num=n;  
        while(num!=0){
            int dig=num%10;
            int a=dig*dig;
            sum=sum+a;
            num=num/10;
            if(num==0){
                num=sum;
                 if(sum==1){
                    return true;
                }
                for(int i=0;i<count.size();i++){
                   if( count[i]==sum)
                    return false;
                } 
                count.push_back(sum);
                sum=0;
            }
             
            

        }
        return true;
    }
};