class Solution {
public:
    int kthFactor(int n, int k) {
        int factor = 0;
        for(int i=1; i<=n; i++){
            if(n%i == 0 && k>0){
                factor = i;
                k--;
            }
        }
        if(k>0) return -1;
        return factor;
    }
};