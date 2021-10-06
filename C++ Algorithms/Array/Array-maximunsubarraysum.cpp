#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n]={0}; 
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum = INT_MIN;
    int tsum = 0;
    for(int i=0;i<n;i++){
        tsum += arr[i];
        if(tsum < 0){
            tsum = 0;
        }
        sum = max(sum,tsum);
    }
    cout<<endl<<sum<<endl;

}