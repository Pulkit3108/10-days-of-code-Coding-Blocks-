#include<iostream>
#include<cmath>
using namespace std;
int main () {
    long long int n,i=1,s=0;
    cin>>n;
    while(floor((n/pow(5,i)))!=0){
        s=s+floor(n/pow(5,i));
        i++;
    }
    cout<<s;
    
	return 0;
}
