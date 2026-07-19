class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        int rotation = 0, count=0;
        queue<int>qu;
        for(int i=0;i<students.size(); i++) qu.push(students[i]);
        int i = 0, n=sandwiches.size();
        while(!qu.empty() && i<n){
            if(qu.front() == sandwiches[i]){
                qu.pop(); 
                rotation = 0;
                i++;
                count++;
            }
            if(qu.size()==rotation) break;
            else{
                 int temp = qu.front(); 
                 qu.pop();
                 qu.push(temp);
                 rotation++;
            }
        }
     return qu.size();
    }
};