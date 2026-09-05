class Solution {
public:

    int m,n;

    bool recurse(vector<vector<char>>& board, string word, int i, int j, int x ) {

        if(x == word.size()) {
            return true;
        }

        if(i<0  ||  j<0  ||  i>=m ||  j>=n ) {
            return false;
        }

        if(board[i][j]!=word[x]) { 
            return false;
        }

        char p = board[i][j];

        board[i][j] = '0';

        if(recurse(board,word,i+1,j,x+1)) {
            return true;
        }

        if(recurse(board,word,i-1,j,x+1)) {
           return true;
        }

        if(recurse(board,word,i,j+1,x+1)) {
            return true;
        }

        if(recurse(board,word,i,j-1,x+1)) {
            return true;
        }

        board[i][j]=p;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {

    
    m = board.size();
    n = board[0].size();


    for(int i = 0; i<m; i++) {
        for(int j = 0; j<n; j++) {
            if(recurse(board,word,i,j,0)) {
                return true;
            }
        }
    }
    
    return false;

    }
};

