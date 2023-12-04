#include<bits/stdc++.h>
using namespace std;
void allsubstring(string temp){
    int n=temp.size();
    for(int num=1;num<(1<<n);num++){
        string substring="";
        for(int index=0;index<n;index++){
            //check if index is set or not
            if(num&(1<<index)){
                substring+=temp[index];
            }

        }
        cout<<substring<<endl;
        substring.clear();
    }
    return;
}
int main(){
    string temp;
    getline(cin,temp);
    allsubstring(temp);
    return 0;
}