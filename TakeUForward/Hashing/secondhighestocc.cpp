// Second Highest Occurancy 
class Solution {
public:
    int secondMostFrequentElement(vector<int>& arr) {
        int n = arr.size();
        
        unordered_map<int, int> mpp;
        
        
        for(int i = 0; i < n; i++){
            mpp[arr[i]]++;
        }

        int el1 = -1, el2 = -1;
        int el1freq = 0, el2freq = 0;

        
        for(auto it : mpp){ 
            int ele = it.first;
            int freq = it.second;

            if(freq > el1freq){
                el2freq = el1freq;
                el2 = el1;

                el1freq = freq;
                el1 = ele;
            }
            else if(freq == el1freq){
                
                if(ele < el1){
                    el1 = ele;
                }
            }
            else if(freq > el2freq){
                el2freq = freq;
                el2 = ele;
            }
            else if(freq == el2freq){
                
                if(ele < el2){
                    el2 = ele;
                }
            }
        }

        return el2;
    }
};