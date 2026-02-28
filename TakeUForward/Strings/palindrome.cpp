// Check if the string is palindrome
class Solution{	
	public:		
		bool palindromeCheck(string& s){
			//your code goes here
			int start = 0, end = s.length() -1;

			while(start < end){
				if(s[start] != s[end]){
					return false;
				}
				start++;
				end--;
			}
			return true;
		}
};