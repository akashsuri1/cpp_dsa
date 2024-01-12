#include<iostream>
using namespace std;
void update(int **dptr){
    *dptr=*dptr+1;
    cout<<"Change occurs at address pointed by double pointer."<<endl
    <<"Value pointed by the pointer"<<endl;
}
int main(){
    int i=5;
    int *ptr=&i;
    int **dptr=&ptr;
    cout<<"value of i : "<<i<<endl;
    cout<<"value of pointer : "<<ptr<<endl;
    cout<<"value of double pointer  : "<<dptr<<endl;
    update(dptr);
    cout<<"value of i : "<<i<<endl;
    cout<<"value of pointer : "<<ptr<<endl;
    cout<<"value of double pointer  : "<<dptr<<endl;
    cout<<"when we increment double pointer it get incremented by 8"<<endl;
    return 0;
}