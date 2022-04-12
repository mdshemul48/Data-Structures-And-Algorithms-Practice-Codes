#include <bits/stdc++.h>
using namespace std;

// aikane amara fist a akta note dhore oita print kortaci and oitar jono visited true kortaci.
// then amara oitar next node a jaitaci. then oita print kore dhaktaci ja oitar next a kono node ase nake.
// jodi thake tahole oitai jabo. aibabe cholte thakba..
void print(vector<vector<int>> v, int sv, vector<bool> &visited)
{

    cout << sv << endl;
    visited[sv] = true;

    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[sv][i] == 1 && visited[i] == false)
        {
            print(v, i, visited);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<int>> matrix(n, vector<int>(n, 0));

    for (int i = 1; i <= e; i++)
    {
        int fv, sv;
        cin >> fv >> sv;
        matrix[fv][sv] = 1;
        matrix[sv][fv] = 1;
    }
    vector<bool> visited(n, 0);
    print(matrix, 0, visited);
    return 0;
}