class MinStack {
  
public:
stack<int> minStack;
stack<int> small;
    MinStack() {
     while(!minStack.empty())minStack.pop();
     while(!small.empty())small.pop();
    }
    
    void push(int val) {
     minStack.push(val);
     if(small.empty()||val<=small.top())small.push(val);
     
    }
    
    void pop() {
     
      if(minStack.top()==small.top()) small.pop();
       minStack.pop();
    if(small.empty()&&!minStack.empty()) small.push(minStack.top());
    }
    
    int top() {
        return  minStack.top();
    }
    
    int getMin() {
        return small.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
