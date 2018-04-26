//
//  leetcode_278.c
//  Algorithm practice
//
//  Created by Howard on 2018/4/26.
//  Copyright © 2018年 Howard. All rights reserved.
//

#include "leetcode_278.h"
//2126753390 versions
//1702766719 is the first bad version.
int isBadVersion(long long i)
{
    if(i>=1702766719)
        return 1;
    else
        return 0;
}

long long firstBadVersion(int n) {
    long long i=0,left=1,right=n;
    // judge(1,n,&i);
    while(left<=right)
    {
        if(isBadVersion((left+right)/2))
        {
            i=(left+right)/2;
            right=(left+right)/2-1;
        }
        else
        {
            left=(left+right)/2+1;
        }
    }
    printf("%lld",i);
    return i;
}
