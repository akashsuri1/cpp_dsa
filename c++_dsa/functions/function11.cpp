#include<iostream>
using namespace std;
int fib(int n){
    int a=0;
    int b=1;
    for(int i=2;i<=n;i++){
        int nextterm=a+b;
        a=b;
        b=nextterm;
    }
    return a;
}
int main(){
 int n;
 cin>>n;
 cout<<"the "<<n<<" th fib is "<<fib(n)<<endl;
 return 0;
}