#include <bits/stdc++.h>
using namespace std;

void func(){
    long long X, Y, P;
    cin >> X >> Y >> P;
    long long x = 0;
    int count_level_up = 1;
    int count_level_right = Y;
    int a;
    for(int i = 2+P; i<=X+1+P; i++){
        if(count_level_up<=count_level_right ){
            a = count_level_up;
        }else {
            a = count_level_right;
        }

        if(a%2==1)
            x = x ^ i;
        count_level_up++;
    }

    count_level_up = X;
    count_level_right = Y-1;

    for(int i = X+2+P; i<=X+Y+P; i++){
        if(count_level_up<=count_level_right ){
            a = count_level_up;
        }else {
            a = count_level_right;
        }  
        if(a%2==1)
            x = x ^ i;
        count_level_right--;
    }

    cout << x << "\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test_case;
    cin >> test_case;
    for(int i = 1; i <= test_case; i++)
        func();
    return 0;
}