//Armstrong Number

#include<iostream>
using namespace std;
int main(){
    int num ,temp,sum=0,rem;
    cin>>num;
    temp=num;
    while(temp!=0){
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }
    if(num==sum){
        cout<<"number is armstrong ";  
    }
    else
    {
        cout<<"number is not armstrong ";
    }
}