class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        int b=0;
        for(int i=0;i<n;i++){
            bool uni =true;
            for(int j=0;j<n;j++){
                if(i!=j && s[i]==s[j]){
                    uni=false;
                    break; 
                }
            }
            if(uni==true){
                return i;
        }
           
        }
      
        return -1;
       
    }
};