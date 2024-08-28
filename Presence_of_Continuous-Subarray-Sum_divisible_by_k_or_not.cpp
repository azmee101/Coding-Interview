
// https://leetcode.com/problems/continuous-subarray-sum/description/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool checkSubarraySum(vector<int>& v, int k){

    int n = v.size()+1;
    int pre[n];

    for(int i = 0; i < n; i++){
        pre[i] = 0;
    }

    for(int i = 1; i < n; i++){

        pre[i] = pre[i-1] + v[i-1];
        pre[i] = pre[i] % k;
    }

    unordered_map<int, int> mp;

    for(int i = 1; i < n; i++){

        if((mp[pre[i]] != 0 && i - mp[pre[i]] >= 2) or (pre[i] == 0 && i >= 2)){
            return true;
        }

        if(mp[pre[i]] == 0){
            mp[pre[i]] = i;
        }
    }
    return false;
}

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int k; cin >> k;
    cout << checkSubarraySum(v, k) << '\n';
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