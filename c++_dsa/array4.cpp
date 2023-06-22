#include<iostream>
using namespace std;
int main(){
    int array[15]={2,3};
    //this way we can intialaize first two value of the array to 2 and 3 rest are automatically set to the zero this helps to intialize in large array with only intial value that we know
    int n=15;
    cout<<"the array printing starts here "<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
    //we can access array elements this way by arrayname[index] thus we can run an loop ffrom 0 to n-1 index for n size array and print its elements
}