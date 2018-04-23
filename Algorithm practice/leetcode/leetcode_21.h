//
//  leetcode_21.h
//  Algorithm practice
//
//  Created by Howard on 2018/4/23.
//  Copyright © 2018年 Howard. All rights reserved.
//

#ifndef leetcode_21_h
#define leetcode_21_h

#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE;

void create_list(NODE *head);
void output_list(NODE *head);
void merge_list(NODE *head,NODE *list_1,NODE *list_2);

#endif /* leetcode_21_h */
