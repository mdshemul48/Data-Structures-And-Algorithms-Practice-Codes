#include <iostream>
#include <list>
#include <string>
#include <unordered_map>
#include <vector>
#include <queue>

using namespace std;

class Node
{
public:
    string name;
    list<string> nbrs;
    Node(string name)
    {
        this->name = name;
    }
};

class Graph
{
    unordered_map<string, Node *> m;

public:
    Graph(vector<string> cities)
    {
        for (auto city : cities)
        {
            m[city] = new Node(city);
        }
    }
    void addEdge(string x, string y, bool undir = false)
    {
        m[x]->nbrs.push_back(y);

        if (undir)
        {
            m[y]->nbrs.push_back(x);
        }
    }

    void printAdjList()
    {
        for (auto cityPair : m)
        {
            auto city = cityPair.first;
            Node *node = cityPair.second;

            cout << city << "-->";
            for (auto nbr : node->nbrs)
            {
                cout << nbr << ",";
            }
            cout << endl;
        }
    }
    void bfs(string source)
    {
        queue<string> q;
        unordered_map<string, bool> visited;
        q.push(source);
        visited[source] = true;

        while (!q.empty())
        {
            string name = q.front();
            cout << name << endl;
            q.pop();

            for (string nbr : m[name]->nbrs)
            {
                if (visited.find(nbr) == visited.end())
                {
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
    }
};

int main()
{
    vector<string> cities = {"Mumbai", "Delhi", "Bangalore", "Hyderabad"};

    Graph g(cities);

    g.addEdge("Mumbai", "Delhi");
    g.addEdge("Hyderabad", "Mumbai");
    g.addEdge("Hyderabad", "Delhi");
    g.addEdge("Bangalore", "Delhi");
    g.addEdge("Delhi", "Bangalore");
    g.bfs("Mumbai");

    return 0;
}