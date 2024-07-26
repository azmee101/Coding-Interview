
// https://leetcode.com/problems/maximum-subarray/description/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int maxSubarray(vector<int>& v){

    int tot_sum = v[0], cur_sum = v[0];

    for(int i = 1; i < v.size(); i++){

        if(cur_sum < 0){

            cur_sum = 0;
        }

        cur_sum += v[i];


        tot_sum = max(tot_sum, cur_sum);
    }
    
    return tot_sum;
}

void solve(){
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++){

        cin >> v[i];
    }
    
    cout << maxSubarray(v) << '\n';
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