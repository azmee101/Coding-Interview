#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int maxDistance(vector<int>& a, vector<int>& b){

    int n = a.size(), m = b.size();
    int i = 0, j = 0, diff = 0;

    while(i < n && j < m){

        if(a[i] > b[j]){
            i++;
        }
        else{
            
            diff = max(diff, j-i);
            j++;
        }
    }
    return diff;
}


void solve(){
    int n; cin >> n;
    vector<int> a(n), b(n);
    
    for(int i = 0; i < n; i++){
        
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){

        cin >> b[i];
    }    
    cout << maxDistance(a, b) << '\n';
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