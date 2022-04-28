#include <iostream>

using namespace std;

class my_queue
{
private:
    int size = 100000;
    int *arr;
    int start, rear;

public:
    my_queue()
    {
        int size = 100000;
        arr = new int[size];
        start = 0;
        rear = 0;
    }
    void push(int x)
    {
        if (rear == size)
        {
            cout << "queue overflow" << endl;
        }
        else
        {
            arr[rear] = x;
            rear++;
        }
    }
    int pop()
    {
        if (start == rear)
        {
            return -1;
        }
        else
        {
            int popped = arr[rear];
            start++;
            if (start == rear)
            {
                start = 0;
                rear = 0;
            }
            return popped;
        }
    }
    bool is_empty()
    {
        if (start == rear)
        {
            return true;
        }
        return false;
    }
    int back()
    {
        if (is_empty())
        {
            return -1;
        }
        else
        {
            return arr[rear - 1];
        }
    }
    int front()
    {
        if (is_empty())
        {
            return -1;
        }
        else
        {
            return arr[start];
        }
    }
};

int main()
{

    my_queue obj1;
    obj1.push(10);
    obj1.push(3);
    obj1.push(40);
    obj1.push(2);
    obj1.push(6);
    obj1.push(8);
    obj1.push(9);
    int rear = obj1.back();
    int start = obj1.front();
    cout << start << endl;
    cout << rear << endl;
    cout << INT_MIN << endl;
    return 0;
}