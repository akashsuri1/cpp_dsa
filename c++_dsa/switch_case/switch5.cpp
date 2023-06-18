#include<iostream>
using namespace std;
int main(){
    int num=1;
    cout<<endl;
    switch(num){
        case 1:cout<<"first "<<endl;
               cout<<"first again "<<endl;
        case '1':cout<<"character one"<<endl;
                break;
        default:cout<<"it is the deafult case "<<endl;

    }
    cout<<endl;
    return 0;
}