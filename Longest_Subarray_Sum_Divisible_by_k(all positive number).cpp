
// https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_6682399

#include <bits/stdc++.h>
using namespace std;

#define ll long long 

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int longestSubarrayWithSumK(vector<int> a, long long k){

    int n = a.size();
    long long pre[n+1] = {0};

    for(int i = 1; i <= n; i++){
        pre[i] = pre[i-1] + a[i-1];
    }

    unordered_map<ll, ll> mp;
    ll mx = INT_MIN;

    for(int i = 1; i <= n; i++){

        if(pre[i] >= k){

            ll rem = pre[i] - k;

            if(mp[rem] != 0 || rem == 0){

                mx = max(mx, i-mp[rem]);
            }

            // mp[pre[i]] = i;
        }

        else if(mp[pre[i]] == 0){
            mp[pre[i]] = i;
        }
    }
    return mx;

}

void solve(){
    int n, k; cin >> n >> k;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }


    cout << longestSubarrayWithSumK(v, k) << '\n';

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