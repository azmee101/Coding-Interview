// https://leetcode.com/problems/reverse-words-in-a-string/description/?envType=study-plan-v2&envId=leetcode-75

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string reverseString(string str){

    vector<string> v;
    string x = "";

    for(int i = 0; i < str.size(); i++){

        if(str[i] != ' '){

            x+=str[i];
        }

        if(x.size() > 0 && (str[i] == ' ' || i == str.size()-1)){
            
            v.push_back(x);
            x = "";
        }

    }

    reverse(v.begin(), v.end());

    string ans ="";

    for(int i = 0; i < v.size(); i++){

        ans += v[i];

        if(i != v.size()-1){
            ans += ' ';
        }
    }

    return ans;
}

void solve(){

    string str;
    getline(cin, str);

    cout << reverseString(str) << '\n';
    
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