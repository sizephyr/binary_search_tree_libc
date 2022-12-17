//////////////////////////////////////////////
// Created by GrafskyZik on 12/16/22.////////
////////////////////////////////////////////
#ifndef BSTREE_LIBC_H
#define BSTREE_LIBC_H

#include <stdlib.h>

typedef struct s_bstree{
	int				data;
	struct s_bstree	*left;
	struct s_bstree	*right;
} t_bstree;

t_bstree	*bstree_new_node(int data);
t_bstree	*bstree_get_node(t_bstree *bstree, int data);
void		bstree_add_node(t_bstree **bstree, t_bstree *node);


#endif //BSTREE_LIBC_H
