#include<iostream>
using namespace std;
template<typename T>
void fun(T a){
    cout<<a<<endl;
}
//the non templaized one will take preference
void fun(int a){
    cout<<"int "<<a<<endl;
}
int main(){
    fun<float>(3.45);
    fun(3);
    return 0;
}

