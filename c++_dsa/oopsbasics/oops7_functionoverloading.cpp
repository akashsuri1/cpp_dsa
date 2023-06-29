#include<iostream>
using namespace std;
void print(int i){
    cout<<"the integer is "<<i<<endl;
}
void print(string str){
    cout<<"the string is "<<str<<endl;
}
void print(float f){
    cout<<"the float is "<<f<<endl;
}
void print(char* c){
    cout<<"the charcater string is "<<c<<endl;
}
int main(){
    string str="akash";
    float f=2.13;
    int i=1;
    char array[]="it amazing feeling";
    print(i);
    print(str);
    print(f);
    print(array);
    return 0;
    //so this is an example of function overloading with different type of parameter ,no of parameters or there orders
}