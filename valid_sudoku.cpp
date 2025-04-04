class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
                            map<int, int> a[9],c[9], b[9];
            
                    for(int i=0; i<9; i++) {
                        for(int j=0; j<9; j++) {
                            if(board[i][j] == '.') { 
                                continue;
                            }
                            int x = board[i][j] - '0';
                            int k = (i/3)*3 + (j/3);
                            a[i][x]++;
                            c[j][x]++;
                            b[k][x]++;
            
                            if(a[i][x] > 1 || c[j][x] > 1 || b[k][x] > 1) {
                                return false;
                            }
                        }
                    }
                    return true;
                }
};
