#ifndef GRAPHS_H
#define GRAPHS_H

#include <stdbool.h>

// Define a structure for a graph node
typedef struct Node {
    int value;
    struct Edge *edges;  // Pointer to an array of edges
    int edgeCount;       // Number of edges
} Node;

// Define a structure for an edge
typedef struct Edge {
    Node *dest;   // Destination node
    int weight;   // Weight of the edge
} Edge;

// Define a structure for the graph
typedef struct Graph {
    Node *nodes;  // Pointer to an array of nodes
    int nodeCount; // Number of nodes
    bool isDirected;  // True if the graph is directed
} Graph;

#endif // GRAPHS_H
