#include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<"The address of the variable is : "<<&num<<endl;
    cout<<"The compiler map\'s this address to the variable.\n"
    <<"By an symbol table."<<endl
    <<"But the compiler access the value by using address only."<<endl
    <<"Firstly the name is mapped into the address." <<endl
    <<"And then value corresponding to it is printed."<<endl;
    return 0;
}