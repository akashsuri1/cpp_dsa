#include<bits/stdc++.h>
using namespace std;
string multiplystrings(string num1,string num2){
    if(num1.size()==0 || num2.size()==0){
        return "0";
    }
    vector<int> result(num1.size()+num2.size(),0);
    int shift=0;
    for(int i=num2.size()-1;i>=0;i--){
        int carry=0;
        int position=0;
        for(int j=num1.size()-1;j>=0;j--){
            int product=(num2[i]-'0')*(num1[j]-'0')+carry+result[position+shift];
            carry=product/10;
            result[position+shift]=product%10;
            position++;
        }
        while(carry){
            result[position+shift]=carry%10;
            position++;
            carry=carry/10;
        }
        shift++;
    }
    int k=result.size()-1;
    while(result[k]==0) k--;
    string ans="";
    while(k>=0){
        ans.push_back(result[k]+'0');
        k--;
    }
    if(ans.empty()){
        ans.push_back('0');
    }
    return ans;
}
int main(){
    string str1,str2;
    cin>>str1>>str2;
    string ans=multiplystrings(str1,str2);
    cout<<ans<<endl;
    return 0;
}