//
//  main.cpp
//  BaiduPhoneInterview
//
//  Created by Jerome on 6/24/16.
//  Copyright © 2016 Jerome. All rights reserved.
//

#include <iostream>

#include "DataStructure.h"

#include "ReverseWords.h"

int main(int argc, const char * argv[]) {
    
    string s = "the sky is blue";
    
    char * str = (char *)malloc(s.length() * sizeof(char));
    
    for (int i = 0; i < s.length(); i++) {
        str[i] = s[i];
    }
    
    reverseWordsPureC(str);
    
    std::cout <<str << std::endl;
    
    return 0;
}
