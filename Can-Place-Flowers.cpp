
// https://leetcode.com/problems/can-place-flowers/?envType=study-plan-v2&envId=leetcode-75

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool canPlaceFlowers(vector<int>& v, int x){

    if(v.size() == 1 && v[0] == 0 && x == 1){
        
        return true;
    }

    for(int i = 0; i < v.size(); i++){

        if(x != 0){
            if(i == 0){

                if(i+1 < v.size() && v[i] == 0 && v[i+1] == 0){
                    v[i] = 1;
                    x--;
                }
            }
            else{

                if(i+1 < v.size() && v[i] == 0 && v[i-1] == 0 && v[i+1] == 0){
                    v[i] = 1;
                    x--;
                }

                else if(i == v.size() -1 && v[i] == 0 && i-1 >= 0 && v[i-1] == 0){

                    v[i] = 0;
                    x--;
                }
            }
        }
    }

    if(x == 0) return true;
    else return false;
}

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int x; cin >> x;
    cout << canPlaceFlowers(v, x) << '\n';
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