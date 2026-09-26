class Solution {
public:
    string interpret(string command) {
        int n=command.length();
        for(int i=0;i<n-1;i++){
            if(command[i]=='(' && command[i+1]==')'){
                command[i]='o';
                command.erase(i+1,1);

            }
            if(command[i]=='(' && command[i+1]!=')'){
                command.erase(i,1);
            }
            if(command[i]!='(' && command[i+1]==')'){
                command.erase(i+1,1);
            }
        }
        return command;
        
    }
};