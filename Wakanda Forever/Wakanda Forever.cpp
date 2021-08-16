#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long num, ans=0;
    cin >> num;
    if(num<=6)
        ans = 15;
    else{
        if(num%2)
            n++;
        num = num * 5;
        ans = num / 2;
    }
    cout << ans << "\n";
}

int main() {
    int test_case;
    cin >> test_case;
    for(int i = 1; i <= test_case; i++)
        solve();
    return 0;
}