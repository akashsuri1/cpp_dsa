#include<iostream>
using namespace std;
template <class T1=int,class T2=float,class T3=char>
class simple{
    public:
     T1 a;
     T2 b;
     T3 c;
     simple(T1 a,T2 b,T3 c){
        this->a=a;
        this->b=b;
        this->c=c;
     }
     void display(){
        cout<<"A = "<<a<<endl;
        cout<<"B = "<<c<<endl;
        cout<<"C = "<<c<<endl;
     }
};
int main(){
    simple<> obj(1,3.4,'C');
    obj.display();
    cout<<endl;
    simple<float,char,char> obj2(3.4,'c','a');
    obj2.display();
    return 0;
}