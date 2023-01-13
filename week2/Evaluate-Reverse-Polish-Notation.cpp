class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> token;
        int num[tokens.size()];
        for(int i=tokens.size()-1;i>=0;--i) token.push(tokens[i]);
        int result=stoi(token.top()); 
         int i=-1;
    while(!token.empty()){
       if(token.top()=="+"){
           token.pop();
 result=num[i-1]+num[i];
 i-=2;
token.push(to_string(result));
       }else if(token.top()=="*") {
token.pop();
 result=num[i-1]*num[i];
 i-=2;
token.push(to_string(result));
       }
    else if(token.top()=="-" ){
token.pop();
 result=num[i-1]-num[i];
 i-=2;
token.push(to_string(result));
    }
    else if (token.top()=="/" ){
token.pop();
 result=num[i-1]/num[i];
 i-=2;
token.push(to_string(result));
    }else {
         ++i;
        num[i]=stoi(token.top());
       
        token.pop();
    }

    }
    return result;
    }
};
