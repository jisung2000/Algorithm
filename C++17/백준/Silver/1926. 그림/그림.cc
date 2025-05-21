#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

#define X first
#define Y second
int map[502][502];
int vis[502][502];
int dy[4] = {1,-1,0,0}; //상하좌우
int dx[4] = {0,0,-1,1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for(int y=0; y<n; y++){
        for(int x=0; x<m; x++){
            cin>>map[y][x];
        }
    }
    int mx =0; // 그림 최대값
    int num =0; // 그림의 수 
    for(int y=0; y<n; y++){
        for(int x=0; x<m; x++){
            if(map[y][x]==0 || vis[y][x]==1) continue;
            //(y,x)는 새로운 그림에 속해있는 시작점
            num++; // 그림의 수 1 증가
            queue<pair<int, int>> q;
            vis[y][x] =1;
            q.push({y,x});
            int area = 0;

            while(!q.empty()){
                area++; 
                pair<int, int> cur = q.front(); q.pop();
                for(int dir =0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx < 0 || nx >= n || ny <0 || ny >= m ) continue;
                    if(vis[nx][ny] || map[nx][ny] != 1) continue;
                    vis[nx][ny] =1;
                    q.push({nx, ny});
                }
            }
            mx = max(mx, area);
        }
    }
    cout<< num <<'\n' <<mx;
    return 0;
}