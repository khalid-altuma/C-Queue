#include "DLQ.h"
#include <iostream>
using namespace std;

#include <dos.h>
#include <stdlib.h>


DLQ::DLQ()
{
    //ctor
}

DLQ::~DLQ()
{
    //dtor
}

void DLQ::enqueue(DQueue *q, int x)
{
   if(q->front==NULL)
   {
	   q->front=new(Qnode);
       q->front->info=x;
	   q->front->next=NULL;
	   q->back=q->front;
   }
   else
   {
	   Qnode *p;
	   p=new(Qnode);
	   p->info=x;
	   p->next=NULL;
	   q->back->next=p;
	   q->back=p;
   }
}

void DLQ::printQueue(DQueue *q)
{
Qnode *p;
p=q->front;
while(p!=NULL)
{
	cout<<p->info<<" ";
	p=p->next;
}
cout<<endl;
}

int DLQ::dequeue(DQueue *q)
{
   Qnode *p;
	if(empty(q))
   {
	   cout<<"Queue is empty...";
	   exit(0);
   }
   p=q->front;
   q->front=q->front->next;
   int x=p->info;
   delete(p);
   return(x);

}

int DLQ::empty(DQueue *q)
{
  if(q->front==NULL)
	  return(1);
  else
	  return(0);
}
