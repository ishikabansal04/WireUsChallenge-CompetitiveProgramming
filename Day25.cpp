#include<iostream>
#include<string>
#include<vector>
#include<stdio.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        string str,temp="";
        cin>>str;
        vector<bool>vis(26,false);

        for(int i=0;i<str.length();i++){    
            
                if(!vis[str[i]-'a']){
                    vis[str[i]-'a']=true;
                    temp=temp+str[i];
                }
                else{
                    continue;
                }
        }
        cout<<temp<<endl;
    }
    
    return 0;
}