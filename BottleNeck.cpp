#include <bits/stdc++.h> 
using namespace std; 

int countFreq(long long int arr[], int n) 
{ 
	unordered_map<int, int> mp; 


	for (int i = 0; i < n; i++) mp[arr[i]]++; 

    int maxx = mp[arr[0]];
	for (int i = 1; i <= n; i++) { 
        if (mp[arr[i]] != -1) 
        { 
            if(mp[arr[i]] > maxx){
                maxx = mp[arr[i]];
            }
            mp[arr[i]] = -1; 
        } 
	} 

    return maxx;
} 

int main() 
{ 
	int t;
    int n;
    long long int arr[1000000];
    cin >> t;
    while(t--){
        cin >> n;
        memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        cout << countFreq(arr, n) << endl; 
    }
	return 0; 
} 
