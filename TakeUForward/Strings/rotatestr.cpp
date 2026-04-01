// Rotate String 
// optimal
class Solution{	
	public:
		bool rotateString(string& s,string& goal){
			//your code goes here
            if( s.length() != goal.length()){
                return false;
            }
            string doubles = s + s;
            return doubles.find(goal) != string::npos;
		}
};