#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
#define mod 1000000007
#define MAX 10000003
#define pb push_back
using namespace std;
vector<vector<ll> > vec;
//BFS(Bread First Search) of the Graph;
void BFS(ll s, vector<vector<ll> > vec, bool visited[])
{
    ll x;
    //make a queue that will store initial vartex for any bread first search;
    queue<ll> q;
    //push starting vartex in the queue and mark as visited;
    q.push(0);
    visited[0]=true;
    //Continue the BFS operation untill queue become empty;
    while(!q.empty())
    {
        //take the front vartex of the queue and apply BFS if it is not visited previously;
        x=q.front();
        q.pop();
        cout << x << " ";
        for(auto i=vec[x].begin();i!=vec[x].end();i++)
        {
            //for each vartex if it is not visited previously then push it into the queue and mark as visited;
            if(!visited[*i])
            {
                q.push(*i);
                visited[*i]=true;
            }
        }
    }
    cout << endl;
}
int main()
{
    ll n,e,u,v,x;
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
    //Print Bread First Search of the graph;
    cout << "BFS of the Graph: " << endl;
    BFS(0, vec, visited);
    return 0;
}
