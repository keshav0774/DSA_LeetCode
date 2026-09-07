class Solution {
public:
    int smallestEvenMultiple(int n) {
        
        long long range = 2 * n;
        for(int i=1; i<=range; i++) if( i%2 == 0 && i%n == 0) return i;

        return 0;
    }
};