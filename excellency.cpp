#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    if(n<0) {
        n = -n;
    }
int p = 0;
for(int i = 10;i<=n*10 ; i = i*10){
    if(n%i!=0){
    p++;}
    else{
p = p+1;}

}
if(n==0) cout<<"Only one digit sir";
else cout<<p<<" no of digit will be ";}
