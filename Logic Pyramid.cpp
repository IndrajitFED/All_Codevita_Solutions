#include <iostream>
using namespace std;

int countDigit(long long n) 
{ 
    int count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
} 


int main() {
    int n;
    cin >> n;
    int val=0;
    int num = 0;
    for(int i=0;i<n;i++){
        for(int x=0;x<n-i-1;x++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            val = (i + j+ 1) * 2;
            num = val * (2 * val - 1);
            if(countDigit(num) < 5){
                int zero = abs(5-countDigit(num));
                while(zero){
                    cout <<"0";
                    zero--;
                }
            }
            cout<<num;
            if(j < i){
                cout <<" ";
            }
        }
        cout << endl;
    }
}
