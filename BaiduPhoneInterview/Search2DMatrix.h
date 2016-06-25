//
//  Search2DMatrix.h
//  BaiduPhoneInterview
//
//  Created by Jerome on 6/25/16.
//  Copyright © 2016 Jerome. All rights reserved.
//

#ifndef Search2DMatrix_h
#define Search2DMatrix_h

#include "DataStructure.h"

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    if (m==0) return false;
    int n = matrix[0].size();
    int i = 0, j = n-1;
    while(j>=0 && i<m) {
        if (target == matrix[i][j]) return true;
        if (target < matrix[i][j]) j--;
        else i++;
    }
    
    return false;
}

#endif /* Search2DMatrix_h */
