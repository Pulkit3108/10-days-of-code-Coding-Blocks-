#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    cout<<"*";
    for(i=0;i<(n-3)/2;i++){
        cout<<" ";
    }
    for(i=0;i<(n+1)/2;i++){
        cout<<"*";
    }
    cout<<"\n";
    for(i=0;i<(n-3)/2;i++){
        cout<<"*";
        for(j=0;j<(n-3)/2;j++){
            cout<<" ";
        }
        cout<<"*\n";
   }   
   for(i=0;i<n;i++){
       cout<<"*";
   }
   cout<<"\n";
   for(i=0;i<(n-3)/2;i++){
       for(j=0;j<(n+1)/2-1;j++){
           cout<<" ";
       }
       cout<<"*";
       for(j=0;j<(n-3)/2;j++){
            cout<<" ";
        }
        cout<<"*\n";
       
   }
   for(i=0;i<(n+1)/2;i++){
       cout<<"*";
   }
   for(i=0;i<(n-3)/2;i++){
       cout<<" ";
   }
   cout<<"*\n";
   return 0;
}
