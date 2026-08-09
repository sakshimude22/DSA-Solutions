// 3360. Stone Removal Game
class Solution {
public:
    bool canAliceWin(int n) {
       int val = 10;
       bool aliceturn = true;
       bool alicewins = false;
       while(n >= 0){
        if(aliceturn && n - val < 0){
            break;
        }
        else if(!aliceturn && n - val < 0){
            alicewins = true;
            break;
        }
        aliceturn = !aliceturn;
        n -= val;
        val--;
       }
       if(alicewins)
       return true;
       else
       return false;
    }
};