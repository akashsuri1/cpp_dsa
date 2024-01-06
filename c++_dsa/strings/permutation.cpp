#include<bits/stdc++.h>
using namespace std;    
bool compare(int array1[26],int array2[26]){
    for(int i=0;i<26;i++){
        if(array1[i]!=array2[i]){
            return false;
        }
    }
    return true;
}
bool checkInclusion(string s1, string s2) {
    int array1[26]={0};
    for(auto itr:s1){
        array1[itr-'a']++;
    }
    int array2[26]={0};
    int i=0;
    int window=s1.size();
    while(i<s2.size() && i<window){
        array2[s2[i]-'a']++;
        i++;
    }
    if(compare(array1,array2)) return true;
    while(i<s2.size()){
        array2[s2[i]-'a']++;
        array2[s2[i-window]-'a']--;
        if(compare(array1,array2)) return true;
        i++;
    }
    return false;
}
int main(){
    string st1,st2;
    cin>>st1>>st2;
    if(checkInclusion(st1,st2)){
        cout<<"It is an inclusion"<<endl;
    }else{
        cout<<"you are excluded"<<endl;
    }
    return 0;
}