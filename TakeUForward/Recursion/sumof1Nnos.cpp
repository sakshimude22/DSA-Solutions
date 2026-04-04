// sum of first N numbers
class Solution{	
	public:
		int NnumbersSum(int N){
		int sum = 0;
        for(int i=1;i<=N;i++){
            sum = sum + i;
        }
        return sum;
		}
}