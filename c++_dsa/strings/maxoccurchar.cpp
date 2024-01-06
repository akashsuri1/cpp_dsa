#include<iostream>
using namespace std;
char getMaxOccur(string s){
    int array[26]={0};
    for(int i=0;i<s.size();i++){
        char c=tolower(s[i]);
        array[c-'a']++;
    }
    int ans=0;
    int maxfreq=-1;
    for(int i=0;i<26;i++){
        if(maxfreq<array[i]){
            ans=i;
            maxfreq=array[i];
        }
    }
    return 'a'+ans;
}
int main(){
    string str;
    getline(cin,str);
    cout<<getMaxOccur(str)<<endl;
    return 0;
}
