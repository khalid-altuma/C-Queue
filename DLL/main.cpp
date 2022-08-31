#include <iostream>
#include "DLinked.h"

using namespace std;

int main()
{
    int i;
        DLinked DL;
   		node *fi,*fo,*fe;
		fi=NULL;
		for(i=1;i<=5;i++)
		DL.insertfirst(fi,i);
		DL.oddeven(fi,fe,fo);

DL.printlist(fi);
DL.printlist(fe);
DL.printlist(fo);


		/*cout<<"Insert first..... "<<endl;
		DL.printlist(fi);
		cout<<"Insert end 100..... "<<endl;
		DL.insertend(fi,100);
        DL.printlist(fi);
        cout<<"Insert end 200..... "<<endl;
		DL.insertend(fi,200);
        DL.printlist(fi);
        cout<<"Insert after node 1..... "<<endl;
        DL.insertafter(fi,1,25);
		DL.printlist(fi);
		cout<<"Insert before node 4..... "<<endl;
        DL.insertbefore(fi,4,77);
		DL.printlist(fi);
		cout<<"Delete node 3..... "<<endl;
        DL.deletenodebyno(fi,3);
		DL.printlist(fi);
		cout<<"Delete node info=25..... "<<endl;
        DL.deletenodebyinfo(fi,5);
		DL.printlist(fi);
        system("Pause*/


    return 0;
}
