#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    vector<int>input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    vector<int>n1(d);
    vector<int>n2(n-d);
    int i=0;
    for(;i<d;i++){
        n1[i]=input[i];
    }
    for(;i<n;i++){
        n2[i-d]=input[i];
    }
    int j=0;
    for(;j<n2.size();j++){
        input[j]=n2[j];
    }
    int idx=0;
    for(;j<n;j++){
        input[j]=n1[idx];
        idx++;
    }
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    return 0;
}