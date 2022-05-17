#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    map<int, set<string>> mv;
    for(int i=0;i<c;i++){
        int x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        mv[y].insert(s);

        int l;
        cin>>l;
    }

    vector<string> vs;
    for(int i=0; i<d; ++i){
        int p;
        cin>>p;
        //cout<<p<<"\n";
        for(int j=0; j<p; ++j){
            string str;
            cin>>str;
            if(j!=p-1)
                vs.push_back(str);
           // cout<<str<<"\n";
        }

    }
    map<int, map<string, int>> ans;
    for(auto it: mv){

        //cout<<it.first<<" "<<mv[it.first].size()<<"#";

        // map<string, int> ms;
        for(int i=0; i<vs.size(); ++i){
            if(mv[it.first].count(vs[i])){
                // ms[vs[i]]++;
                //ans[it.first].push_back({vs[i],ms[vs[i]]});
                ans[it.first][vs[i]]++;

            }
        }
    }
    cout<<ans.size()<<"\n";
    for(auto i:ans){
        cout<<i.first<<"\n";
        cout<<ans[i.first].size()<<"\n";
        for(auto j: ans[i.first]){
            cout<<j.first<<" "<<j.second<<"\n";
        }
    }
}

int main()
{
     #ifndef ONLINE_JUDGE
        freopen("d.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    solve();
    cout<<"\n";
    return 0;
}
