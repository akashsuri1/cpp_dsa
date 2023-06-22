#include<iostream>
using namespace std;
bool search(int array[],int size,int key){
    //traverse whole array and check each element
    for(int i=0;i<size;i++){
        if(array[i]==key){
            //if these key is found
            return true;
        }
    }
    //if not found after travesing the whole array
    return false;
}
int main(){
    int array[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>array[i];
        cout<<array[i]<<' ';
    }
    cout<<endl;
    int key;
    cout<<"enter the key to search for ";
    cin>>key;
    bool found=search(array,size,key);
    if(found){
        cout<<"the key is present "<<endl;
    }else{
        cout<<"the key is not present"<<endl;
    }
}