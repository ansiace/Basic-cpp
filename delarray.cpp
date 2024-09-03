//Delete an array

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof arr / sizeof arr[0];
    int pos;
    cin>>pos;
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];

    }
    for( int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
