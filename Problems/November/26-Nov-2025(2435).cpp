#include <iostream>
#include <vector>
using namespace std;
int M = 1e9 + 7; // M is the modulo for the final answer.
// t[row][col][currSum] is DP memo:
// It stores: “Number of valid paths from (row, col) to end when the remainder so far is currSum.”
vector<vector<vector<int>>> t; // only for memoization

int solve(int row, int col, int currSum, vector<vector<int>> &grid, int k)
{
    int m = grid.size();
    int n = grid[0].size();
    // row, col → current position in grid
    // currSum → remainder (mod k) of the sum of all cells visited before this cell
    // m, n → grid dimensions

    if (row >= m || col >= n) // Base case 1:If you go outside the grid → no valid path → return 0.
    {
        return 0;
    }
    if (row == m - 1 && col == n - 1) // Base case 2: Reached bottom-right cell
        return ((currSum + grid[row][col]) % k == 0);
    if (t[row][col][currSum] != -1)
        return t[row][col][currSum];
    int newcurrSum = (currSum + grid[row][col]) % k;
    int down = solve(row + 1, col, newcurrSum, grid, k);
    int right = solve(row, col + 1, newcurrSum, grid, k);

    return t[row][col][currSum] = (down + right) % M;
}

int numberOfPaths(vector<vector<int>> &grid, int k)
{
    int m = grid.size();
    int n = grid[0].size();
    t.assign(m, vector<vector<int>>(n, vector<int>(k, -1)));
    return solve(0, 0, 0, grid, k);
}

int main()
{
    vector<vector<int>> grid = {{5, 2, 4}, {3, 0, 5}, {0, 7, 2}};
    int k = 3;
    int result = numberOfPaths(grid, k);
    cout << "The number of paths with sum divisible by " << k << " is: " << result << endl;
    return 0;
}