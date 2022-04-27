//problem link https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1

//return the address of the string
char* reverse(char *S, int len)
{
    char *res;
    res = new char[len];
    stack<char> myStack;
    for(int i=0; i<len; i++){
    myStack.push(S[i]);
    }
    int i=0;
    while(!myStack.empty()){
        char temp= myStack.top();
        res[i] = temp;
        myStack.pop();
        i++;
    }
    return res;
}