#include<iostream>
using namespace std;
int length_Of_String(char array[]){
    int count=0;
    for(int i=0;array[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char array[100];
    cin>>array;
    cout<<"The length of the array is : "<<length_Of_String(array)<<endl;
    return 0;
}