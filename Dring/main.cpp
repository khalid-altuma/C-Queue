#include <iostream>
using namespace std;

#include <stdlib.h>
#include <dos.h>

#include "Dring.h"

int main()
{

        Dring ring;

   		DCQ cq1;
		cq1.R=NULL;

         int i;

		for(i=1;i<=10;i++)
		ring.insert(&cq1,i);

		for(i=1;i<=5;i++)
        {
		cout<<ring.remove(&cq1)<<" ";
		ring.printCQ(&cq1);
		}

		for(i=11;i<=15;i++)
        ring.insert(&cq1,i);
        ring.printCQ(&cq1);


    return 0;
}
