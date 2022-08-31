#include "DLinked.h"

#include <iostream>
using namespace std;
#include <dos.h>


void DLinked::printlist(node *fi)
{
node *p;
p=fi;
while(p!=NULL)
{
	cout<<p->info<<" ";
	p=p->next;
}
cout<<endl;
}

void DLinked::insertfirst(node *&fi,int x)
{
node *p;
p=new(node);
p->next=fi;
fi=p;
p->info=x;
}

void DLinked::insertend(node *&fi,int x)
{
node *p,*q;
q=new(node);
q->info=x;
q->next=NULL;
p=fi;
while(p->next!=NULL)
 p=p->next;
p->next=q;
}

void DLinked::insertafter(node *&fi, int m, int x)
{
node *q,*p;
q=new(node);
q->info=x;
p=fi;
for(int i=1;i<m;i++)
 p=p->next;
q->next=p->next;
p->next=q;
}

void DLinked::insertbefore(node *&fi, int m, int x)
{
node *q,*p;
q=new(node);
q->info=x;
p=fi;
for(int i=1;i<m-1;i++)
 p=p->next;
q->next=p->next;
p->next=q;

}

void DLinked::deletenodebyno(node *&fi, int m)
{
node *p,*q;
p=fi;
if(m==1)
{
	q=p;
	p=p->next;
	delete(q);
	fi=p;
}
else
 for(int i=1;i<m-1;i++)
	 p=p->next;
 q=p->next;
 p->next=q->next;
 delete(q);
}


void DLinked::deletenodebyinfo(node *&fi, int x)
{
node *p,*q;
p=q=NULL;
int k,i=0;

   for(p=fi;p->info!=x;p=p->next,i++)
	 q=fi;
   if(i==1)fi=q->next;

   else{
   for(k=2;k<=(i-1);k++)
		q=q->next;
	     q->next=p->next;
	        delete(p);
   }
}


DLinked::DLinked()
{
    //ctor
}

DLinked::~DLinked()
{
    //dtor
}
