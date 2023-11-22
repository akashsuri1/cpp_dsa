#include<iostream>
using namespace std;
string countAndSay(int n) {
        if(n==1) return "1";
        string temp=to_string(n);
        char current=temp[0];
        int count=1;
        string ans="";
        for(int j=1;j<temp.size();j++){
            cout<<count<<" "<<temp[j]<<" "<<current<<endl;
            if(temp[j]!=current){
                ans.push_back(count+'0');
                ans.push_back(current);
                count=1;
                current=temp[j];
            }else{
                count++;
            }
            
        }
        ans.push_back(count+'0');
        ans.push_back(current);
        
        return ans;


    }
    int main(){
        int n;
        cin>>n;
        cout<<countAndSay(n)<<endl;
        return 0;
    }