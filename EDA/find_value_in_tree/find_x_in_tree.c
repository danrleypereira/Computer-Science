#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
	int value;
	struct no *left, *right;
	struct no *parent;
} tree_type;

tree_type *insert(tree_type *t, int value);
tree_type *Tree(int value, tree_type *left, tree_type *right, tree_type *parent);
tree_type *popular_arvore();
void print(tree_type *t);

// se x for a raiz devolver NULL, se x não pertence a árvore devolver NULL
tree_type *get_parent_of_x(tree_type *tree_root, int x)
{
	if (tree_root->value == x)
	{
		if (tree_root->parent == NULL)
		{
			return NULL;
		}
		return tree_root->parent;
	}
	else if (tree_root->left != NULL)
	{
		return get_parent_of_x(tree_root->left, x);
	}
	else if (tree_root->right != NULL)
	{
		return get_parent_of_x(tree_root->right, x);
	}
	else
	{
		return NULL;
	}
}

int main()
{
	tree_type *instantiated_tree = popular_arvore();
	print(instantiated_tree);
	printf("%p, ", get_parent_of_x(instantiated_tree, 6));
	return 0;
}

tree_type *insert(tree_type *t, int value)
{
	if (t == NULL)
		return Tree(value, NULL, NULL, NULL);
	if (t->right == NULL)
	{
		t->right = insert(t->right, value);
		t->right->parent = t;
	}
	else
	{
		t->left = insert(t->left, value);
		t->left->parent = t;
	}
	return t;
}

void print(tree_type *t)
{
	if (t != NULL)
	{
		printf("%p, ", t);
		printf("%d, ", t->value);
		print(t->left);
		print(t->right);
	}
}

tree_type *Tree(int value, tree_type *left, tree_type *right, tree_type *parent)
{
	tree_type *new = malloc(sizeof(tree_type));
	new->value = value;
	new->left = left;
	new->right = right;
	new->parent = parent;
	return new;
}

tree_type *popular_arvore()
{
	tree_type *instantiated_tree = NULL;
	instantiated_tree = insert(instantiated_tree, 4);
	instantiated_tree = insert(instantiated_tree, 2);
	instantiated_tree = insert(instantiated_tree, 6);
	instantiated_tree = insert(instantiated_tree, 1);
	instantiated_tree = insert(instantiated_tree, 3);
	instantiated_tree = insert(instantiated_tree, 5);
	instantiated_tree = insert(instantiated_tree, 7);
	return instantiated_tree;
}