#include <iostream>
#define SIZE 5
using namespace std;

class Queue
{
private:
    int items[SIZE], front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isFull()
    {
        if (front == 0 && rear == SIZE - 1)
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if (front == -1)
            return true;
        else
            return false;
    }

    void enQueue(int element)
    {
        if (isFull())
        {
            cout << "Queue is full";
        }
        else
        {
            if (front == -1)
                front = 0;
            rear++;
            items[rear] = element;
            cout << "\nInserted " << element << endl;
        }
    }

    int deQueue()
    {
        int element;
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return (-1);
        }
        else
        {
            element = items[front];
            if (front >= rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front++;
            }
            cout << "Deleted -> " << element << endl;
            return (element);
        }
    }

    void display()
    {
        int i;
        if (isEmpty())
        {
            cout << "\nEmpty Queue" << endl;
        }
        else
        {
            cout << "\nFront index-> " << front;
            cout << "\nItems -> ";
            for (i = front; i <= rear; i++)
            {
                cout << items[i] << "  ";
            }
            cout << "\nRear index-> " << rear << endl;
        }
    }
};

int main()
{
    Queue q;
    q.deQueue();
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);
    q.display();
    q.deQueue();
    q.display();

    return 0;
}