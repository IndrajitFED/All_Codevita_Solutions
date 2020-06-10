#include <bits/stdc++.h>
using namespace std;
long long arr[10000000];

long long findtheRange(long long *arr,int a,int b,int n){
    long long cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=a and arr[i]<=b){
            cnt++;
        }
    }
    return cnt;
}

int main() {
    long long t,a,b;
    long long n,k,cnt;
    cin>>n>>k;
    for(long long i=0;i<n;i++){
        cin >> arr[i];
    }
        
    for(int j=0;j<k;j++){
        cin>>a>>b;
        cout << findtheRange(arr,a,b,n)<<" ";
    }
    return 0;
}
