#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,x;
        cin>>N;
        cout<<__builtin_popcount(N)<<endl;
    }
}
