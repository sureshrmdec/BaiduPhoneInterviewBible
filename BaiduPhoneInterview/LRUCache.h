//
//  LRUCache.h
//  BaiduPhoneInterview
//
//  Created by Jerome on 6/24/16.
//  Copyright © 2016 Jerome. All rights reserved.
//

#ifndef LRUCache_h
#define LRUCache_h

#include "DataStructure.h"

using namespace std;

class LRUCache{
public:
    LRUCache(int capacity) {
        maxLength = capacity;
    }
    
    int get(int key) {
        if (keyValue.find(key)==keyValue.end()) return -1;
        int value = keyValue[key];
        auto it = iterMap[key];
        mylist.erase(it);
        iterMap.erase(key);
        mylist.insert(mylist.begin(), make_pair(key,value));
        iterMap[key] = mylist.begin();
        return value;
    }
    
    void set(int key, int value) {
        if (keyValue.find(key)==keyValue.end()) {
            mylist.insert(mylist.begin(), make_pair(key,value));
            if (mylist.size()>maxLength) {
                auto e = mylist.end();
                e--;
                keyValue.erase(e->first);
                iterMap.erase(e->first);
                mylist.erase(e);
            }
            iterMap[key] = mylist.begin();
            keyValue[key] = value;
        }
        else {
            auto it = iterMap[key];
            mylist.erase(it);
            keyValue[key] = value;
            mylist.insert(mylist.begin(), make_pair(key, value));
            iterMap[key] = mylist.begin();
        }
    }
    
    int maxLength;
    
    list<pair<int,int>> mylist;
    unordered_map<int,int> keyValue;
    unordered_map<int, list<pair<int,int>>::iterator> iterMap;
};

#endif /* LRUCache_h */
