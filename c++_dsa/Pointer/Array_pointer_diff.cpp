#include<iostream>
using namespace std;
int main(){
    int array[10]={1,2,3,4,5};
    cout<<"Size of using array\'s name result in : "<<sizeof(array)<<endl;
    cout<<"It give\'s entire array\'s size."<<endl;
    cout<<"Size of dereferenced array pointer : "<<sizeof(*array)<<endl;
    cout<<"It give\'s size of array\'s oth member."<<endl;
    cout<<"size of address of oth memory block "<<sizeof(&array)<<endl;
    cout<<"It give\'s size of array\'s oth member block address that is 8 bytes ."<<endl;
    int *ptr=array;
    cout<<"size of pointer : "<<sizeof(ptr)<<endl;
    cout<<"size of pointer dereferenced : "<<sizeof(*ptr)<<endl;
    cout<<"size of pointer\'s address : "<<sizeof(&ptr)<<endl;
    return 0;
}