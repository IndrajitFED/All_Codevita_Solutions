#include <iostream>
using namespace std;
int main() {
    long long t;
    cin >> t;
    long long n,sum,ans;
    while(t--){
        sum = 0;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<n-1;i++){
            sum += arr[i] + arr[i+1];
            ans = sum + arr[i+1];
        }
        cout << ans << endl;
    }
    return 0;
}
