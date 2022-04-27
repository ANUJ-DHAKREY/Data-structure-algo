
//problem link https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1#

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack s;
        for(int i=0; i<x.size(); i++){
            if(x[i] =='[' or x[i] =='(' or x[i] =='{'){
                s.push(x[i]);
            }
            else{
                if(x[i]=='}'){
                    char c = s.top();
                    if(c!= '{'){
                        return false;
                    }
                    s.pop();
                }
                else if(x[i]==']'){
                    char c = s.top();
                    if(c!= '['){
                        return false;
                    }
                    s.pop();
                }
                else{
                    char c = s.top();
                    if(c!= '('){
                        return false;
                    }
                    s.pop();
                }
                }
            }
           if(!s.empty()){
               return false;
           }
           
           return true;
        }
    }

};