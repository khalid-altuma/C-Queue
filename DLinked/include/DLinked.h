#ifndef DLINKED_H
#define DLINKED_H


class DLinked
{
    public:

        void deletenodebyinfo(node *&fi,int x);
	    void deletenodebyno(node *&fi,int m);
	    void insertbefore(node *&fi,int m,int x);
	    void insertafter(node *&fi,int m,int x);
	    void insertend(node *&fi,int x);
	    void insertfirst(node *&fi,int x);
	    void printlist(node *fi);
        DLinked();
        virtual ~DLinked();

    protected:

    private:
};

#endif // DLINKED_H
