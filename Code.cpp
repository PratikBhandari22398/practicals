#include <iostream>
using namespace std;

class Queue
{
public:
    int A[5];
    int front;
    int rear;

    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int value)
    {
        // Check Queue Overflow
        if (rear == 4)
        {
            cout << "Queue Overflow!" << endl;
            return;
        }

    
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        A[rear] = value;

        cout << value << " added in Queue." << endl;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    return 0;
}
