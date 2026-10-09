// 1541. Minimum Insertions to Balance a Parentheses String
class Solution {
public:
    int minInsertions(string s) {
        int insertions = 0;
        int leftcount = 0;
        int length = s.size();
        int index = 0;
        while(index < length){
            char c = s[index];
            if(c == '('){
                leftcount++;
                index++;
            }
            else{
                if(leftcount > 0){
                    leftcount--;
                }
                else{
                    insertions++;
                }
                if(index < length - 1 && s[index + 1] == ')'){
                    index += 2;
                }
                else{
                    insertions++;
                    index++;
                }
            }
        }
        insertions += leftcount * 2;
        return insertions;
    }
};