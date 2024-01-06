#include<iostream>
#include<string>
using namespace std;
int main(){
    char array[]="ab\0cd\0";
    string ans="ab\0cd";
    cout<<"Seeing the difference = "<<endl;
    cout<<array<<endl;
    cout<<ans<<endl;
    cout<<"there is no difference"<<endl;
    return 0;
}