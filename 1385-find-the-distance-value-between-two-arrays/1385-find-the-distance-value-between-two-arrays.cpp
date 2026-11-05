class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        sort(arr2.begin(), arr2.end());
        int count = 0;
        for(int i=0; i<arr1.size(); i++){

            auto it = std::lower_bound(arr2.begin(), arr2.end(),arr1[i]); 
            bool isValid = true;
            if(it != arr2.end()) {
                if(abs(arr1[i] - *it) <= d) {
                    isValid = false;
                }
            }
            
            // 2. Jo element theek pehle hai (it - 1), uska bhi absolute difference check karo
            if(it != arr2.begin()) {
                auto prev_it = it - 1;
                if(abs(arr1[i] - *prev_it) <= d) {
                    isValid = false;
                }
            }

            if(isValid)
             count++;
        }
    
       
        return count;
    }
};