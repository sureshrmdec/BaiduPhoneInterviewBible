//
//  WordSearch.h
//  BaiduPhoneInterview
//
//  Created by Jerome on 6/24/16.
//  Copyright © 2016 Jerome. All rights reserved.
//

#ifndef WordSearch_h
#define WordSearch_h

#include "DataStructure.h"

using namespace std;

bool existHelper(vector<vector<char>> & board, vector<vector<bool>> & visited, int i, int j, int m, int n, string word, int pos) {
    if (pos==word.length()-1) return true;
    vector<pair<int,int>> directions{{-1,0},{1,0},{0,1}, {0,-1}};
    for (auto d : directions) {
        int x = i + d.first;
        int y = j + d.second;
        if (x>=0 && x<m && y>=0 && y<n && !visited[x][y] && board[x][y]==word[pos+1]) {
            visited[x][y] = true;
            bool curr = existHelper(board, visited, x, y, m, n, word, pos+1);
            if (curr) return true;
            else visited[x][y] = false;
        }
    }
    
    return false;
}

bool exist(vector<vector<char>>& board, string word) {
    if (word.length()==0) return false;
    int m = board.size();
    if (m==0) return false;
    int n = board[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j]==word[0]) {
                visited[i][j] = true;
                bool curr = existHelper(board, visited, i, j, m, n, word, 0);
                if (curr) return true;
                else visited[i][j] = false;
            }
        }
    }
    
    return false;
}



#endif /* WordSearch_h */
