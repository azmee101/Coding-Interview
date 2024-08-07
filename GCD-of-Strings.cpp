
// https://leetcode.com/problems/greatest-common-divisor-of-strings/description/?envType=study-plan-v2&envId=leetcode-75

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string gcdOfStrings(string str1, string str2){

    if(str1 + str2 != str2 + str1){
        return "";
    }

    int sz = __gcd(str1.size(), str2.size());
    string ans = "";
    for(int i = 0; i < sz; i++){
        ans.push_back(str1[i]);
    }
    return ans;
}

void solve(){
    string str1, str2;
    cin >> str1 >> str2;
    cout << gcdOfStrings(str1, str2) << '\n';
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