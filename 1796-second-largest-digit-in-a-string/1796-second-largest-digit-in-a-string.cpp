class Solution {
public:
    int secondHighest(string s) {
        
        int first = -1;
        int second = -1;
        for(int i=0; i<s.size(); i++){
            
           if(isdigit(s[i])){
            int num  = s[i] - '0';
            if(num > first){
                second = first; 
                first = num;
            }
            else if(num > second && num != first) second = num;
           }
        }
        return second;
    }
};