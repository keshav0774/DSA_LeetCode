class Solution {
public:
    int findPeakElement(vector<int>& arr) {
       int n = arr.size();
        int start = 0, end = n - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] > arr[mid + 1]) {
                // Peak left side ya mid pe
                end = mid;
            } else {
                // Peak right side mein
                start = mid + 1;
            }
        }
        return start; 
    }
};