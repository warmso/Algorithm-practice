//
//  leetcode_98.h
//  Algorithm practice
//
//  Created by Howard on 2018/4/24.
//  Copyright © 2018年 Howard. All rights reserved.
//

#ifndef leetcode_98_h
#define leetcode_98_h

#include <stdio.h>
#define bool _Bool

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
bool isValidBST(struct TreeNode* root);
#endif /* leetcode_98_h */
