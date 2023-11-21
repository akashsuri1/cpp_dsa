#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1)
      return n;
    return fib(n-1)+fib(n-2);
    //depending in problem our solution can depend on n no of smaller problem 
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;    
}