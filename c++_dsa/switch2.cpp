#include<iostream>
using namespace std;
int main(){
    char ch='1';
    cout<<endl;
    // in this case we have used an character inside switch which when mathced with an character constant produce the output  
    switch(ch){
        case 1:cout<<"first"<<endl;
               break;
        case '1':cout<<" character one "<<endl;
               break;
        default:cout<<"it is the default case "<<endl;
    }
    cout<<endl;
    return 0;
}