#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;

    vector<vector<int>>arr(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int dir=1;
    int count=0;
    while(count<n){
        if(dir==1){
            for(int i= 0;i<m;i++){
                cout<<arr[i][count]<<",";
            }
            dir=2;
        }
        else if(dir==2){
            for(int i= m-1;i>=0;i--){
                cout<<arr[i][count]<<",";
            }
            dir=1;
        }
        count++;
    }
    cout<<"END";
    return 0;
}