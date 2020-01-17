#include<iostream>
using namespace std;
long int GCD(long int a,long int b){
    if(a==0){
        return(b);
    }
    else{
        return(GCD(b%a,a));
    }
}
int main() {
    long int a,b,c;
    cin>>a>>b;
    if(a<b){
        c=GCD(a,b);
    }
    else{
        c=GCD(a,b);
    }
    cout<<c;
	return 0;
}
