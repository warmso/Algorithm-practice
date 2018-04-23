//
//  leetcode_104.h
//  Algorithm practice
//
//  Created by Howard on 2018/4/23.
//  Copyright © 2018年 Howard. All rights reserved.
//

#ifndef leetcode_104_h
#define leetcode_104_h

#include <stdio.h>
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    };

int maxDepth(struct TreeNode* root);
#endif /* leetcode_104_h */
