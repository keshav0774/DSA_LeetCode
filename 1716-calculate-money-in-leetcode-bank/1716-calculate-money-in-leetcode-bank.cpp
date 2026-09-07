class Solution {
public:
    int totalMoney(int n) {
        long long sum = 0;
        int previousMonday = 0;
        while(n >0){
            int temp = 0;
            int i = 1;
            while(i <= 7 && n>0){
                temp += i + previousMonday;
                i++ ,n--;
            }
            sum += temp;
            previousMonday++;
        }
        return sum;
    }
};