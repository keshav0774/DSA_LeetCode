class Solution {
public:
bool isLower(char c){
    char lower = tolower(c);
    return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
}
    string reverseVowels(string s) {
        int i=0, j = s.size();
        while(i<j){
            while(i<j and (s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u' and s[i]!='A' and s[i]!='E' and s[i]!='I' and s[i]!='O' and s[i]!='U')){
                i++;
            }
            while(i<j and (s[j]!='a' and s[j]!='e' and s[j]!='i' and s[j]!='o' and s[j]!='u' and s[j]!='A' and s[j]!='E' and s[j]!='I' and s[j]!='O' and s[j]!='U')){
                j--;
            }
            swap(s[i], s[j]);
            if(i<j){
                i++, j--;
            }
        }
        return s;
    }
};