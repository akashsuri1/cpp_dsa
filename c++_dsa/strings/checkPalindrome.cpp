#include<iostream>
using namespace std;
char tolower(char c){
    if(c>='A' && c<='Z'){
        return c+32;
    }else{
        return c;
    }
}
int getLength(char array[]){
    int count=0;
    for(int i=0;array[i]!='\0';i++){
        count++;
    }
    return count;
}
bool checkPalindrome(char array[]){
    int start=0;
    int end=getLength(array)-1;
    while(start<end){
        if(tolower(array[start])!=tolower(array[end])){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    char array[100];
    cin>>array;
    if(checkPalindrome(array)){
        cout<<"True it\'s reads same reverse"<<endl;
    }else{
        cout<<"It doesn\'t read same reverse"<<endl;
    }
    return 0;
}