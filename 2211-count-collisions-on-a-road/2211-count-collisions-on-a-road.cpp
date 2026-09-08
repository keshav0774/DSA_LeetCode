class Solution {
public:
    int countCollisions(string directions) {
        
        stack<char>st;
        int collision = 0;
        for(int i=0; i<directions.size(); i++){
            if(directions[i] == 'R' ) st.push(directions[i]);
            else if (directions[i] == 'S') {
                while (!st.empty() && st.top() == 'R') {
                    collision += 1;
                    st.pop();
                }
                st.push('S'); 
            }
            else if(directions[i] == 'L'){
                bool collide = false;

                if(!st.empty() && st.top() == 'R'){
                    collision += 2;
                    st.pop(); 
                    collide = true;
                }
                else if(!st.empty() && st.top() == 'S'){
                    collision += 1;
                    collide = true;
                }
                if(collide){
                    while(!st.empty() && st.top() == 'R'){
                        collision += 1;
                        st.pop();
                    }
                    st.push('S');
                }

            }
        }
        return collision;
    }
};