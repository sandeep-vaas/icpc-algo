#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
#define mod 1000000007
#define MAX 10000003
#define pb push_back
using namespace std;
vector<vector<ll> > vec;
//DFS(Depth First Search) of the Graph;
void DFS(ll s, vector<vector<ll> > vec, bool visited[])
{
    visited[s]=true;
    //Print each of the vartices that previouly not visited;
    cout << s << " ";
    for(auto i=vec[s].begin();i!=vec[s].end();i++)
    {
        //if any vartices is not visited previously then go for DFS for that vartex;
        if(!visited[*i])
            DFS(*i, vec, visited);
    }
}
int main()
{
    ll n,e,u,v;
    //'n' is the total no of vartices and 'e' is total no of edges in the given graph;
    cin>>n>>e;
    vec.assign(n, vector<ll>());
    bool visited[n+1];
    for(ll i=0;i<e;i++)
    {
        //'u' and 'v' are two vartices that are connected by a edge;
        cin>>u>>v;
        vec[u].pb(v);
        vec[v].pb(u);
    }
    for(ll i=0;i<=n;i++)
        visited[i]=false;
    //Print Depth First Search of the graph;
    cout << "DFS of the Graph: " << endl;
    DFS(0, vec, visited);
    cout << endl;
    return 0;
}
