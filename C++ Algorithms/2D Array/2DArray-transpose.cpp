#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m; cin >> n >> m;
    int arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0; j<m; j++)
            cin>>arr[i][j];
        
    int ans[n][m];
    for(int i=0;i<n;i++)
        for(int j=0; j<m; j++)
            ans[i][j] = arr[j][i];
    
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }

}