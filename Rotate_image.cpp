#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n,i,j;
	cin>>n;
	int A[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>A[i][j];
		}
	}
	for(i=0;i<n;i++){
		int a=0;
		int b=n-1;
		while(a<b){
			swap(A[i][a],A[i][b]);
			a++;
			b--;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i>j){
				swap(A[i][j],A[j][i]);
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<A[i][j]<<" ";
		}cout<<"\n";
	}


	return 0;
}
