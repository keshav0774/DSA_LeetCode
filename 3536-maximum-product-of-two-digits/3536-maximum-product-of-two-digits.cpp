class Solution {
public:
    int maxProduct(int n) {
        int max1 = -1, max2 = -1;
        while(n>0){
            int value = n%10;
            if(value >max1){
                max2  = max1;
                max1 = value;
            }
            else if (value > max2) max2 = value;
            n = n/10;
        }
        return max1*max2;
    }
};