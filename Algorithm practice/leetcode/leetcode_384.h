//
//  leetcode_384.h
//  Algorithm practice
//
//  Created by Howard on 2018/4/28.
//  Copyright © 2018年 Howard. All rights reserved.
//

#ifndef leetcode_384_h
#define leetcode_384_h

#include <stdio.h>
typedef struct {
    int *data;
    int *origin;
    int size;
} Solution;

Solution* solutionCreate(int* nums, int size);
int* solutionShuffle(Solution* obj, int *returnSize);

#endif /* leetcode_384_h */
