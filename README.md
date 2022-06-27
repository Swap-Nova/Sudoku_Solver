## Problem Defintion 
We have been given a 9x9 2d integer matrix 'MAT' representing a Sudoku puzzle.
The empty cells of the Sudoku are filled with zeros, and the rest of the cells are
filled with integers from 1 to 9. Your task is to fill all the empty cells such that the
final matrix represents a Sudoku solution.

![image](https://user-images.githubusercontent.com/92979885/175954286-b27ad743-90c3-4fb3-9154-67ff0fdf206c.png)

#### Note
A Sudoku solution must satisfy all the following conditions:
* Each of the digits 1-9 must occur exactly once in each row.
* Each of the digits 1-9 must occur exactly once in each column.
* Each of the digits 1-9 must occur exactly once in each of the 9, 3x3 sub-grids of the grid.

### Backtracking  
Backtracking is a general algorithm for finding all (or some) solutions to a problem
that incrementally builds candidates to the solution. As soon as it determines that a
candidate can not possibly be the solution to the problem, it abandons it
(“backtracks”). We can solve this problem using backtracking.

### N-Queen's Approach
* Start in the leftmost column
* If no field is empty return true
* Try all rows in the current column.
