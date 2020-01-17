#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long int N,i,c=0,ans=0,x;
        cin>>N;
        long int A[N],F[N+1];
        memset(F,0,sizeof(F));
        F[0]=1;
        for(i=0;i<N;i++){
            cin>>A[i];
            c=c+A[i];
            c=c%N;
            c=(c+N)%N;
            F[c]++;
        }
        for(i=0;i<N+1;i++){
            x=F[i];
            ans=ans+((x)*(x-1))/2;
        }
        cout<<ans<<"\n";
        
        
    }
}
