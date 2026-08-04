bool comp(string &s1, string& s2){
    return (s1+s2) > (s2+s1);
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>temp;
        for(int i=0;i<nums.size(); i++){
            temp.push_back(to_string(nums[i]));
        }
        sort(temp.begin(), temp.end(), comp);
        if(temp[0] == "0") return "0";
        string ans="";
        for(int i=0;i<temp.size(); i++) ans+=temp[i];
        return ans;
    }
};