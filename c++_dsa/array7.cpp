#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    //so this way an array can be called for an function in which we pass array as well as its size as argument this increase code reusability
    cout<<"printing the array "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl<<"printing is done now "<<endl;
    return;
}
int main(){
    int first[15]={2,7};
    printarray(first,15);
    int second[20]={0};
    printarray(second,20);
    int third[13];
    fill_n(third,13,10);
    printarray(third,13);
    //when we use the print array function we pass arrayname as argument that is base address so whatever changes we do in the array in function  it reflects in the main array or calling function also
    return 0;


}