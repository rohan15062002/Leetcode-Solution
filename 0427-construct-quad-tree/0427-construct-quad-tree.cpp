/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
Node* f(vector<vector<int>>& grid,int rowStart,int rowEnd,int colStart,int colEnd)
{
    if(rowStart>rowEnd|| colStart>colEnd)return NULL;
    

    int isleaf=true;
    int x=grid[rowStart][colStart];
    for(int i=rowStart;i<=rowEnd;i++)
    {
        for(int j=colStart;j<=colEnd;j++)
        {
          if(grid[i][j]!=x)
          {
              isleaf=false;
              break;
          }
        }
        if(!isleaf)break;
    }
    if(isleaf)
    {
        return new Node(x,true);
    }
    int rowMid=(rowStart+rowEnd)/2;int colMid=(colStart+colEnd)/2;
    
     Node* topleft = f(grid, rowStart, rowMid, colStart, colMid);
        Node* topright = f(grid, rowStart, rowMid, colMid+1, colEnd);
        Node* bottomleft = f(grid, rowMid+1, rowEnd, colStart, colMid);
        Node* bottomright = f(grid, rowMid+1, rowEnd, colMid+1, colEnd);
    
    /*
    Node *topleft=f(grid,sr,midr,sc,midc);
    Node *topright=f(grid,sr,midr,midc+1,ec);
    Node *bottomleft=f(grid,midr+1,er,sc,midc);
    Node *bottomright=f(grid,midr+1,er,midc+1,ec);
    */
    return new Node(false, false, topleft, topright, bottomleft, bottomright);
}
    Node* construct(vector<vector<int>>& grid) {
        return f(grid,0,grid.size()-1,0,grid[0].size()-1);
    }
};