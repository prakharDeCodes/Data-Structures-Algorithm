class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int m= grid.size();

        int n= grid[0].size();





        queue < pair<int,int> > q;
        int fresh=0;


        for(int i=0; i<m; i++){

            for(int j=0; j<n; j++){

                if(grid[i][j] == 2){

                    q.push({i,j});


                }

                else if(grid[i][j]==1){

                    fresh++;

                }
            }
        }

        int minutes=0;

        

        while(!q.empty() && fresh > 0){

            int size = q.size();

            for (int i =0; i<size;i++){

                auto[x,y] = q.front();
                q.pop();

            

                

                if(x-1>=0 && grid[x-1][y]==1){

                    grid[x-1][y] = 2;

                    fresh--;
                    q.push({x-1,y});
                }


                if(x+1<m && grid[x+1][y] ==1){

                    grid[x+1][y]=2;

                    fresh--;

                    q.push({x+1,y});

                }

                if(y-1>=0 && grid[x][y-1]==1){

                    grid[x][y-1]=2;

                    fresh--;

                    q.push({x,y-1});

                }

                if(y+1<n && grid[x][y+1]==1){

                    grid[x][y+1]=2;

                    fresh--;
                    q.push({x,y+1});
                }


            }

            minutes++;


        }
        
        if(fresh>0){

            return -1;
        }

        return minutes;




        
    
        
    }
};