#include<iostream>
#include<stdio.h> 
#include<stdlib.h> 
using namespace std;
int main(){
    int N,M,K,S;
    cin>>N>>M>>K>>S;
    char A[N][M];
    int i=0,j=0;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            cin>>A[i][j];
        }
    }
    i=0,j=0;
    label:
    while(i<N){
        for(j=0;j<M;j++){
            if(S<K){
                cout<<"No";
                exit(0);
            }
            else{
                switch(A[i][j]){
                    case '.':S=S-2;
                    break;
                    case '*':S=S+5;
                    break;
                    case '#':++i; goto label;
                    break;
                }
				if(j!=M-1){
					S=S-1;
				}
            }
        }++i;
    }
    cout<<"Yes"<<"\n";
    cout<<S;
    
    return 0;
}
