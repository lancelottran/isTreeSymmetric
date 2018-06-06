//
//
// Definition for binary tree:
// typedef struct tree_##name {
//   type value;
//   struct tree_##name *left;
//   struct tree_##name *right;
// } tree_##name;
//
// tree_##name *alloc_tree_##name(type v) {
//   tree_##name *t = calloc(1, sizeof(tree_##name));
//   t->value = v;
//   return t;
// }
// 

bool symCheck(tree_integer * tl, tree_integer * tr){
    if(tl == NULL && tr == NULL)
        return true;
    
    if(tl != NULL && tr != NULL && tl->value == tr->value)
        return symCheck(tl->left, tr->right) && symCheck(tl->right, tr->left);
    
    return false;
}

bool isTreeSymmetric(tree_integer * t) {
    if(t == NULL)
        return true;
    
    bool res = symCheck(t->left, t->right);
    
    return res;
}
