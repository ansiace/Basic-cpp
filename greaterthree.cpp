//Greater of Three

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c; // Enter three numbers
    if(a>b&&a>c){
        cout<<a<<"is greatest";
    }
    else if(b>a&&b>c){
        cout<<b<<"is greatest";
    }
    else if(c>a&&c>b){
        cout<<c<<"is greatest";
    }
}
