#include <iostream>
using namespace std;
#include <limits.h>
#include <iomanip>

#define V 6

// Finds the vertex with the minimum distance
int minDistance(int dist[], bool sptSet[])
{
    int min = INT_MAX, min_index;

    // Iterate through the vertices and find the vertex with the smallest distance
    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

// Prints the shortest path.
void printSolution(int dist[], int src)
{
    cout << "Source City: " << src << endl;
    cout << "  Vertex \t\t Distance from Source" << endl;

    // Outputs the shortest distance from the source vertex to all other vertices.
    for (int i = 0; i < V; i++) {
        cout << setw(5) << i << " \t\t\t\t";
        if (dist[i] == INT_MAX)
            cout << "INF" << endl;
        else
            cout << dist[i] << endl;
    }
}

// Dijkstra's algorithm to find the shortest path from a source node to all other nodes
void dijkstra(int graph[V][V], int src)
{
    int dist[V];

    bool sptSet[V];

    // Initializes the distance and sptSet array.
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

    dist[src] = 0;

    // Find the vertex with the minimum distance
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet);

        sptSet[u] = true;

        // Update the distance values of the adjacent vertices
        for (int v = 0; v < V; v++)
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    printSolution(dist, src);
}

int main()
{

    int graph[V][V] = { {0, 10, 0, 0, 15, 5},
                        {10, 0, 10, 30, 0, 0},
                        {0, 10, 0, 12, 5, 0},
                        {0, 30, 12, 0, 0, 20},
                        {15, 0, 5, 0, 0, 0},
                        {5, 0, 0, 20, 0, 0} };

    // Find the shortest path starting from source city i
    dijkstra(graph, 0);

    return 0;
}
