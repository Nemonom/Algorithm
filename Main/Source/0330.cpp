/*
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

typedef pair<int, int> IntPair;

int map[503][503];
bool check[503][503];
int n, m;

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };


int bfs(int x, int y)
{
    int result = 1;

    queue<IntPair> q;
    q.push(make_pair(x, y));

    check[x][y] = true;

    while(!q.empty())
    {
        IntPair front = q.front();
        q.pop();


        for (int i = 0; i < 4; i++)
        {
            int nx = front.first + dx[i];
            int ny = front.second + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;

            if (check[nx][ny] == false && map[nx][ny] == 1)
            {
                check[nx][ny] = true;
                q.push(make_pair(nx, ny));
                result++;
            }
        }
    }

    return result;
}


int main(void)
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> map[i][j];
        }
    }

    int max_size = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (map[i][j] == 1 && check[i][j] == false)
            {
                check[i][j] = true;

                int result = bfs(i, j);
                max_size = max(max_size, result);
                
                cnt++;
            }
        }
    }

    cout << cnt << '\n' << max_size << endl;

    return 0;
}
*/