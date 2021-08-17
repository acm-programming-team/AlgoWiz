#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define int long long
vector<int> a,b;

int dp[2005][2005][2];

int solve(int i, int j, int k,int n, int m){
    if((i==n)||(j==m))
    {
        return 0;
    }
    if(dp[i][j][k] != -1)
        return dp[i][j][k];

    
    int c1(0),c2(0),c3(0);
    if(a[i] == b[j])
        c1 = 1+ solve(i+1,j+1,k,n,m);
    if(k>0)
        c2 = 1+solve(i+1,j+1,k-1,n,m);
    c3 =max(solve(i+1,j,k,n,m), solve(i,j+1,k,n,m));

    return dp[i][j][k] = max({c1,c2,c3});
}

signed main(){
    memset(dp,-1,sizeof(dp));
    int k = 1;
    int n,m;
    cin >> n >> m;

    a = vector<int>(n);
    b = vector<int>(m);

    for(auto &i:a)
        cin>>i;

    for(auto&i:b)
        cin>>i;

    cout<<solve(0,0,1,n,m)<<endl;

}
