// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int removeDuplicates(vector<int>& v){

    int cur = v[0];

    for(int i = 1; i < v.size(); i++){

        if(v[i] == cur){

            v.erase(v.begin()+i);
            i--;
        }
        else{

            cur = v[i];
        }
    }

    return v.size();
}

void solve(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){

        cin >> v[i];
    }

    sort(v.begin(), v.end());
    
    cout << removeDuplicates(v) << '\n';
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