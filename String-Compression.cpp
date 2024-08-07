
// https://leetcode.com/problems/string-compression/?envType=study-plan-v2&envId=leetcode-75

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int compress(vector<char>& v){

    int n = v.size();
    int indx = 0;
    int cnt = 1;

    for(int i = 1; i < n; ++i){

        if(i < n && v[i] == v[i-1]){
            cnt++;
        }

        else{
            v[indx++] = v[i-1];
            if(cnt > 1){

                string cntStr = to_string(cnt);
                for(char c : cntStr){
                    v[indx++] = c;
                }
            }
            cnt = 1;
        }
    }

    // handling the last group of consecutive group of characters
     
    v[indx++] = v[n-1];
    if(cnt > 1){
        string cntStr = to_string(cnt);
        for(char c : cntStr){
            v[indx++] = c;
        }
    }
    return indx;
}

void solve(){

    int n; cin >> n;
    vector<char> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    cout << compress(v) << '\n';
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