#include<bits/stdc++.h>
using namespace std;
class DisjointSet{
    vector<int>rank,parent,size`;
public:
    DisjointSet(int n){
        rank.resize(n+1,0); //if one based index so we took n+1 and initialize with 0 is zero based index then size is n n+1 goes for both
        parent.resize(n+1);

        size.resize(n+1,1); //for unionBySize

        for(int i=0;i<=n;i++)
        {
            parent[i]=i;
        }
    }

    int findParent(int node)
    {
        if(node==parent[node])
            return node;
        else
            return parent[node]=findParent(parent[node]);
    }

    void unionByRank(int u,int v)
    {
        int ultimate_pu=findParent(u);
        int ultimate_pv=findParent(v);

        if(ultimate_pu==ultimate_pv)return; //that means if both belong to same comeponent of graph then we do not need to do any thing
        if(rank[ultimate_pu]>rank[ultimate_pv])
            parent[ultimate_pv]=ultimate_pu;
        else if(rank[ultimate_pu]<ultimate_pv)
            parent[ultimate_pu]=ultimate_pv;
        else{                               //rank of both are same connect anyone to anyone
            parent[ultimate_pu]=ultimate_pv;
            rank[ultimate_pv]++;            //if any rank is small and any rank is big then we do not need to increase rank if rank is same then we need to increase parent rank by 1 try it
        }
    }

    void unionBySize(int u,int v)
    {
        int ultimate_pu=findParent(u);
        int ultimate_pv=findParent(v);

        if(ultimate_pu==ultimate_pv)return;
        if(size[ultimate_pu]<size[ultimate_pv])
        {
            parent[ultimate_pu]=ultimate_pv;
            size[ultimate_pv]+=size[ultimate_pu];
        }
        else{                              //this else will work for both > and == condition as for  == condition we can implement any one
            parent[ultimate_pv]=ultimate_pu;
            size[ultimate_pv]+=size[ultimate_pu];
        }
    }
};
int main() {
    DisjointSet ds(7);
    ds.unionByRank(1, 2);
    ds.unionByRank(2, 3);  //if we wanted to implement unionBySize then will take here UnionBySize
    ds.unionByRank(4, 5);   //other every thing same
    ds.unionByRank(6, 7);
    ds.unionByRank(5, 6);
    // if 3 and 7 same or not
    if (ds.findParent(3) == ds.findParent(7)) {
        cout<<"Same\n";
    }
    else cout<<"Not same\n";

    ds.unionByRank(3, 7);

    if (ds.findParent(3) == ds.findParent(7)) {
        cout<<"Same\n";
    }
    else cout<<"Not same\n";
    return 0;
}