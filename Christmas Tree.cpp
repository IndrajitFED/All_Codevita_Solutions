#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int days = n;

    if(n <= 1){
        cout << "You cannot generate christmas tree" << endl;
        return 0;
    }

    if(n > 20){
        cout << "Tree is no more" << endl;
        return 0;
    }
    // Top of the Branch of Tree
    if(days >= 2){
        // Part 1
        for(int i = 1, k = 0; i <= n + 1; ++i, k = 0)
        {
            for(int sp = 1; sp <= n+1-i; sp++)
            {
                cout <<"  ";
            }
            while(k != 2*i-1)
            {
                cout << "* ";
                ++k;
            }
            cout << endl;
        } 
        days--;
    }  
    // Part 2 will make 2 less branch then top
    if(days >= 1){
        // Part 2
        for(int i = 2, k = 0; i < n+1; ++i, k = 0)
        {
            for(int sp = 1; sp <= n+1-i; sp++)
            {
                cout <<"  ";
            }
            while(k != 2*i-1)
            {
                cout << "* ";
                ++k;
            }
            cout << endl;
        }  
        days--;
    }

    // diff will help us to reduce each branch by 1
    int diff = 0;
    while(days > 1){
        // Part 3
        for(int i = 2, k = 0; i < n - diff; ++i, k = 0)
        {
            for(int sp = 1; sp <= n+1-i; sp++)
            {
                cout <<"  ";
            }
            while(k != 2*i-1)
            {
                cout << "* ";
                ++k;
            }
            cout << endl;
        } 
        days--; 
        diff++;
    }

    // Stand 
    for(int i = 1, k = 0; i <= 2 ; ++i, k = 0)
    {
        for(int sp = 1; sp <= n; sp++)
        {
            cout <<"  ";
        }
        cout << "*" << endl;
    } 
}
