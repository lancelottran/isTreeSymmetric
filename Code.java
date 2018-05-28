//
// Definition for binary tree:
// class Tree<T> {
//   Tree(T x) {
//     value = x;
//   }
//   T value;
//   Tree<T> left;
//   Tree<T> right;
// }

boolean isTreeSymmetric(Tree<Integer> t) {
    if(t == null)
        return true;
    
    return symmetricCheck(t.left, t.right);
}

boolean symmetricCheck(Tree<Integer> left, Tree<Integer> right){
    
    if(left == null && right == null)
        return true;
    
    if(left != null && right != null && left.value.equals(right.value))
    {
        return symmetricCheck(left.left, right.right) && symmetricCheck(left.right, right.left);
    }
    
    return false;
}
