#include<iostream>
using namespace std;
int main(){
    char ch='a';
    cout<<endl;
    switch(ch){
        case 1:cout<<"first"<<endl;
               break;
        case 2:cout<<"second "<<endl;
               break;
        case 'b':cout<<"character b"<<endl;
                break;
    }
    //if it doesnt match with any case than there is no default case it just comes out of switch block
    cout<<endl;
    return 0;
}