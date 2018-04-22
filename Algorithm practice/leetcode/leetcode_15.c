//
//  leetcode_15.c
//  Algorithm practice
//
//  Created by Howard on 2018/4/21.
//  Copyright © 2018年 Howard. All rights reserved.
//

// 311 / 313 个通过测试用例

#include "leetcode_15.h"
#include "stdlib.h"

void quickSort(int array[],int left,int right)
{
    if(left>=right)
        return;
    
    int i=left;
    int j=right;
    int key=array[left];
    
    while(i<j)
    {
        while(i<j&&key<=array[j])
            j--;
        array[i]=array[j];
        while(i<j&&key>=array[i])
            i++;
        array[j]=array[i];
    }
    array[i]=key;
    
    quickSort(array,left,i-1);
    quickSort(array,i+1,right);
}

int** threeSum(int* nums, int numsSize, int* returnSize) {
    int i,j,k,temp,tempp;
    int count=0;
    int** data;
    data=(int **)malloc(sizeof(int **)*5000);
    
    quickSort(nums,0,numsSize-1);
    
    for(tempp=0;tempp<numsSize;tempp++)
    {
        if(nums[tempp]>=0)
            break;
    }
    
    for(i=0;i<numsSize-2;i++)
        for(j=i+1;j<numsSize-1;j++)
            for(k=tempp>j+1?tempp:j+1;k<numsSize;k++)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    if(count==0)
                    {
                    data[count]=(int*)malloc(sizeof(int)*3);
                    data[count][0]=nums[i];
                    data[count][1]=nums[j];
                    data[count][2]=nums[k];
                    count++;
                    }
                    else
                    {
                        for(temp=0;temp<count;temp++)
                            if(data[temp][0]==nums[i]&&data[temp][1]==nums[j])
                            {
                                break;
                            }
                        if(temp==count)
                        {
                            data[count]=(int*)malloc(sizeof(int)*3);
                            data[count][0]=nums[i];
                            data[count][1]=nums[j];
                            data[count][2]=nums[k];
                            count++;
                        }
                    }
                }
            }
    
    *returnSize=count;
    return data;
}
