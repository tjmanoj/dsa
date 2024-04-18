// TC  : O(mn)
// SC  : O(nm)

#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void dfs(int i, int j, vector<vector<int>> &image,int old, int newColor, int row, int col){
        image[i][j] = newColor;
        // top
        if(i > 0 && image[i-1][j] == old) dfs(i-1,j,image,old,newColor,row,col);
        
        //bottom
        if(i+1 < row && image[i+1][j] == old) dfs(i+1,j,image,old,newColor,row,col);
        
        //left
        if(j > 0 && image[i][j-1] == old) dfs(i,j-1,image,old,newColor,row,col);
        
        //right
        if(j+1 < col && image[i][j+1] == old) dfs(i,j+1,image,old,newColor,row,col); 
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int r, int c,int newColor){
        int old_color = image[r][c];
        if(old_color == newColor) return image;
        int row = image.size();
        int col = image[0].size();
        dfs(r,c,image,old_color,newColor,row,col);
        return image;
    }
};
