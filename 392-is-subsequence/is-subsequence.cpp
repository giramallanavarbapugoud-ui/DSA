class Solution {
public:
    bool isSubsequence(string s, string t) {
        string str(s.length(),' ');
        int i=0;
        for(int j=0;j<t.length();j++){
            if(s[i]==t[j]){
                str[i]=s[i];
                i++;
            }
        }
        if(str==s){
            return true;
        }
        return false;
    }
};