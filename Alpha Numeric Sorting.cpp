#include<bits/stdc++.h>
using namespace std;

vector<string>vstr;
vector<int>vint;

// Compare function to sort string lexicographically
bool comp(string a,string b){
    if(a[0] < b[0]) return true;
    else return false;
}

// This Function Take the String and Store Integer to int vector and string to string vector
void extractIntegerWords(string str) 
{ 
    stringstream ss;   
    ss << str; 

    string temp; 
    int found;
    while (!ss.eof()) { 
  
        ss >> temp; 
        if (stringstream(temp) >> found) 
            vint.push_back(found);
        else{
            // If it was a string then lower case the whole string
            transform(str.begin(), str.end(), str.begin(), ::tolower);  
            vstr.push_back(str); 
        }    
    }
} 

// This Function will convert the strings to WORD  
void convertWords(string str) 
{ 
    // word variable to store word 
    string word; 
  
    // making a string stream 
    stringstream iss(str); 
  
    // Read and print each word. 
    while (iss >> word) {
        extractIntegerWords(word);
    }

}

int main() {
    
    int t;
    cin>>t;
    int cnt =0;
    t++;
    while(t--){
        string str;
        getline(cin, str);
        convertWords(str);
        sort(vint.begin(),vint.end());
        sort(vstr.begin(),vstr.end(),comp);
        int i;
        for(i=0;i<vint.size();i++){
            cout << vstr[i] <<" "<<vint[i] <<" ";
            cnt++;
        }
        if(cnt > 1) cout << endl;
        vint.clear();
        vstr.clear();
    }
    return 0;
}
