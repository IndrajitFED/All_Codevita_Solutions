#include<bits/stdc++.h>

 using namespace std;

 int main()
{
    string s;
    string p;
    
    cin>>s;
    cin>>p;
    // MAP to store the Char and the position of the char  
    map<char , int >m;
    
    // Store the Position   
    for(long i=0;i<s.length();i++)
       m[s[i]] = i;
    
    // Bubble Sort to the P string based on the Value obtain from the MAP of Previos String
    for(int i=0;i<p.length();i++){
        for(int j=i+1;j<p.length();j++){
            if(m[p[i]] > m[p[j]]){
                swap(p[i],p[j]);
            }
        }
    }
    // Print the final String 
    cout << p << endl;
   
    return 0;
}
