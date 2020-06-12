#include <iostream>
using namespace std;
int main() {
    long long number,five,one,two;
    
    cin >> number;
    // get the max of 5 coins 
    five = (int)((number-4)/5);
    
    // Then Count 1 - from the remaining check if it is odd - 1 or even - 2 
    if(((number-5*five) % 2) == 0) one=2;   
    else one=1;

    // From Remaining number / 2 we will get the two count
    two=((number-5*five-one)/2);

    cout << one+two+five <<" "<<five<<" "<<two<<" "<< one ; 
    return 0;
}
