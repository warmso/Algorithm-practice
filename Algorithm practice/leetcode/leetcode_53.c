//
//  leetcode_53.c
//  Algorithm practice
//
//  Created by Howard on 2018/4/26.
//  Copyright © 2018年 Howard. All rights reserved.
//

#include "leetcode_53.h"
int maxSubArray(int* nums, int numsSize) {
    
    int max,sum;
    int i,j;
    max=nums[0];
    for(i=0;i<numsSize;i++)
    {
        sum=nums[i];
        if(sum>max)
            max=sum;
        for(j=i+1;j<numsSize;j++)
        {
            if(sum>max)
                max=sum;
            sum+=nums[j];
            if(sum>max)
                max=sum;
        }
        
    }
    return max;
    
}
