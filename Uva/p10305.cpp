#include <bits/stdc++.h>
#define S 103
using namespace std;

vector <int> Order[S];
stack <int> ans;
int vis[S], cn;

void dfs(int src){
    if(vis[src])return;
    vis[src] = 1;
    int sz = Order[src].size();
    for(int z = 0; z < sz; z++){
        int v = Order[src][z];
        if(!vis[v])dfs(v);
    }
    ans.push(src);
}

int main(){
    int n, m, x, y;
    while(cin >> n >> m){
        if(!n && !m)return 0;
        memset(vis, 0, sizeof(vis));
        for(int i = 0; i < m; i++){
            cin >> x >> y;
            Order[x].push_back(y);
        }
        for(int i = 1; i <= n; i++)if(!vis[i])dfs(i);
        int cn = 0, sz = ans.size();
        while(!ans.empty()){
            cn++;
            cout << ans.top();
            if(cn != sz)printf(" ");
            ans.pop();
        }
        puts("");
        for(int i = 0; i <= n; i++)Order[i].clear();
    }
    return 0;
}
