#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int>res(t);
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        int ans = 0; 
        int multiply = 1; 
        int sum; 

        while (a || b) { 
            sum = (a % 10) + (b % 10);   
            sum %= 10; 
            ans = (sum * multiply) + ans; 
            a=a/10; 
            b=b/10; 
            multiply=multiply* 10; 
        } 
        res[i]=ans;
    }
    for(int j=0;j<t;j++){
        cout<<res[j]<<" ";
    }
    return 0;
}