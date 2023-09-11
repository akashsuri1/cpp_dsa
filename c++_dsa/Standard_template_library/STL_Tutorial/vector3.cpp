#include<bits/stdc++.h>
using namespace std;
int main(){
    //2d array in which every elemnt is an vector which can expand also
    //each individual vector  has different size
    vector<vector<int>> vec;
    vector<int> raj;
    raj.push_back(1);
    raj.push_back(2);
    vec.push_back(raj);
    vector<int> raj1;
    raj1.push_back(10);
    raj1.push_back(20);
    raj1.push_back(30);
    vec.push_back(raj1);
    vector<int> raj2;
    raj2.push_back(20);
    raj2.push_back(50);
    raj2.push_back(60);
    raj2.push_back(70);
    vec.push_back(raj2);
    //ways of accessing into another way
    for(auto vectr:vec){
        for(auto it:vectr){
            cout<<it<<" ";

        }
        cout<<endl;
    }
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    //intializing 2-d vector
    vector<vector<int>> vec2(10,vector<int> (20,0));
    //here no of rows and columnn both variable
    vector<int> arr[4];//here no of rows is fixed but column is variable
    arr[0].push_back(1);
    //3d vector
    // arr[10][20][30]
    vector<vector<vector<int>>> vector4(10,vector<vector<int>> (20,vector<int> (30,0)));
    return 0;
    


}