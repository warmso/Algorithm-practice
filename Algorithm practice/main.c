//
//  main.c
//  Algorithm practice
//
//  Created by Howard on 2018/4/13.
//  Copyright © 2018年 Howard. All rights reserved.
//

#include <stdio.h>
//#include "LCS.h"
#include "leetcode_384.h"
#include<stdlib.h>

int main(int argc, const char * argv[]) {
    
    int i,j,a[50];
    scanf("%d",&i);
    for (j=0; j<i; j++) {
        scanf("%d",a+j);
    }
    Solution *obj= solutionCreate(a,i);
    solutionShuffle(obj,&i);
    for (j=0; j<i; j++) {
        printf("%d ",obj->data[j]);
    }
    solutionShuffle(obj,&i);
    for (j=0; j<i; j++) {
        printf("%d ",obj->data[j]);
    }
    solutionShuffle(obj,&i);
    for (j=0; j<i; j++) {
        printf("%d ",obj->data[j]);
    }
    return 0;
}

