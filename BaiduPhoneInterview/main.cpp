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
    
    MyVector<int> mv;
    for (int i = 0; i < 10; i++) mv.push_back(i);
    {
        MyVector<int> B;
        B = mv;
    }
    
    return 0;

}
