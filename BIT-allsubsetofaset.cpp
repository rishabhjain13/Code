#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

void subsets(int arr[], int n){
    for(int i=0; i<(1 << n); i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[] = {1,2,3,4};
    subsets(arr,3);
}    

