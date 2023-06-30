class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool issafe(int node, vector<int>&color, bool graph[101][101], int n, int col)
    {
        for(int k=0; k<n; k++)
        {
            if(k!=node && graph[k][node]==1 && color[k]==col)
                return false;
        }
        return true;
    }
    bool fun(int node, vector<int>&color, int m, int n, bool graph[101][101])
    {
        if(node==n)
            return true;
        for(int i=1; i<=m; i++)
        {
            if(issafe(node, color, graph, n, i))
            {
                color[node]=i;
                if(fun(node+1,color,m,n,graph))
                    return true;
                color[node]=0;
            }
        }
        return false;
    }
    bool graphColoring(bool graph[101][101], int m, int n) {
        vector<int>color(n,0);
        return fun(0,color,m,n,graph);
    }
};