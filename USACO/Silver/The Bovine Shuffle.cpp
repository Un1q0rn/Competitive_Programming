#include <bits/stdc++.h> 
using namespace std;

#define vi(x)  vector<x>
#define pb push_back
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ROF(i,b,a) for(int i=b;i>=a;i--)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
#define pb push_back
#define setdecimal(x) cout << fixed << setprecision(x)

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair
#define ll long long int

void setIO(string name = "") {
    cin.tie(0)->sync_with_stdio(0); // see /general/fast-io
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin); // see /general/input-output
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO("shuffle");
    int n;cin >> n;
    vector<int> p(n),ind(n);
    for(auto &e:p){
        cin >> e;
        e--;
        ind[e]++;
    }
    queue<int> q;
    int ans = n;
    for(int i=0;i<n;i++){
        if(ind[i] == 0){
            q.push(i);
            ans--;
        }
    }
    while(sz(q)){
        int u = q.front();
        q.pop();
        ind[p[u]]--;
        if(ind[p[u]] == 0){
            q.push(p[u]);
            ans--;
        }
    }
    cout << ans;
    return 0;
}
