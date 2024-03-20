#include<bits/stdc++.h>
using namespace std;
int largestrectangle(vector<int>& heights){
        stack<int> st;
        int area=0;
        for(int i=0;i<=heights.size();i++){
            while(!st.empty() && (i==heights.size() || heights[st.top()]>=heights[i])){
                int height=heights[st.top()];
                st.pop();
                int width;
                if(st.empty()){
                    width=i;
                }else{
                    width=i-st.top()-1;

                }
                area=max(area,height*width);
            }
            st.push(i);
        }
        return area;
    }
int maximalAreaOfSubMatrixOfAll1(vector<vector<int>> &mat, int n, int m){
	 
        int area=largestrectangle(mat[0]);
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    mat[i][j]+=mat[i-1][j];
                }else{
                    mat[i][j]=0;
                }
            }
            area=max(area,largestrectangle(mat[i]));
        }
        return area;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec(n,vector<int> (m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    cout<<"The largest area is : "<<maximalAreaOfSubMatrixOfAll1(vec,n,m)<<endl;
    return 0;
}