#include<iostream>
using namespace std;
int main(){
    char ch='a';
    cout<<endl;
    switch(ch){
       case 'a':cout<<"character name is "<<ch<<endl;
              //   continue; so continue cant be used in  case of switch case 
        case 1:cout<<"first"<<endl;
        case 2:cout<<"second "<<endl;
        case 'b':cout<<"character b"<<endl;
                break;
    }
    //if it doesnt match with any case than there is no default case it just comes out of switch block
    cout<<endl;
    return 0;
}