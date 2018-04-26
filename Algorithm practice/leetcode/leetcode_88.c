//
//  leetcode_88.c
//  Algorithm practice
//
//  Created by Howard on 2018/4/26.
//  Copyright © 2018年 Howard. All rights reserved.
//

#include "leetcode_88.h"
void merge_88(int* nums1, int m, int* nums2, int n) {
    int i=m-1,j=n-1,tag=m+n-1;
    int ii;
    
    while(i!=-1&&j!=-1)
    {
        if(nums1[i]>nums2[j])
        {
            nums1[tag]=nums1[i];
            tag--;
            i--;
        }
        else
        {
            nums1[tag]=nums2[j];
            tag--;
            j--;
        }
    }
    if(i==-1)
        for(ii=0;ii<=j;ii++)
            nums1[ii]=nums2[ii];
}
