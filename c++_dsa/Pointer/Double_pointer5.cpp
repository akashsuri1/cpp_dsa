#include<iostream>
using namespace std;
void update(int **dptr){
    **dptr=**dptr+1;
    cout<<"Here the value of double pointer get changed due to double dereference."<<endl;
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
    return 0;
}