//
//  leetcode_104.c
//  Algorithm practice
//
//  Created by Howard on 2018/4/23.
//  Copyright © 2018年 Howard. All rights reserved.
//

#include "leetcode_104.h"
/*
* Definition for a binary tree node.
* struct TreeNode {
    *     int val;
    *     struct TreeNode *left;
    *     struct TreeNode *right;
    * };
*/

int maxDepth(struct TreeNode* root) {
    if(root==NULL)
        return 0;
    if(maxDepth(root->left)>maxDepth(root->right))
        return maxDepth(root->left)+1;
    else
        return maxDepth(root->right)+1;
}
