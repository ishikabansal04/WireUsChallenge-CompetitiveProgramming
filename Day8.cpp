#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter no of input strings & query strings:"<<endl;
    cin>>n>>m;
    vector<string>input(n);
    cout<<"Enter "<<n<<" input strings:"<<endl;
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<"Enter "<<n<<" query strings:"<<endl;
    vector<string>query(m);
    for(int i=0;i<m;i++){
        cin>>query[i];
    }
    unordered_map<string,int>mymap;
    for(int i=0;i<n;i++){
        mymap[input[i]]+=1;
    }
    // cout<<"Output for each query string:"<<endl;
    for(int i=0;i<m;i++){
        cout<<mymap[query[i]]<<endl;
    }
    return 0;
}