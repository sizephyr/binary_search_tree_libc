//////////////////////////////////////////////
// Created by GrafskyZik on 12/16/22.////////
////////////////////////////////////////////
#include "bstree_libc.h"

t_bstree *bstree_get_node(t_bstree *bstree, int data){
	t_bstree *ret_node = bstree;

	while (ret_node && (ret_node->data != data)){
		if (ret_node->data > data)
			ret_node = ret_node->left;
		else
			ret_node = ret_node->right;
	}
	return ret_node;
}