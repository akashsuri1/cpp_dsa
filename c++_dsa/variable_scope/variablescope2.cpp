#include<iostream>
using namespace std;
int main(){
    int a=3;
    cout<<a<<endl;
    {
        int b=5;
        cout<<b<<endl;
    }
    // variable cannot be acessed outside the block in 
    //which it is created 
    a=4;
    cout<<a<<endl;
    //we cannot create an variable with same name inside the same block
    int b=1;
    cout<<b<<endl;
    return 0;
}