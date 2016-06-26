//
//  ReverseWords.h
//  BaiduPhoneInterview
//
//  Created by Jerome on 6/26/16.
//  Copyright © 2016 Jerome. All rights reserved.
//

#ifndef ReverseWords_h
#define ReverseWords_h

#include "DataStructure.h"

using namespace std;

void reverseWords(string &s) {
    reverse(s.begin(), s.end());
    int pos = 0, start = 0;
    while(pos < s.length()) {
        while(pos<s.length() && s[pos]==' ') pos++;
        if (pos>=s.length()) break;
        int startpos = start;
        while(pos<s.length() && s[pos]!=' ') s[start++]=s[pos++];
        reverse(s.begin()+startpos, s.begin()+start);
        s[start] = ' ';
        start++;
    }
    s = s.substr(0, max(0, start-1));
    return;
}

void reverseString(char * sbegin, char * send) {
    char temp;
    while(sbegin < send) {
        temp = *sbegin;
        *sbegin = *send;
        *send = temp;
        sbegin++;
        send--;
    }
    return;
}


void reverseWordsPureC(char * s) {
    unsigned long N = strlen(s);
    reverseString(s, s+N-1);
    int start = 0;
    int i = 0;
    while(i<N) {
        while(i<N && s[i]==' ') i++;
        if (i>=N) break;
        int startpos = start;
        while(i<N && s[i]!=' ') s[start++] = s[i++];
        reverseString(s+startpos, s+start-1);
        s[start] = ' ';
        start++;
    }
    if (start==0) { s[0]='\0'; return; }
    s[start-1] = '\0';
    return;
}

#endif /* ReverseWords_h */
