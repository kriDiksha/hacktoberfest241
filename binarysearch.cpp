#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;
    int i=0;
    int e=(n-1);
    while(i<=e){
       int mid=(i+e)/2;
        if(arr[mid]==key){
        cout<<mid;
        return 0;
        }
        else if(arr[mid]>key)
        e=mid-1;
        else
        i=mid+1;
    }
    return 0;
}