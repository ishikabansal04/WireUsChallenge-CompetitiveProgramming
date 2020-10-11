#include<iostream>
#include<string>
using namespace std;

int findFirst(string a, string b, int idx){
    if(b.length()==0){
        return 0;
    }
    if(idx==a.length()-b.length()){
        return -1;
    }
    if(a[idx]==b[0] && a.substr(idx).length()>=b.length()){
        string s=a.substr(idx, b.length());
        if(s==b){
            return idx;
        }
    }
    return findFirst(a, b, idx+1);
}
int main(){
    string a,b;
    cin>>a>>b;
    int idx=findFirst(a,b, 0);
    cout<<idx<<endl;
    return 0;
}

