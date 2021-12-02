# binary_trees
In computer science, a binary tree is a tree data structure in which each node has at most two children,
which are referred to as the left child and the right child. A recursive definition using just set theory
notions is that a (non-empty) binary tree is a tuple (L, S, R), where L and R are binary trees or the empty
set and S is a singleton set containing the root

## Basic Binary Tree
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```
## Binary Search Tree
``` typedef struct binary_tree_s bst_t; ```
## AVL Tree
``` typedef struct binary_tree_s avl_t; ```
## Max Binary Heap
``` typedef struct binary_tree_s heap_t; ```
