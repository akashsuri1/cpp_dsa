#include<iostream>
using namespace std;
void printarray(int array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<' ';
    }
    cout<<endl;
}
void update(int array[],int n){
    array[0]=120;
    // so as in case of array its base address is passed whatever change you do in it reflects in the main array also so be careful in doing that
    cout<<"in the update function "<<endl;
    printarray(array,n);
    cout<<"going back to the main function "<<endl;
}
int main(){
    int array[3]={1,2,3};
    update(array,3);
    cout<<"printing in the main function here so "<<endl;
    printarray(array,3);
    return 0;
}