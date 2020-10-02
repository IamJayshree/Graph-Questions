// @summerbleach
#include <bits/stdc++.h>
using namespace std;
#define all(a)      (a).begin(),(a).end()
#define deb(x)		cout << #x << " = " << x << endl
#define loop(x,y)	for(int i = x;i < y;++i)
#define vi          vector<int>
#define ll          long long
#define endl        '\n'

// GRAPH THEORY PROGRAM
void printGraph(vector<int> adj[], int V) 
{ 
    for (int v = 1; v <= V; ++v) 
    { 
        cout << "\n Adjacency list of vertex "
             << v << "\n head "; 

        for (int x=0; x < adj[v].size(); ++x) {
           cout << "-> " << adj[v][x]; 
        }
        printf("\n"); 
    } 
} 

void adjacencylist(int v,int e){

	vector<int> ar[v+1];

	while(e--){
		int a,b;
		cin >> a >> b;
		ar[a].push_back(b);
		ar[b].push_back(a);
	}

   printGraph(ar,v);
}


int main(){
	int v,e;
    cin >> v >> e;
    adjacencylist(v,e);
	return 0;
}
