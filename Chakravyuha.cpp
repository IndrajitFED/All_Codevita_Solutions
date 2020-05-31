#include<bits/stdc++.h> 
using namespace std;
int main() {
    int n;
    int row , col;
    cin >> n;
    row = col = n;
    int arr[row][col] = {0};
    int startrow = 0;
    int endrow = row - 1;
    int startcol = 0;
    int endcol = col - 1;
    int cnt = 1;
    int pair_cnt=0;
    vector< pair<int,int> >vec;
    while(startrow <= endrow){
        // Upper side
        for(int i=startcol;i<=endcol;i++){
            arr[startrow][i] = cnt;
            if(cnt % 11 == 0){
                vec.push_back(make_pair(startrow,i));
                pair_cnt++;
            }
            cnt++;
        }
        startrow++;
        // Right Side
        for(int i=startrow;i<=endrow;i++){
            arr[i][endcol] = cnt;
            if(cnt % 11 == 0){
                vec.push_back(make_pair(i,endcol));
                pair_cnt++;
            }
            cnt++;
        }
        endcol--;
        // Bottom Side
        for(int i=endcol;i>=startcol;i--){
            arr[endrow][i] = cnt;
            if(cnt % 11 == 0){
                vec.push_back(make_pair(endrow,i));
                pair_cnt++;
            }
            cnt++;
        }
        endrow--;
        // Left side
        for(int i=endrow;i>=startrow;i--){
            arr[i][startcol] = cnt;
            if(cnt % 11 == 0){
                vec.push_back(make_pair(i,startcol));
                pair_cnt++;
            }
            cnt++;
        }
        startcol++;
    }


    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
    cout << "Total Power points :" << pair_cnt + 1 << endl;
    cout <<"(0"  << "," <<"0)" << endl;
    for (int i=0; i< vec.size(); i++) 
    { 
        cout <<"(" <<vec[i].first << "," << vec[i].second<< ")" << endl; 
    } 

}
