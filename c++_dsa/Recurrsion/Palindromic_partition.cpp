#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string &s, int st, int e)
{
    int start = st, end = e;
    while (start < end)
    {
        if (s[start++] != s[end--])
            return false;
    }
    return true;
}
void solve(vector<vector<string>> &sol, vector<string> &ans, int index, string orignal)
{
    if (index == orignal.size())
    {
        sol.push_back(ans);
        return;
    }
    for (int i = index; i < orignal.size(); i++)
    {
        if (ispalindrome(orignal, index, i))
        {
            ans.push_back(orignal.substr(index, i - index + 1));
            solve(sol, ans, i + 1, orignal);
            ans.pop_back();
        }
    }
}
vector<vector<string>> partition(string s)
{
    vector<vector<string>> sol;
    vector<string> ans;
    solve(sol, ans, 0, s);
    return sol;
}
int main(){
    string s;
    cin>>s;
    vector<vector<string>> ans=partition(s);
    for(auto vctr:ans){
        for(auto itr:vctr){
            cout<<itr<<" ";
        }
        cout<<endl;
    }
    return 0;
}