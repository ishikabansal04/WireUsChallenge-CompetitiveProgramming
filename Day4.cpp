#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    cin>>str;
    string res="";
    for(int i=0;i<str.length()-1;i++){
        char ch=str[i];
        int num=str[i+1]-str[i];
        res+=ch;
        res+=to_string(num);
    }
    res+=str[str.length()-1];
    cout<<res<<endl;
    return 0;
}