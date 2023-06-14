#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number to see the effect of all the inc/dec operator ";
    cin>>n;
    cout<<"post-increment is "<<n++<<endl;
    cout<<"pre-increment is "<<++n<<endl;
    cout<<"post-decrement is "<<n--<<endl;
    cout<<"pre-decrement is "<<--n<<endl;
    return 0;
}