#include<iostream>
using namespace std;
int main(){
    int num=1;
    cout<<endl;
    switch(num){
        case 1:cout<<"first"<<endl;
               break;
        case 2:cout<<" second "<<endl;
               break;
        default:cout<<"it is the default case "<<endl;
    }
    cout<<endl;
    return 0;
    //so therefore this is an efficent clean way to write code where the constant are compared with each other then the particular statment is executed which matches the current constant default case is not mandatory in this case 
}