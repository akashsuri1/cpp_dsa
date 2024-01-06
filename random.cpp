#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    map<char,string> ans={{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
    void generatecomibnation(vector<string>& ans,int index,string& output,string digits){
        cout<<index<<digits.size()<<endl;
        if(index==digits.size()){
            ans.push_back(output);
            return;
        }
        cout<<output<<endl;
        string temp=ans[digits[index]];
        cout<<"temp string"<<temp<<endl;
        for(int i=0;i<temp.size();i++){
            output.push_back(temp[i]);
            generatecomibnation(ans,index+1,output,digits);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output="";
        generatecomibnation(ans,0,output,digits);
        return ans;   
    }
};
int main(){
    string digits;
    cin>>digits;
    Solution s1;
    vector<string> ans=s1.letterCombinations(digits);
    for(auto itr:ans){
        cout<<itr<<" ";
        cout<<endl;
    }
    return 0;
}
