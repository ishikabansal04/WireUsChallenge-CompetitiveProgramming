#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    string str;
    cin>>str;
    string res="";
    unordered_map<char, int>mymap;
    for(int i=str.length()-1;i>0;i--){
        char ch=str[i];
        if(str[i-1]==str[i]){
            res="*"+res;
        }
        else{
            res=ch+res;
        }
    }
    res=str[0]+res;
    cout<<res<<endl;
    return 0;
}