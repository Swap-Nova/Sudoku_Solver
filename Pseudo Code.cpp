bool isSafe(int row,int col, vector<vector<int>>&board,int val)
{
    // checking all the conditions as said in the problem statement 
    for(int i=0;i<board.size();i++){
        // first let's begin with checking the row
        if(board[row][i]==val){
            return false;
        }
        // then checking the column
        if(board[i][col]==val){
            return false;
        }
        // checking our 3x3 matrix
        if(board[3*(row/3)+(i/3)][3*(col/3)+i%3] == val){
            return false;
        }
    }
    return true;
}

bool solve(vector<vector<int>>&board)
{
    int n=board[0].size();
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){

            // checking whether the cell is empty or not
            if(board[row][column]==0){
                for(int val=1;val<=9;val++)
                {
                    if(isSafe(row,col,val))
                    {
                        board[row][col]=val;

                        // we will get this bool by doing a recurssive call
                        bool furtherSolutionPossible = solve(board);
                        if(furtherSolutionPossible){
                            return true;
                        }
                        else{
                            // we will have to perform backtracking
                            board[row][col]=0; 
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void solveSudoku(vector<vector<int>>&sudoku) {
    solve(sudoku);
}