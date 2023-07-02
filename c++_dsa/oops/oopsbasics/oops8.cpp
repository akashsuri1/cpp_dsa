#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // so using an new and delete keyword we can make dynamic allocation
    int *arr=new int[n] {0};
    //by using () you can intialize all element to zero
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    float *fptr=new float;
    *fptr=20;
    cout<<fptr<<endl;
    cout<<*fptr<<endl;
    delete fptr;
    //dynamically allocated variable is freed this way so this way we can make it happens 
    cout<<endl;
    delete []arr;
    //dynamically allocated memory is freed this way for an array
    return 0;
    //so the dynamically allocated memmory is in heap but we get an pointer that memory that we store in an pointer variable to access it in stack this way dynamic memory allocation happens 
}