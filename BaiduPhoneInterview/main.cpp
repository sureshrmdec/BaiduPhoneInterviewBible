//
//  main.cpp
//  BaiduPhoneInterview
//
//  Created by Jerome on 6/24/16.
//  Copyright © 2016 Jerome. All rights reserved.
//

#include <iostream>

#include "DataStructure.h"

#include "PrintDiagnolMatrix.h"

int main(int argc, const char * argv[]) {
    
    vector<vector<int>> m{{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}, {16,17,18,19,20},{21,22,23,24,25}};
    
    PrintDiagonalMatrix(m);
    
    return 0;
}
