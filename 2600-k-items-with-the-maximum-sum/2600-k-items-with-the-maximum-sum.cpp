class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        
        int sum = 0;
        for(int i=0; i<k; i++){

            while(i<k && i<numOnes){
                sum += 1;
                i++;
            }
            while(i<k && numZeros>0){
                sum += 0; 
                i++, numZeros--;
            }
            while(i<k && numNegOnes>0){
                sum -= 1;
                i++ , numNegOnes--;
            }
        }
        return sum;
    }
};