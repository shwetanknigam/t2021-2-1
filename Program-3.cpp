#include <iostream>
using namespace std;
int main(){
    int a=2,x,i=3;
    cin>>x;
    if(x>=1){
        if(x%2==0){
            x--;
        }
        cout<<1;
        while(a<=x){
            cout<<", "<<i;
            i+=2;
            a++;
        }
    }
    return 0;
}
