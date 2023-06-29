#include<iostream>
#pragma pack(1)
//with help of pragma we can switch off the feature of padding and can make the class size equal to total of properties this way there is no wastage of memory but cpu cycles
using namespace std;
class Hero{
    public:
        int a;
        char b;
};
int main(){
    //so here we explore the concept of the padding of class memebrs and greddy alignment
    cout<<"the size of this class "<<sizeof(Hero)<<endl;
    cout<<"the size of "<<sizeof(char)<<endl;
    //memory is allocated to the object wehn they are created not when the class is defined 
    //also the padding is done with respect to the alignment of the largest memory allocates that it
    return 0;
}