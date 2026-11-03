class Solution {
public:
    string sortVowels(string s) {
        vector<int>upper(26,0);
        vector<int>lower(26,0);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') lower[s[i]-'a']++;
            else if(s[i]=='A'|| s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') upper[s[i]-'A']++; 
        }
        string ans;
        for(int i=0;i<upper.size();i++)
        {
            char ch = i+'A';
            while(upper[i])
            {
                ans += ch; 
                upper[i]--;
            }
        }
        for(int i=0;i<lower.size();i++)
        {
            char ch = i+'a';
            while(lower[i])
            {
                ans += ch;
                lower[i]--;
            }
        }
        int i=0, j=0;
        int size1= s.size();
        int size2 = ans.size();
        while(i<size1 && j<size2)
        {
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'|| s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                s[i]=ans[j];
                j++;
            }
            i++;
        }
        return s;
    }
};