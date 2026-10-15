class Solution {
public:
    char findTheDifference(string s, string t) {
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        

        unordered_map<char,int> m;
        unordered_map<char,int> n;
        
        for(auto x:s){
            m[x]++;
        }
         for(auto y:t){
            n[y]++;
        }
        for(auto y:t){
            if(m[y]==0){
                return y;
            }
            m[y]--;
        }
        
        
        return 0;
    }
};