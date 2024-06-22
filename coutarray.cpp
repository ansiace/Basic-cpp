#include<iostream>
using namespace std;
int main(){
    int arr[6]={6,9,7,8,3,2};
    int arr1[6];
    int n = sizeof arr / sizeof arr[0];
    for(int i=0;i<n;i++)
    {
        arr1[i]=arr[i];
      
    }
    for( int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    
}