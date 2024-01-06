#include<iostream>
#include<vector>
using namespace std;
int getLength(char array[]){
    int count=0;
    for(int i=0;array[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverse(char array[]){
    int start=0;
    int end=getLength(array)-1;
    while(start<end){
        swap(array[start],array[end]);
        start++;
        end--;
    }
}
int main(){
    char array[100];
    cin>>array;
    reverse(array);
    cout<<"The reversed array is :"<<endl;
    cout<<array<<endl;
    return 0;
}