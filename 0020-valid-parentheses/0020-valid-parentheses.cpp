class Solution {
public:
    bool isValid(string str) {
       stack<char>st;

       for(int i=0;i<str.length();i++)
       {
            if(str[i]=='['|| str[i]=='{' || str[i]=='(')
              st.push(str[i]);
            else if(str[i]==']')
           {
            if(st.empty())
            return false;
            else if(st.top()=='[')
              st.pop();
            else 
               return false;
           }
           else if(str[i]=='}')
           {
            if(st.empty())
            return false;
            else if(st.top()=='{')
              st.pop();
            else 
               return false;
           }

           else 
           {
            if(st.empty())
            return false;
            else if(st.top()=='(')
              st.pop();
            else 
               return false;
           }
       } 
       return st.empty();
    }
};