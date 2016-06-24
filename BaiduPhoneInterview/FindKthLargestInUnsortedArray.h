//
//  FindKthLargestInUnsortedArray.h
//  BaiduPhoneInterview
//
//  Created by Jerome on 6/24/16.
//  Copyright © 2016 Jerome. All rights reserved.
//

#ifndef FindKthLargestInUnsortedArray_h
#define FindKthLargestInUnsortedArray_h

#include "DataStructure.h"

using namespace std;


int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>> mypq(nums.begin(), nums.end());
    while(--k>0) {
        mypq.pop();
    }
    return mypq.top();
}

#endif /* FindKthLargestInUnsortedArray_h */
