#include<bits/stdc++.h>
using namespace std;
bool knows(vector<vector<int>>& M,int a,int b){
    return M[a][b]==1;
}
int celebrity(vector<vector<int> >& M, int n) 
{
    stack<int> st;
    for(int i=0;i<n;i++){
        st.push(i);
    }
    while(st.size()!=1){
        int a=st.top();
        st.pop();
        int b=st.top();
        st.pop();
        if(knows(M,a,b)){
            //because a cannot be celebrity
            st.push(b);
        }else{
            //beacue b can't be an celebrity as 
            st.push(a);
        }
    }
    //remaning
    for(int i=0;i<n;i++){
        if(M[st.top()][i]==1)
            return -1;
    }
    for(int i=0;i<n;i++){
        if(M[i][st.top()]==0 && (i!=st.top()))
            return -1;
    }
    return st.top();
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> M(n,vector<int> (n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>M[i][j];
        }
    }
    cout<<"The celebrity is "<<celebrity(M,n);
    return 0;
}
