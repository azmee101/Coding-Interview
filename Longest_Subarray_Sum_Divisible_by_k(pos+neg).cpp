
// https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_6682399
// https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_5713505


#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int longestSubarrayWithSumK(vector<int> a, long long k) {
    int mx = 0;
    unordered_map<long long, int> mp;
    long long sum = 0;
    int n = a.size();
    long long pre[n+1] = {0};

    for(int i = 1; i <= n; i++){
        pre[i] = pre[i-1] + a[i-1];
    }
    
    for(int i = 1; i <= n; i++){

        long long rem = pre[i] - k;

        if(pre[i] == k){
            mx = max(mx, i);
        }

        else if(mp[rem]){

            mx = max(mx, i-mp[rem]);
        }

        if(mp[pre[i]] == 0){
            mp[pre[i]] = i;
        }
    }
    return mx;
}


void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << longestSubarrayWithSumK(a, k) << '\n';
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