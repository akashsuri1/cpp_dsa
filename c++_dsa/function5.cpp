#include<iostream>
using namespace std;
// 1-even 0-odd so this way we can create an function like this easy
bool isEven(int a){
    if(a&1){
        return false;
    }
    // beacuse if it doesnt enter if block then only it will reach here
    return true;
}
int main(){
    int num;
    cin>>num;
    if(isEven(num)){
        cout<<"the number is even "<<endl;
    }else{
        cout<<"the number is odd "<<endl;
    }
    return 0;
}
