#include<iostream>
using namespace std;
int main(){
    char array[5]={'a','e','i','o','u'};
    for(int i=0;i<5;i++){
        cout<<array[i]<<' ';
    }
    cout<<endl;
    //so this way we can dfine an array of an datatype it just an continous allocation of similar datatype
    bool firstbool[10];
    double firstdouble[10];
    float firstfloat[10];
    cout<<"everything is working fine here so thats it "<<endl;
    return 0;
}