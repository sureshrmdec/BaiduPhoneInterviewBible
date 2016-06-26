//
//  PrintDiagnolMatrix.h
//  BaiduPhoneInterview
//
//  Created by Jerome on 6/26/16.
//  Copyright © 2016 Jerome. All rights reserved.
//

#ifndef PrintDiagnolMatrix_h
#define PrintDiagnolMatrix_h

#include "DataStructure.h"

using namespace std;

void PrintDiagonalMatrix(vector<vector<int>> & matrix) {
    int m = static_cast<int>(matrix.size());
    int n = static_cast<int>(matrix[0].size());
    for (int i = 0; i < m; i++) {
        int y = 0;
        int x = i;
        while(x>=0 && y<n) {
            std::cout << matrix[x--][y++] << " ";
        }
        std::cout << std::endl;
    }
    for (int j = 1; j < n; j++) {
        int y = j;
        int x = m-1;
        while(x>=0 && y<n) {
            std::cout << matrix[x--][y++] << " ";
        }
        std::cout << std::endl;
    }
}

#endif /* PrintDiagnolMatrix_h */
