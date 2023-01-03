#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> result;
        int i=0;

for(auto str:tokens)        {
        
if(str !="+" and str!="-" and str!="/" and str!="*")
{
            int op = stoi(str);

result.push(op);

}
else
{

int a = result.top();
result.pop();
int b =result.top();
result.pop();
if(str == "+"){result.push((b+a));}

else if(str =="*"){result.push(b*a);}
else if(str =="/"){result.push(b/a);}
else if(str == "-"){result.push(b-a);}

}

        }
return result.top();
    }
};