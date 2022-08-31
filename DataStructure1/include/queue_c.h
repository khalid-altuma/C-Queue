#include "queue_c.h"
#ifndef CQUEUE_H
#define CQUEUE_H




class cqueue
{
      public:
      void initialize(queuest *q);
	void printcq(queuest *q);
	int dequeue(queuest *q);
	void enqueue(queuest *q,int x);
	int empty(queuest *q);
	int full(queuest *q);

            cqueue();
            virtual ~cqueue();

      protected:

      private:
};

#endif // CQUEUE_H
