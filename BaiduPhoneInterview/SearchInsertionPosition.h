//
//  SearchInsertionPosition.h
//  BaiduPhoneInterview
//
//  Created by Jerome on 6/26/16.
//  Copyright © 2016 Jerome. All rights reserved.
//

#ifndef SearchInsertionPosition_h
#define SearchInsertionPosition_h

#include "DataStructure.h"

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    auto it = lower_bound(nums.begin(), nums.end(), target);
    return it-nums.begin();
}


int searchInsertBS(vector<int>& nums, int target) {
    int left = 0, right = nums.size()-1;
    while(left<right) {
        int mid = left + (right-left)/2;
        if (target==nums[mid]) return mid;
        if (target < nums[mid]) right = mid;
        else if (target > nums[mid]) left = mid+1;
    }
    if (target>nums.back()) return nums.size();
    return left;
}

#endif /* SearchInsertionPosition_h */
