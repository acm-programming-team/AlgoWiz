#include<bits/stdc++.h>
using namespace std;

void solve(){
    int A, B, Ar, Br, D;
    cin >> A >> B >> Ar >> Br >> D;
    if(Ar * D <= A and Br * D <= B)
        cout <<"YES\n";
    else
        cout <<"NO\n";
    return;
}

int main() {
    int test_case;
    cin >> test_case;
    for(int i = 1; i <= test_case; i++)
        solve();
    return 0;
}