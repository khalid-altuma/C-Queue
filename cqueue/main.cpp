
#include "cqueue.h"
#include "Q.h"

#include <iostream>
using namespace std;

#include <stdlib.h>

int main()
{
    cqueue CQueue;
    queuest cq;

		int nn,i,n1,m;
CQueue.initialize(&cq);
      for(;;)
		{
		cout<<endl;
    cout<<"*********************************************"<<endl;
	cout<<"*1- Insertion  operation                    *"<<endl;
      cout<<"*2- Delete operation                        *"<<endl;
	cout<<"*3- Display operation                       *"<<endl;
	cout<<"*4- Exit                                    *"<<endl;
    cout<<"*********************************************"<<endl;
	cout<<"              Enter your (1-4) :";cin>>nn;
	cout<<endl;
	switch (nn)
	{
	case 1:

		cout<<endl<<"Enter the no. of element";
		cin>>n1;
		for(i=0;i<n1;i++)
		{
		cout<<"Enter the element...";
		cin>>m;
		CQueue.enqueue(&cq,m);
		CQueue.printcq(&cq);
		}
		break;

	case 2:
		cout<<CQueue.dequeue(&cq)<<" ";
	    break;
	case 3:
		CQueue.printcq(&cq);
		break;

	case 4:
		exit(0);
		break;
	default:
	cout<<"Error in input"<<endl;
	}
		}




    return 0;
}
