//////////////////////////////////////////////
// Created by GrafskyZik on 12/16/22.////////
////////////////////////////////////////////
#include "bstree_libc.h"

t_bstree *bstree_new_node(int data){
	t_bstree *node = malloc(sizeof (*node));

	if (node){
		node->data = data;
		node->left = NULL;
		node->right = NULL;
	}

	return node;
}