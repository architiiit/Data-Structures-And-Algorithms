//LEETCODE:225 stack using queue

//Method 1 using 2 queues
class MyStack {
public:
    queue<int>q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        //step1:Push to Q2
        q2.push(x);
        //step2:move all elements from Q1 to Q2
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        //step3:move all elements from Q2 to Q1
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        int top=-1;
        if(!q1.empty())
        {
            top=q1.front();
            q1.pop();
        }
        return top;
    }
    
    int top() {
        int top=-1;
        if(!q1.empty())
        {
            top=q1.front();
        }  
        return top; 
    }
    
    bool empty() {
        return q1.empty();
    }
};


//Method2 using only one queue
class MyStack {
public:
queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        for(int i=0;i<q.size()-1;i++)
        {
            int top=q.front();
            q.pop();
            q.push(top);
        }
    }
    
    int pop() {
        int top=-1;
        if(!q.empty())
        {
            top=q.front();
            q.pop();
        }
    return top;
    }
    
    int top() {
        int top=-1;
        if(!q.empty())
        {
            top=q.front();
        }
    return top;
    }
    
    bool empty() {
        return q.empty();
    }
};

