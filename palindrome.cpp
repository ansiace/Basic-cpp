// Palindrome number

#include<iostream>
using namespace std;
int main(){
    int n,c,b=0,r;
    cout<<"enter the number"<<endl;
    cin>>n;  //input number
    c=n;
    while(n!=0){
        r=n%10;
        b=r+(b*10);
        n=n/10;
    }
    if (c==b){
        cout<<" Number is palindrome";
    
    }
    else{
        cout<<" Number is not palindrome";
    }
    return 0;
}
