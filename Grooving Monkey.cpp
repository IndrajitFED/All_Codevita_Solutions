#include <bits/stdc++.h>
using namespace std;
// Check if two arrays are equal or not
int isequal(int x[],int m)
{
    int c1=0;
    for(int k=1;k<=m;k++)
    {
        if(x[k]==k)
        c1++;
    }
    return c1;
}

int main() {
    int n,a[100],i,b[100],k,c[100],cnt,t;
    cin >> t;

    while(t--)
    {
        cnt=0;
        cin >> n;
        for(i=1;i<=n;i++)
        {
        cin >> a[i];  //storing actual input
        b[i]=i;    // storing ihe index of each input
        }
    z: for(i=1;i<=n;i++) c[a[i]]=b[i]; //based on actual input store the array
        cnt++;
        if(isequal(c,n)==n) cout << cnt << endl; //return the cnt of equal elements == n then ret cnt
        else
        {
            for(i=1;i<=n;i++) b[i]=c[i]; //put all the elements of c back to b and go to z
            goto z;
        }
    }
    return 0;

}
