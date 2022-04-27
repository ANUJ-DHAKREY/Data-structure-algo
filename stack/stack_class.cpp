#include<iostream>

using namespace std;

class myStack {
    private:
int peak =-1;
int arr[10000];


public:

void push(int a){
    if(peak!= 10000){
        peak++;
        arr[peak] = a;
    }
    else{
        cout << "stack overflowed"<<endl;
    }
}

void pop(){
    if(peak!=-1){
        peak--;
    }
    else{
        cout << "stack is empty" << endl;
    }
}
int top(){
    if(peak == -1){
        cout << "stack is empty" << endl;
        return INT_MIN;
    }
    return arr[peak];
}

bool isempty(){
    if(peak ==-1){
        return true;
    }
    else{
        return false;
    }
}

};

int main(){

    myStack obj1;
    obj1.push(2);
    obj1.push(3);
    obj1.push(6);
    obj1.push(9);
    obj1.push(3);
    int up = obj1.top();
    obj1.pop();
    up = obj1.top();
    cout << up << endl;
    obj1.peak = 10;
    return 0;
}