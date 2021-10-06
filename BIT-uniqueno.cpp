#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[] = {2,3,4,5,4,3,2,5,1};
    int n=9
    ;
    int ans = 0;
    for(int i=0;i<n;i++){
        ans ^= arr[i];
    }
    cout<<ans<<endl;
}