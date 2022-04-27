// problem link  https://practice.geeksforgeeks.org/problems/implement-queue-using-array/1/

//Function to push an integer into the stack.
void MyStack :: push(int x)
{
 top++;
 arr[top] = x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    if(top==-1){
        return -1;
    }
    int peak = arr[top];
    top--;
    return peak;
}
