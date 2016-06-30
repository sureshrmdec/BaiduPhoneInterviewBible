//
//  ShortestWordDistance.h
//  BaiduPhoneInterview
//
//  Created by Jerome on 6/30/16.
//  Copyright © 2016 Jerome. All rights reserved.
//

#ifndef ShortestWordDistance_h
#define ShortestWordDistance_h

#include "DataStructure.h"

using namespace std;

int shortestDistance(vector<string>& words, string word1, string word2) {
    int idx1 = -1, idx2 = -1;
    int result = words.size()-1;
    for (int i = 0; i < words.size(); i++) {
        if (words[i]==word1) idx1 = i;
        else if (words[i]==word2) idx2 = i;
        if (idx1>=0 && idx2>=0) result = min(result, abs(idx1-idx2));
    }
    return result;
}

class WordDistance {
public:
    WordDistance(vector<string>& words) {
        for (size_t i = 0; i < words.size(); i++) {
            wordmap[words[i]].push_back(i);
        }
    }
    
    int shortest(string word1, string word2) {
        int idx1 = 0, idx2 = 0;
        int result = INT_MAX;
        while(idx1<wordmap[word1].size() && idx2<wordmap[word2].size()) {
            result = min(result, abs(wordmap[word1][idx1]-wordmap[word2][idx2]));
            if (wordmap[word1][idx1] < wordmap[word2][idx2]) idx1++;
            else idx2++;
        }
        return result;
    }
    
    unordered_map<string, vector<int>> wordmap;
};

#endif /* ShortestWordDistance_h */
