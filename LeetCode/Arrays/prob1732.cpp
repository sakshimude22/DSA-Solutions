// 1732. Find the Highest Altitude
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currentAlt = 0;
        int maxAlt = 0;

        for(int g : gain){
            currentAlt += g;
            maxAlt = max(maxAlt, currentAlt);
        }
        return maxAlt;
    }
};