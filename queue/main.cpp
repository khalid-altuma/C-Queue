#include <iostream>

using namespace std;

#define SIZE 5
int queue[SIZE]
int front = -1;
int rear = -1;
void enqueue (int value);
void dequeue ();



int main()
{

    return 0;
}

void enqueue (int value)
{
    if (rear != SIZE - 1)
    {
        if ( front == -1 && rear == -1){


            front++;
            queue[++rear] = value;
        }
        else {
                queue[++rear] = value;

        }

    }
    else {
        cout << "queue is full..." << endl;
    }
}void dequeue (){




}

