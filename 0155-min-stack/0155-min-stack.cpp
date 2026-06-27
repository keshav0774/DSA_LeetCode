class MinStack {
private:
   vector<int>stack;
   vector<int>minStack;
public:

    MinStack() {
        
    }
    
    void push(int value) {
        stack.push_back(value);
        
        if(minStack.empty() || value <= minStack.back()) minStack.push_back(value);
    }
    
    void pop() {
        
        if(stack.empty()) return ;

        if(stack.back() == minStack.back()) minStack.pop_back();

        stack.pop_back();
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
       return minStack.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */