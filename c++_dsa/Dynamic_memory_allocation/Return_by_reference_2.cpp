#include<iostream>
using namespace std;
int x;
int& returnbyref(){
    return x;
}
int main(){
    returnbyref()=19;
    cout<<x<<endl;
    return 0;
}