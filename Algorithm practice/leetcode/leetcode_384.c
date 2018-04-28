//
//  leetcode_384.c
//  Algorithm practice
//
//  Created by Howard on 2018/4/28.
//  Copyright © 2018年 Howard. All rights reserved.
//

#include "leetcode_384.h"
#include <time.h>
#include <stdlib.h>



Solution* solutionCreate(int* nums, int size) {
    Solution *obj=(Solution *)malloc(sizeof(Solution));
    int i;
    obj->data=(int*) malloc(sizeof(int)*size);
    obj->origin=(int*)malloc(sizeof(int)*size);
    for(i=0;i<size;i++)
    {
        obj->data[i]=nums[i];
        obj->origin[i]=nums[i];
    }
    obj->size=size;
    return obj;
}

/** Resets the array to its original configuration and return it. */
int* solutionReset(Solution* obj, int *returnSize) {
    int i;
    for(i=0;i<obj->size;i++)
    {
        obj->data[i]=obj->origin[i];
    }
    *returnSize=obj->size;
    return obj->data;
}

/** Returns a random shuffling of the array. */
int* solutionShuffle(Solution* obj, int *returnSize) {
    int i,j,temp;
    srand((unsigned) time(0));
    
    i=rand()%obj->size;
    j=rand()%obj->size;
    temp=obj->data[i];
    obj->data[i]=obj->data[j];
    obj->data[j]=temp;
    
    *returnSize=obj->size;
    return obj->data;
}

void solutionFree(Solution* obj) {
    free(obj->data);
    free(obj->origin);
}
