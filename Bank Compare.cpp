#include <iostream>
#include <cmath>
using namespace std;

float interest_for_slab(int principal){
    int numberOfYears = 0;
    float monthlyInterestRate = 0;
    cin>>numberOfYears>>monthlyInterestRate;
    float numerator = principal*monthlyInterestRate;
    float denominator = ( 1 - 1 / (pow((1 + monthlyInterestRate),(numberOfYears * 12))));
    float ans = numerator / denominator;
    return ans;
}

int main() {
    int t;
    cin>>t;
    int principal,years;
    int bank_sum[2] = {0};
    while(t--){
        cin>>principal>>years;
        for(int i=0;i<2;i++){
            int no_of_slabs;
            cin>>no_of_slabs;
            for(int j=0;j<no_of_slabs;j++){
                float ans = interest_for_slab(principal);
                bank_sum[i]+=ans;
            }
        }
        if(bank_sum[0] < bank_sum[1]){
            cout<<"Bank A"<<endl;
        }
        else{
            cout<<"Bank B"<<endl;
        }
    }
    return 0;

}
