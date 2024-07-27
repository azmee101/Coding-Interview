#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int maxDistance(int a[], int n){

    int min_val = a[0], diff = 0;

    for(int i = 1; i < n; i++){

        if(a[i] < min_val){

            min_val = a[i];
        }

        diff = max(diff, a[i]-min_val);
    }

    return diff;
}

void solve(){
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    int x; 

    for(int i = 0; i < n; i++){

        cin >> x;
        v[i] = {x, i};
    }

    sort(v.begin(), v.end());

    int array_of_indx[n];
    
    for(int i = 0; i < n; i++){

        array_of_indx[i] = v[i].second;
    }

    cout << maxDistance(array_of_indx, n) << '\n';
    return;
}

int32_t main()
{
    NEED_FOR_SPEED;
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}