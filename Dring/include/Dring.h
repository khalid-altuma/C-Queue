
#define DRING_H
struct CQnode
	{
		int info;
		CQnode *next;
	};
struct DCQ
{
			CQnode *R;
};


class Dring
{
    public:
       	int empty(DCQ *q);
    	void printCQ(DCQ *q);
	    int remove(DCQ *q);
	    void insert(DCQ *q,int x);

        Dring();
        virtual ~Dring();

    protected:

    private:
};



