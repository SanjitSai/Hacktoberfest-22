#include<iosteam>
using namespace std;

class disjoinedset{
int root(int parent[], int);

int find(int r){
if (parent[r]==r)
return r;
return find(parent[r])    // recursion till root is found
}

void union( int x, int y){
        int o = find(x);
        int p = find(y);
 
        parent[o] = p;
    }

}
This met
