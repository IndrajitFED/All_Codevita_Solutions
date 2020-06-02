#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    int count,sum;
    while(t--){
        int n;
        cin >> n;
        sum=0;
        count=0;
        // Incrementing the Coutner until the sum of dollars is less than n
        for(int i=1;sum<n;i++){
            sum+=i;
            count++;
        }
        cout << count << endl;
    }

    return 0;
}
