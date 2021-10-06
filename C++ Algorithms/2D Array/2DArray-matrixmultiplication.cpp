#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n1,m1; cin>>n1>>m1;
    int arr1[n1][m1];
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<m1; j++)
        {
            cin>>arr1[i][j];
        }
    }

    int n2,m2; cin>>n2>>m2;
    int arr2[n2][m2];
    for(int i=0; i<n2; i++)
    {
        for(int j=0; j<m2; j++)
        {
            cin>>arr2[i][j];
        }
    }

    int arr3[n1][m2]={};
    

    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            for(int k=0; k<m1; k++){
                arr3[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }

    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<m2; j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
        
}