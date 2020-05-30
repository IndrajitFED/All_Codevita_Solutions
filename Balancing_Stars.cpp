#include<bits/stdc++.h>
using namespace std;
int main() {
    string inpstr,str;
    cin>>inpstr;
    stack<pair<char,int>>stk;

    // Remove all the unwanted numbers from the String 
    inpstr.erase(remove_if(begin(inpstr), end(inpstr), [](auto ch) { return isdigit(ch); }),inpstr.end());

    
    int n = inpstr.length();
    // Remove all the not required alphabets
    for(int i=0;i<n;i++){
        if(inpstr[i] < 'a' || inpstr[i] > 'z')
            str.push_back(inpstr[i]);
    }

    int len = str.length();
    int valid_bra = 0;
    int corr_cnt =0;
    
    for(int i=0;i< len;i++) {
            if(!stk.empty()) {
                pair<char, int> tp = stk.top();
                if((tp.first=='(' && str[i]==')') || (tp.first=='[' && str[i]==']') || (tp.first=='{' && str[i]=='}')) {
                    valid_bra++;
                    stk.pop();
                    // check for stars
                    int l = tp.second+1, r = i-1, k=0;
                    while(l<r) {
                        if(str[l]!='*' && str[r]!='*') break;
                        if(str[l]=='*') k++, l++;
                        if(str[r]=='*') k++, r--;
                    }
                    if(k>=2) corr_cnt++;
                }
                else if(str[i]!='*') stk.push({str[i], i});
            }
            else if(str[i]!='*') stk.push({str[i], i});
        }

    if(stk.empty() && corr_cnt == valid_bra) cout << "YES " << corr_cnt <<endl;
    else cout << "NO " << corr_cnt <<endl;
    return 0;
}
