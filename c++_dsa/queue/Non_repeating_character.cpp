#include<bits/stdc++.h>
using namespace std;
string FirstNonRepeating(string A){
        string ans="";
        vector<int> mpp(26,0);
        queue<char> q;
        for(int i=0;i<A.size();i++){
            mpp[A[i]-'a']++;
            //removal
            while(!q.empty() && mpp[q.front()-'a']>1)  q.pop();
            //addition
            if(mpp[A[i]-'a']==1) q.push(A[i]);
            if(q.empty()){
                ans+='#'; 
            }else{
                ans+=q.front();
            }
        }
        return ans;
    }
int main(){
    string str;
    getline(cin,str);
    string ans=FirstNonRepeating(str);
    cout<<ans<<endl;
    return 0;
}