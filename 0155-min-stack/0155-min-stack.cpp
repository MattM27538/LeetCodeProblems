class MinStack {
    public:
    vector<pair<int,int>> myStack;
    int minElement=INT_MAX;
    MinStack() {}
    
    void push(int val) {
        if (myStack.empty()) {minElement = val;}
        else {minElement = min(myStack.back().second,val);}
        myStack.push_back({val, minElement});
    }
    
    void pop() {
        myStack.pop_back();
    }
    
    int top() {
        return myStack.back().first;
    }
    
    int getMin() {
        return myStack.back().second;
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