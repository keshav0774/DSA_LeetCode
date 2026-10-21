class Solution {
public:
bool isLower(char c){
    char lower = tolower(c);
    return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
}
    string reverseVowels(string nums) {
        int left = 0, right = nums.size()-1;
        while(left<right){
            while(left < right && !isLower(nums[left])){
                left++;
            }
            while(right>left && !isLower(nums[right])){
                right--;
            }

            swap(nums[left], nums[right]);
            if(left<right){
                left++, right--;
            }
        }
        return nums;
    }
};