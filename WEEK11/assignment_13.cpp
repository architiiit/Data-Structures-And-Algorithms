
//LEETCODE 1472 Design Browser History
class BrowserHistory {
    stack<string>browserStack,forwardStack;
public:

    BrowserHistory(string homepage) {
        browserStack.push(homepage);
    }
    
    void visit(string url) {
        //let's clear a all fwd history

        while(!forwardStack.empty())
        {
            forwardStack.pop();
        }
        browserStack.push(url);
    }
    
    string back(int steps) {
        while(steps--)
        {
            //ek baar back jaayenge
            if(browserStack.size()>1)
            {
                forwardStack.push(browserStack.top());
                browserStack.pop();
            }
            else{
                //only homepage is present
                //back not possible
                break;
            }
        }
        return browserStack.top();
    }
    
    string forward(int steps) {

        while(steps--)
        {
            if(!forwardStack.empty())
            {
                browserStack.push(forwardStack.top());
                forwardStack.pop();
            }
            else{
                break;
            }
        }
        return browserStack.top();
    }
};