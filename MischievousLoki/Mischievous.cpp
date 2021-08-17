#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define int long long

const int N = 1e5+6;

vector<int> parent(N);
vector<int> sz(N);

void make_set(int i)
{
    parent[i] = i;
    sz[i] = 1;
}

int find_set(int a)
{
    if(a == parent[a])
        return a;

    return parent[a] = find_set(parent[a]);
}

void swap(int &a,int &b)
{
    a = a+b;
    b = a-b;
    a = a-b;
}

void un(int a, int b)
{
    if(sz[a] < sz[b])
        swap(a,b);

    parent[b] = a;
    sz[a]+=sz[b];
    
}

void solve(){
    int n,m,l;
    cin >> n >> m;
    for(int i =1;i<=n;i++)
    {
        make_set(i);
    }
    vector<vector<int>> edges;
    for(int i=0;i<m;i++)
    {
        int u,v,w;cin>>u>>v>>w;
        edges.push_back({w,u,v});
    }
    sort(edges.begin(), edges.end());
    int c = 0;
    for(auto i: edges)
    {
        int l = i[0];
        int a = i[1];
        int b = i[2];
        int x = find_set(a);
        int y = find_set(b);
        if(x ==y)
            continue;

        un(x,y);
        c+=l;
    }
    cout<<c<<endl;
}

signed main(){
    int t;
    cin >> t;
    while(t--){
    solve();
    sz.clear();
    parent.clear();
    }
}