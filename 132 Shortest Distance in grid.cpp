// TC : O(N*M)
// SC : O(M*N)

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int shortestDistance(vector<vector<int>>& grid, pair<int, int> start, pair<int, int> end) {
        int rows = grid.size();
        int col = grid[0].size();
        
        vector<vector<int>> distance(rows,vector<int> (col,INT_MAX));
        distance[start.first][start.second] = 0;
        queue<pair<int,pair<int,int>>> p;
        p.push({0,{start.first,start.second}});
        
        while(!p.empty()){
            int i = p.front().second.first;
            int j = p.front().second.second;
            int d = p.front().first;
            p.pop();
        
            // top 
            if(i > 0 && grid[i-1][j] == 1 && distance[i-1][j] > d + 1){
                distance[i-1][j] = d + 1;
                p.push({distance[i-1][j],{i-1,j}});
            }
            
            //bottom
            if(i+1 < rows && grid[i+1][j] == 1 && distance[i+1][j] > d + 1){
                distance[i+1][j] = d + 1;
                p.push({distance[i+1][j],{i+1,j}});
            }
            
            //left
            if(j > 0 && grid[i][j-1] == 1 && distance[i][j-1] > d + 1){
                distance[i][j-1] = d + 1;
                p.push({distance[i][j-1],{i,j-1}});
            }
            
            //right
            if(j+1 < col && grid[i][j+1] == 1 && distance[i][j+1] > d + 1){
                distance[i][j+1] = d + 1;
                p.push({distance[i][j+1],{i,j+1}});
            }
            
            // If the destination is reached return that distance
            if(i == end.first && j == end.second) return d;
        }
        return -1;
    }
};





// Without stl function
#include <iostream>
using namespace std;
#define max 9999

template<typename T1,typename T2>
struct Pair{
    T1 first;
    T2 second;
    Pair(const T1 &f,const T2 &s):  first(f),second(s){}
};

template<typename VAL>
class queue{
    private:
        struct Node{
            VAL val;
            Node* next;
            Node(const VAL &v): val(v),next(nullptr){}
        };

        Node* frnt;
        Node* rear;
        int _size;

    public:
        queue(): frnt(nullptr),rear(nullptr),_size(0){}

        void push(const VAL &v){
            Node* newnode = new Node(v);
            if(rear == nullptr){
                frnt = rear = newnode;
            }
            else{
                rear->next = newnode;
                rear = newnode;
            }
            _size++;
        }

        VAL& front() const{
            if(rear == nullptr) throw out_of_range("Empty");
            return frnt->val;
        }

        void pop(){
            if(frnt == nullptr) throw out_of_range("Empty");

            Node* temp = frnt;
            frnt = frnt->next;
            delete temp;
            _size--;
            
            if(frnt == nullptr) rear = nullptr;               // if front null means we shoud update the rear
        }       

        int size() const{
            return _size;
        }
        bool empty() const{
            return _size == 0;
        }     
};


int shortestDistance(int** grid,int r,int c,int x1,int y1,int x2, int y2){
    int distance[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) distance[i][j] = max;
    }
    distance[x1][y1] = 0;    
    queue<Pair<int,Pair<int,int>>> q;
    q.push({0,{x1,y1}});
    
    while(!q.empty()){
        int i = q.front().second.first;
        int j = q.front().second.second;
        int d = q.front().first;
        q.pop();
        
        // top
        if(i > 0 && grid[i-1][j] == 1 && distance[i-1][j] > d + 1){
            distance[i-1][j] = d+1;
            q.push({distance[i-1][j],{i-1,j}});
        }
        
        //bottom
        if(i+1 < r && grid[i+1][j] == 1 && distance[i+1][j] > d + 1){
            distance[i+1][j] = d + 1;
            q.push({distance[i+1][j],{i+1,j}});
        }
            
        //left
        if(j > 0 && grid[i][j-1] == 1 && distance[i][j-1] > d + 1){
            distance[i][j-1] = d + 1;
            q.push({distance[i][j-1],{i,j-1}});
        }
            
        //right
        if(j+1 < c && grid[i][j+1] == 1 && distance[i][j+1] > d + 1){
            distance[i][j+1] = d + 1;
            q.push({distance[i][j+1],{i,j+1}});
        }
        
        if(i == x2 && j == y2) return d;
    }
    return -1;

}

int main()
{
    int r,c;
    cin >> r >> c;
    int x1,y1,x2,y2;
    
    int**grid = new int*[r];
    
    for(int i=0;i<r;i++){
        grid[i] = new int[c];
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cin >> grid[i][j];
    }
    
    cin >> x1 >> y1 >> x2 >> y2;
    int ans = shortestDistance(grid,r,c,x1,y1,x2,y2);
    cout << ans;
    
    for (int i = 0; i < r; i++) {
        delete[] grid[i];
    }
    delete[] grid;
    return 0;   
}
