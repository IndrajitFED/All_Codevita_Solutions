#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int primes[1000];
    // 0 1 2 ...... N
    for(int i=0;i<n;i++){
        primes[i] = i;
    }
    // set to 0 for non primes
    int p =2;
    for(p=2; p*p <= n;p++){
        if(primes[p] != 0){
            for (int i = p * 2; i <= n; i+=p){
                primes[i] = 0;
            }
        }
    }

    int sum = 5;
    int cnt = 0;

    for(int j=5;j<= n;j=j+2){
        // check that element is equal to sum and not equal to 0 or -1 so that it was added with previous sum
        if((primes[j] != 0 && primes[j] == sum) || primes[j] == -1) cnt++;

        if(primes[j] !=0 || primes[j] == -1){
            sum = sum + j;
            if(primes[sum] != 0){
                primes[sum] = -1;
            }
        }
    }

    cout << cnt << endl;
}

