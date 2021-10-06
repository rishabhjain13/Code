#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = {10, 7, 4, 6, 8, 10, 11};
    int n = 7;
    int ans=0;
    int pd = arr[1]-arr[0];
    int temp = 2;
    for(int i=2; i<n ; i++){
        cout<<pd<<" ";
        if(pd == arr[i]-arr[i-1]){
            ++temp;
        }else{
            ans = max(ans,temp);
            pd = arr[i] - arr[i-1];
            temp = 2;          
        } 
    }
    ans = max(ans,temp);
    cout<<ans;

}