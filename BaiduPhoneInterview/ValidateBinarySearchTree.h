//
//  ValidateBinarySearchTree.h
//  BaiduPhoneInterview
//
//  Created by Jerome on 6/24/16.
//  Copyright © 2016 Jerome. All rights reserved.
//

#ifndef ValidateBinarySearchTree_h
#define ValidateBinarySearchTree_h

#include "DataStructure.h"

using namespace std;

bool checkNode(TreeNode * node, long maxval, long minval) {
    if (node->val <= minval || node->val >= maxval) return false;
    bool leftValid = true, rightValid = true;
    if (node->left) leftValid = checkNode(node->left, node->val, minval);
    if (node->right) rightValid = checkNode(node->right, maxval, node->val);
    return leftValid && rightValid;
}

bool isValidBST(TreeNode* root) {
    if (root==nullptr) return true;
    bool leftValid = true, rightValid = true;
    if (root->left) leftValid = checkNode(root->left, static_cast<long>(root->val), static_cast<long>(INT_MIN)-1);
    if (root->right) rightValid = checkNode(root->right, static_cast<long>(INT_MAX)+1, root->val);
    return leftValid && rightValid;
}


#endif /* ValidateBinarySearchTree_h */
