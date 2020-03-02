#include<fstream>
#include<queue>
#include<vector>
using namespace std;

ifstream cin ("a.txt");
ofstream cout ("a.out");

int main(){
    int n,m;
    int a,b;
    cin>>n>>m;
    vector <int> samp;
    vector < vector <int> > conn(n+1,samp);
    // load adajency matrix
    for(int i=0;i<m;i++){
        cin>>a>>b;
        conn[a].push_back(b);
        conn[b].push_back(a);
    }
    bool visited[n+1];
    for(int i=0;i<n+1;i++){
        visited[i] = false;
    }
    queue <int> level;
    level.push(8);
    visited[8] = true;
    int si=0;
    int le=0;
    while(!level.empty()){
        cout<<"LEVEL :"<<le<<endl;
        si = level.size();
        while(si--){
            int x = level.front();
            level.pop();
            cout<<x<<endl;
            for(int j=0;j<conn[x].size();j++){
                if(!visited[conn[x][j]]){
                    visited[conn[x][j]] = true;
                    level.push(conn[x][j]);
                }
            }
        }
        le++;
    }
}
