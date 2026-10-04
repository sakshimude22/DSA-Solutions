// 678. Valid Parenthesis String
class Solution {
public:
    bool checkValidString(string s) {
        stack<int> openbrac;
        stack<int> asterick;

        for(int i = 0; i < s.length(); i++){
            char ch = s[i];

            if(ch == '('){
                openbrac.push(i);
            }
            else if (ch == '*'){
                asterick.push(i);
            }
            else{
                if(!openbrac.empty()){
                    openbrac.pop();
                }
                else if(!asterick.empty()){
                    asterick.pop();
                }
                else{
                    return false;
                }
            }
        }
        while(!openbrac.empty() && !asterick.empty()){
            if(openbrac.top() > asterick.top()){
                return false;
            }
            openbrac.pop();
            asterick.pop();
        }
        return openbrac.empty();
    }
};