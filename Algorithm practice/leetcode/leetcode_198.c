//
//  leetcode_198.c
//  Algorithm practice
//
//  Created by Howard on 2018/4/27.
//  Copyright © 2018年 Howard. All rights reserved.
//

#include "leetcode_198.h"
void judge_198(int nums[],int numsSize,int *max,int tag,int sum)
{
    int tempSum;
    if(tag>=numsSize)
        return ;
    while(tag<numsSize)
    {
        tempSum=sum+nums[tag];
        if(tempSum>*max)
            *max=tempSum;
        if(tag+2<numsSize)
        {
            judge_198(nums,numsSize,max,tag+2,tempSum);
        }
        tag++;
    }
    
}

int rob(int* nums, int numsSize) {
    // int max=nums[0];
    // judge(nums,numsSize,&max,0,0);
    int previous=nums[0];
    int now=previous>nums[1]?previous:nums[1];
    int i,temp;
    for(i=2;i<numsSize;i++)
    {
        temp=now;
        now=(nums[i]+previous>now?nums[i]+previous:now);
        previous=temp;
    }
    return previous>now?previous:now;
}
