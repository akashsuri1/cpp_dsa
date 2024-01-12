#include<iostream>
using namespace std;
int main(){
    int n=5;
    int *ptr=&n;
    int **dptr=&ptr;
    cout<<"The ptr address : "<<&ptr<<endl;
    cout<<"The double pointer value : "<<dptr<<endl;
    cout<<"Everything is fine "<<endl;
    return 0;
}