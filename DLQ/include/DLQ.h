#ifndef DLQ_H
#define DLQ_H
struct Qnode
	{
		int info;
		Qnode *next;
	};

struct DQueue
		{
			Qnode *front;
			Qnode *back;
		};

class DLQ
{
    public:
        int empty(DQueue *q);
	int dequeue(DQueue *q);
	void printQueue(DQueue *q);
	void enqueue(DQueue *q,int x);
        DLQ();
        virtual ~DLQ();

    protected:

    private:
};

#endif // DLQ_H
