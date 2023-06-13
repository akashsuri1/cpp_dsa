#include<iostream>
using namespace std;
int main(){
    cout<<"the left sheft operator "<<(17<<2)<<endl;//68
    cout<<"the left shift operator "<<(15<<4)<<endl;//240
    cout<<"the right shift is "<<(34>>1)<<endl;//17
    cout<<"the right shift is "<<(64>>4)<<endl;//4
    //so left shift << ans can be achieved by multiplying with 2 in case of small on large no on left shift produce negative number
    //right shift can be achieved by dividing with two req no of times
}