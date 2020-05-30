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
    int cor_brac = 0;
    int corr_cnt =0;
    for(int i=0;i<len;i++){
        if(!stk.empty()){
            pair<char,int> tp = stk.top();
            if(tp.first == '(' && str[i] == ')' || tp.first == '[' && str[i] == ']' || 
            tp.first == '{' && str[i] == '}' ){
                cor_brac++;
                stk.pop();
                int l = tp.second + 1;
                int r = i - 1;
                int k = 0;
                while(l < r){
                    if(str[l] != '*' || str[r] != '*') break;
                    if(str[l] == '*') l++, k++;
                    if(str[r] == '*') r--, k++;
                }
                if(k >= 2){
                    corr_cnt++;
                }
            }
            else if(str[i] != '*') stk.push({str[i],i});
        }
        else if(str[i] != '*') stk.push({str[i],i});
    }
    if(stk.empty() && corr_cnt == cor_brac) cout << "YES " << cor_brac <<endl;
    else cout << "NO " << cor_brac <<endl;
    return 0;
}

