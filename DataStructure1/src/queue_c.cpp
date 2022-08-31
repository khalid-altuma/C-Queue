#include "queue"
#include <stdlib.h>
#include <iostream>
using namespace std;

cqueue::cqueue()
{
      //ctor
}

cqueue::~cqueue()
{
      //dtor
}
int cqueue::full(queuest *q)
{
if(q->back==q->front)
 return(1);
else
 return(0);

}

int cqueue::empty(queuest *q)
{
if(q->front==q->back)
 return(1);
else
 return(0);

}

void cqueue::enqueue(queuest *q, int x)
{
if(q->back==max1-1)
q->back=0;
else
q->back++;
if(full(q))
{
  cout<<"Cqueue is full.....";
  exit(0);
}
q->QueueA[q->back]=x;

}

int cqueue::dequeue(queuest *q)
{
int x;
if(empty(q))
{
cout<<"Cqueue is empty...";
exit(0);
}
if(q->front==max1-1)
q->front=0;
else
q->front++;
x=q->QueueA[q->front];
return(x);
}

void cqueue::printcq(queuest *q)
{
int i;
if(q->back>q->front)
 for(i=q->front+1;i<=q->back;i++)
	 cout<<q->QueueA[i]<<" ";
 cout<<endl;
if(q->front>q->back)
{
for(i=q->front+1;i<=max1-1;i++)
	 cout<<q->QueueA[i]<<" ";
 for(i=0;i<=q->back;i++)
	 cout<<q->QueueA[i]<<" ";
 cout<<endl;
}

}
void cqueue::initialize(queuest *q)
{
q->front=-1;
q->back=-1;

}
