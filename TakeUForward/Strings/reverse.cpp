// Reverse a string
class Solution{	
	public:		
		void reverseString(vector<char>& s){
			//your code goes here
			int start = 0, end = s.size() - 1;

			while (start < end ){
				char ch = s[start];
				s[start] = s[end];
				s[end] = ch;

				start++;
				end--;
			}
			return;
		}
};