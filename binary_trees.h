#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdlib.h>
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
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/** Function Prototypes **/
void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
int binary_tree_is_leaf(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
int binary_tree_is_bst(const binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
int binary_tree_is_bst(const binary_tree_t *tree);
bst_t *bst_remove(bst_t *root, int value);
int binary_tree_is_avl(const binary_tree_t *tree);
avl_t *array_to_avl(int *array, size_t size);
avl_t *sorted_array_to_avl(int *array, size_t size);
int binary_tree_is_heap(const binary_tree_t *tree);
int *heap_to_sorted_array(heap_t *heap, size_t *size);

#endif
