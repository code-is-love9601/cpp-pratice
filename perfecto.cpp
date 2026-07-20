#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter your number : ";
cin>>n;
int p = 0;
int k ;
int x;
for(int i = 10; i<=n*10; i = i*10){
int j = n%i;
 if(n%i>=10){
    int k = i/10;
      int x = (n%i)/k;
      p = p+x;
      
 }
 else{
 p = p+j;}
 n = n - n%i;
}
cout<<p<<endl;
}