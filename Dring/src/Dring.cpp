#include "Dring.h"

#include <iostream>
using namespace std;

#include <dos.h>
#include <stdlib.h>

Dring::Dring()
{
    //ctor
}

Dring::~Dring()
{
    //dtor
}


void Dring::insert(DCQ *q, int x)
{
   CQnode *p;
   p=new(CQnode);
   p->info=x;
   if(q->R==NULL)
	   p->next=p;
   else
   {
	   p->next=q->R->next;
	   q->R->next=p;
   }
   q->R=p;
}

int Dring::remove(DCQ *q)
{
   CQnode *p;
	if(q->R==NULL)
   {
	   cout<<"Ring Structure empty....";
	   exit(0);
   }
   p=q->R->next;
   int x=p->info;
   if(q->R==p) q->R=NULL;
    else q->R->next=p->next;
	delete(p);
	return(x);
}

void Dring::printCQ(DCQ *q)
{
CQnode *p;
p=q->R;
do
{
	cout<<p->next->info<<" ";
	p=p->next;
}while(p!=q->R);
cout<<endl;

}

int Dring::empty(DCQ *q)
{
if(q->R==NULL)
return(1);
else
return(0);


}
