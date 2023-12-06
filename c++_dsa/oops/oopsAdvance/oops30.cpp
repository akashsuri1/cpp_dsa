#include<iostream>
using namespace std;
class abstractbase{
    protected:
        int i,j;
    public:
        abstractbase(int i,int j):i(i),j(j){};
        virtual void show()=0;
        virtual ~abstractbase(){
            cout<<"base destroyed"<<endl;
        }
};
class vector:public abstractbase{
    protected:
        int k;
    public:
        vector(int i,int j,int k):abstractbase(i,j),k(k){};
        void show(){
            cout<<i<<"i + "<<j<<"j + "<<k<<"k"<<endl;
        }
        ~vector(){
            cout<<"vector destroyed"<<endl;
        }
};
int main(){
    abstractbase* bptr=new vector(3,4,5);
    bptr->show();
    delete bptr;
    return 0;
}