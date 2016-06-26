//
//  Search2DMatrixII.h
//  BaiduPhoneInterview
//
//  Created by Jerome on 6/25/16.
//  Copyright © 2016 Jerome. All rights reserved.
//

#ifndef Search2DMatrixII_h
#define Search2DMatrixII_h

#include "DataStructure.h"

using namespace std;

bool searchMatrixII(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    if (m==0) return false;
    int n = matrix[0].size();
    int i = 0, j = n-1;
    while(i<m && j>=0) {
        if (matrix[i][j]==target) return true;
        if (matrix[i][j]<target) i++;
        else j--;
    }
    
    return false;
}

#endif /* Search2DMatrixII_h */
