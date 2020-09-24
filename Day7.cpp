#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    string str;
    cin>>str;
    string res="";
    int count=1;
    res+=str[0];
    for(int i=1;i<str.length();i++){
        char ch=str[i];
        if(str[i]==str[i-1]){
            count++;
        }
        else{
            if(count!=1)
            res+=to_string(count);
            res+=str[i];
            count=1;
        }
    }
    if(count!=1)
    res+=to_string(count);
    cout<<res<<endl;
    return 0;
}