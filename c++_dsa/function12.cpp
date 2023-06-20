#include<iostream>
using namespace std;
void update(int n){
    n++;
    cout<<"the value is "<<n<<endl;
    //when the value is sent the variable copy is created and not the same variable is passed
    //this is known as pass by value
    //if you want to sent same variable then pass by refrence
    //this is here the sent value is stored in different memory location i.e is a copy with same name
    //whatever changes you do in the copy it doesnt effect the real variable 
}
int main(){
    int n;
    cin>>n;
    update(n);
    cout<<"the value of variable is "<<n<<endl;
    return 0;
}