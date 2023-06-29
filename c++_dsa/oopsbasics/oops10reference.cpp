#include<iostream>
using namespace std;
int main(){
    int a=3;
    int b=4;
    int* pointertoa=&a;
    int* pointertob=&b;
    int* r=pointertoa;
    r=pointertob;
    cout<<*pointertoa<<*pointertob<<*r<<endl;
    //this way first r was an pointer to a and now to the b
    int& refrencetoa=a;
    int& refrencetob=b;
    int& k=refrencetoa;
    k=refrencetob;
    //now this means the refence to a(i.e is k) value is changed to refence to b quite different from pointer the r doesnt change it refrence that is the point of refrence 
    cout<<a<<b<<k<<endl;
    return 0;
    //so refrence are not just an syntanic way to sugar coat the use of pointer ok
    //so vector is an object is not passed by refrence or address so in order to change it we must pass it by refrence using &
}