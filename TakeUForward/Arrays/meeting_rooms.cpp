// 72. Meeting Rooms
class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        // Your code goes here
        //sort(intervals.begin(), intervals.end())
        int n = intervals.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(intervals[i][1] > intervals[j][0] && intervals[i][0] < intervals[j][1]){
                    return false;
                }
            }
        }
        return true;
    }
};