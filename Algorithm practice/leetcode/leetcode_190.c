//
//  leetcode_190.c
//  Algorithm practice
//
//  Created by Howard on 2018/5/10.
//  Copyright © 2018年 Howard. All rights reserved.
//

#include "leetcode_190.h"

int hammingWeight(uint32_t n) {
    int count=0;
    while(n>0)
    {
        n&=(n-1);
        count++;
    }
    return count;
}

uint32_t reverseBits(uint32_t n) {
    int count=hammingWeight(n);
    int i,temp;
    uint32_t result=0;
    for(i=0;i<count;i++)
    {
        temp=n&(n-1);
        result|=(1<<(31-hammingWeight(n-temp-1)));
        n=temp;
    }
    return result;
}
