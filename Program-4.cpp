#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll dict[10]={0},i,n,j;
    cin>>n;   //Enter no. of elements
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];    //Enter elements
        for(j=1;j<10;j++){
            if(a[i]%j==0){
                dict[j]++;
            }
        }
    }
    for(i=1;i<10;i++){
        cout<<i<<":"<<dict[i]<<endl;
    }
}
