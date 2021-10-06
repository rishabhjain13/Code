#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int getbit(int num,int pos){
    return ((num&(1<<pos))!=0);
}

int setbit(int num,int pos){
    return ((num|(1<<pos)));
}

int clearbit(int num,int pos){
    return (num & (~(1<<pos)));
    
}

int updatebit(int num,int pos,int bit){
    return (num &(~(1<<pos)))|(bit<<pos);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n = 5;
    cout<<updatebit(n,2,0);

}