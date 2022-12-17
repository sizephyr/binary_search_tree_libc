//////////////////////////////////////////////
// Created by GrafskyZik on 12/16/22.////////
////////////////////////////////////////////
#include "bstree_libc.h"

void bstree_add_node(t_bstree **bstree, t_bstree *node){
	t_bstree *bstree_node = *bstree;

	if (!bstree_node)
		*bstree = node;
	else
		while (bstree_node->data != node->data){
			if (node->data > bstree_node->data)
				bstree_node->right ? (bstree_node = bstree_node->right) : (bstree_node->right = node);
			if (node->data < bstree_node->data)
				bstree_node->left ? (bstree_node = bstree_node->left) : (bstree_node->left = node);
		}
}