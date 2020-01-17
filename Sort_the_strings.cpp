#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string string_extract(string s,int a){
    char *s1 = strtok((char *)s.c_str()," ");
    while(a>1){
        s1 = strtok(NULL," ");
        a--;
    }
    return((string)s1);
}
int ctoint(string s){
    int a=0,p=1,i;
    for(i=s.length()-1;i>=0;i--){
        a+=((s[i]-'0')*p);
        p=p*10;
    }
    return(a);
}
bool ncompare(pair<string,string> s1,pair<string,string> s2){
    string a,b;
    a=s1.second;
    b=s2.second;
    return(ctoint(a)<ctoint(b));
    
}
bool lcompare(pair<string,string> s1,pair<string,string> s2){
    string a,b;
    a=s1.second;
    b=s2.second;
    return(a<b);
    
}
int main(){
    int n;
    cin>>n;
    cin.get();
    int i,key;
    string S[n],reverse,compare;
    for(i=0;i<n;i++){
        getline(cin,S[i]);
    }
    cin>>key>>reverse>>compare;
    pair<string,string> SP[n];
    for(i=0;i<n;i++){
        SP[i].first = S[i];
        SP[i].second = string_extract(S[i],key);
    }
    if(compare=="numeric"){
        sort(SP,SP+n,ncompare);
    }
    else{
        sort(SP,SP+n,lcompare);
    }
    if(reverse=="true"){
        for(i=0;i<n/2;i++){
            swap(SP[i],SP[n-i-1]);
        }
    }
    for(i=0;i<n;i++){
            cout<<SP[i].first<<"\n";
        }
    
    return 0;
}
