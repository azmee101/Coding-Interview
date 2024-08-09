
// https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool comparator(pair<string, int>& a, pair<string, int>& b){

    if(a.second == b.second){
        return a.first < b.first;
    }

    return a.second > b.second;
}

void solve(){
    int n;
    cin >> n;
    vector<pair<string, int>> v(n);
    for(int i = 0; i < n; i++){
        pair<string, int> x;
        cin >> x.first;
        cin >> x.second;
        v[i] = x;
    }

    sort(v.begin(), v.end(), comparator);

    for(auto &x : v){

        cout << x.first << ' ' << x.second << '\n';
    }

    return;
}

int32_t main()
{
    NEED_FOR_SPEED;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}