#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        //helps to skip to the next iterations and start execution of body from starting
        cout<<"hi "<<endl;
        cout<<"hello "<<endl;
        continue;
        cout<<"reply toh karde ";
        //this part become unreachable as after executuion of continue skip to next iteration
    }
    return 0;
}