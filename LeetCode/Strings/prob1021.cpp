// 1021. Remove Outermost Parentheses
class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        stack<int> st;
        for(auto c:s){
            if(c == ')'){
                st.pop();
            }
            if(!st.empty()){
                res.push_back(c);
            }
            if(c == '('){
                st.emplace(c);
            }
        }
        return res;

    }
};