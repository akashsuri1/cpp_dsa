#include<bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int>& heights) {
    vector<int> right(heights.size()),left(heights.size());
    stack<int> st;
    for(int i=0;i<heights.size();i++){
        while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
        if(st.empty())
            left[i]=0;
        else
            left[i]=st.top()+1;
        st.push(i);
    }
    while(!st.empty()) st.pop();       
    for(int i=heights.size()-1;i>=0;i--){
        while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
        if(st.empty())
            right[i]=heights.size()-1;
        else
            right[i]=st.top()-1;
        st.push(i);
    }
    int area=0;
    for(int i=0;i<heights.size();i++){
        area=max(area,(right[i]-left[i]+1)*heights[i]);
    } 
    return area;
}
int largestRectangle(vector<int>& heights) {
        //most optimized approach
        stack<int> st;
        int ans=0;
        for(int i=0;i<=heights.size();i++){
            while(!st.empty() && (i==heights.size() || heights[st.top()]>= heights[i])){
                int height=heights[st.top()];
                st.pop();
                int width=(st.empty())?(i):(i-st.top()-1);
                ans=max(ans,height*width);
            }
            st.push(i);
        }
        return ans;
    }
int main(){
    int n;
    cin>>n;
    vector<int> heights(n);
    for(int i=0;i<n;i++) cin>>heights[i];
    cout<<"The largest area is "<<largestRectangleArea(heights)<<endl;
    cout<<"The largest area is "<<largestRectangle(heights)<<endl;
    return 0;
}