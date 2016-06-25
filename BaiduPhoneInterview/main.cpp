//
//  main.cpp
//  BaiduPhoneInterview
//
//  Created by Jerome on 6/24/16.
//  Copyright © 2016 Jerome. All rights reserved.
//

#include <iostream>

#include "DataStructure.h"

#include "MyVector.h"

int main(int argc, const char * argv[]) {
    
    MyVector<int> x;
    x.push_back(1);
    x.push_back(2);
    x.push_back(3);
    x.push_back(4);
    x.push_back(5);
    
    std::cout << x.size() << std::endl;
    std::cout << x.capacity() << std::endl;
    
    for (int i = 0; i < x.size(); i++) {
        std::cout << x[i] << std::endl;
    }
    
    return 0;
}
