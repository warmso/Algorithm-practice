//
//  leetcode_350.c
//  Algorithm practice
//
//  Created by Howard on 2018/4/22.
//  Copyright © 2018年 Howard. All rights reserved.
//


#include "stdlib.h"
#include "leetcode_350.h"

void quickSort_350(int array[],int left,int right)
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
    
    quickSort_350(array,left,i-1);
    quickSort_350(array,i+1,right);
}

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *data;
    int i=0,j=0;
    int count=0;
    
    // data=(int *)malloc(sizeof(int)*(nums1Size>nums2Size?nums2Size:nums1Size));
    data=(int*)malloc(sizeof(int)*50);
    quickSort_350(nums1,0,nums1Size-1);
    quickSort_350(nums2,0,nums2Size-1);
    
    while(i<nums1Size&&j<nums2Size)
    {
        if(nums1[i]==nums2[j])
        {
            data[count]=nums1[i];
            i=i+1<=nums1Size?i+1:i;
            j=j+1<=nums2Size?j+1:j;
            count++;
            continue;
        }
        if(nums1[i]>nums2[j])
        {
            j=(j+1<=nums2Size?j+1:(i++,j));
            continue;
        }
        if(nums1[i]<nums2[j])
        {
            i=(i+1<=nums1Size?i+1:(j++,i));
            continue;
        }
    }
    *returnSize=count;
    return data;
}
