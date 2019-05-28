#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n=0;
    int k=0;
    int left=0;
    int right=0;
    int mid=0;
    cin>>n>>k;
    right=n;
    int masN[n];
    int masK[k];
    for(int i=0;i<n;i++)cin>>masN[i];
    for(int i=0;i<k;i++)cin>>masK[i];
   
    mid = (left + right)/2;
           
    for(int j=0;j<k;j++){
        while (left <= right) {
            if (masN[mid] < masK[j])
                left = mid + 1;
            else if (masN[mid] == masK[j]) {
                cout<<"YES"<<endl;
                left=0;
                right=n;
                mid = (left + right)/2;
                break;
            }
            else
                right = mid - 1;
           
            mid = (left + right)/2;
        }  
        if(left>right){
            cout<<"NO"<<endl;
            left=0;
            right=n;
            mid = (left + right)/2;
        }
    }
}
