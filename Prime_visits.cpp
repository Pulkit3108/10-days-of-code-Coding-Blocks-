#include<iostream>
using namespace std;
void prime_sieve(long int A[],long int n){
    long int i,j;
    A[0]=A[1]=0;
    A[2]=1;
    for(i=3;i<n;i+=2){
        A[i]=1;
    }
    for(i=3;i<n;i+=2){
        if(A[i]==1){
            for(j=i*i;j<n;j=j+i){
                A[j]=0;
            }
        }
    }
}

int main(){
    
    long int t,i;
    cin>>t;
    while(t--){
        long int a,b,c=0;
        cin>>a>>b;
        long int A[b]={0};
        prime_sieve(A,b);
        for(i=a;i<b;i++){
            if(A[i]==1){
                c+=1;
            }
        }
        cout<<c<<"\n";
    }
    
    return 0;
}
