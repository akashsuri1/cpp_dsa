#include <bits/stdc++.h> 
using namespace std;
string replaceSpaces(string &str){
	string place="@40";
	int size=str.size();
	for(int i=0;i<size;i++){
		if(str[i]==' '){
			str.erase(str.begin()+i);
			str.insert(str.begin()+i,place.begin(),place.end());
			size+=2;
			i+=2;
		}
    }
    return str;
}
int main(){
    string str;
    getline(cin,str);
    cout<<replaceSpaces(str)<<endl;
    return 0;
}