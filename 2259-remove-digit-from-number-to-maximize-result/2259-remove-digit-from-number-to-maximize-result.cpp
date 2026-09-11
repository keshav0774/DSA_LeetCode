class Solution {
public:
    string removeDigit(string number, char digit) {
          
        string ans = "";
        for(int i = number.size()-1; i>=0; i--){
            string num = number;
            if(number[i] == digit){
                string temp = number;
                temp.erase(i,1);
                if(temp > ans) ans = temp;
            }
        }
        
        return ans;
    }
};