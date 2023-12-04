#include<bits/stdc++.h>
using namespace std;
void allsubstring(string& output,string orignal,int index){
    if(index==orignal.length()){
        if(!output.empty()) cout<<output<<endl;
        return;
    }
    //take
    output.push_back(orignal[index]);
    allsubstring(output,orignal,index+1);
    //not take
    output.pop_back();
    allsubstring(output,orignal,index+1);
}
int main(){
    string orignal;
    string output="";
    getline(cin,orignal);
    allsubstring(output,orignal,0);
    return 0;
}