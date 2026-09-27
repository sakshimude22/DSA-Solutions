// 1190. Reverse Substrings Between Each Pair of Parentheses
class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> openparenthesis;
        string result;
        for(char currentchar : s){
            if(currentchar == '('){
                openparenthesis.push(result.length());
            }
            else if(currentchar == ')'){
                int start = openparenthesis.top();
                openparenthesis.pop();
                reverse(result.begin() + start, result.end());
            }
            else{
                result += currentchar;
            }
        }
        return result;
    }
};