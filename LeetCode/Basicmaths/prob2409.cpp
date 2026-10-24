// 2409. Count Days Spent Together
class Solution {
public:
    int countDaysTogether(string arrivealice, string leavealice, string arrivebob, string leavebob) {
        vector<int> dateofmonths = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        vector<int> prefixsum (1, 0);
        for(
            int date : dateofmonths
        ){
            prefixsum.emplace_back(prefixsum.back() + date);
        }
        int arrivealiceday = calculatedayofyear(arrivealice, prefixsum);
        int leavealiceday = calculatedayofyear(leavealice, prefixsum);
        int arrivebobday = calculatedayofyear(arrivebob, prefixsum);
        int leavebobday = calculatedayofyear(leavebob, prefixsum);
        return max(0, min(leavealiceday, leavebobday)-max(arrivealiceday, arrivebobday) + 1);
    }
    int calculatedayofyear(const string& day, const vector<int>& prefixsum){
        int month = stoi(day.substr(0,2));
        int date = stoi(day.substr(3));
        return prefixsum[month - 1] + date;
    }
};