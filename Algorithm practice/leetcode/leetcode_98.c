//
//  leetcode_98.c
//  Algorithm practice
//
//  Created by Howard on 2018/4/24.
//  Copyright © 2018年 Howard. All rights reserved.
//

#include "leetcode_98.h"
#include "stdbool.h"

bool judge_98(struct TreeNode* root,long long *data)
{
    if(root==NULL)
        return true;
    
    if(root->left!=NULL)
    {
        if(judge_98(root->left,data)==false)
            return false;
    }
    if(root->val>*data)
        *data=root->val;
    else
        return false;
    if(root->right!=NULL)
    {
        if(judge_98(root->right,data)==false)
            return false;
    }
    return true;
}

bool isValidBST(struct TreeNode* root) {
    long long data=-214748364800;
    return judge_98(root,&data);
}
