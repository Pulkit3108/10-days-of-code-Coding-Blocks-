#include<iostream>
using namespace std;
int search(int A[],int n,int x){
    int beg=0;
    int end=n-1;
    int mid;
    while(beg<=end){
        mid=(beg+end)/2;
        if(A[mid]==x){
            return(mid);
        }
        else if(A[beg]<=A[mid]){
            if(x>=A[beg] and x<=A[mid]){
                end=mid-1;
            }
            else{
                beg=mid+1;
            }
            
        }
        else{
            if(x>=A[mid] and x<=A[end]){
                beg=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return(-1);
}
int main(){
    int n;
    cin>>n;
    int i,A[n];
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    int x;
    cin>>x;
    int ans = search(A,n,x);
    cout<<ans<<"\n";
}
