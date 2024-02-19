#ifndef S21_DEREVO_H_
#define S21_DEREVO_H_

#include <cmath>
#include <iostream>
#include <stdexcept>

enum Color { RED, BLACK };

template <typename Key, typename Value>
struct Node {
  Key key;
  Value value;
  Color color;
  Node* parent;
  Node* left;
  Node* right;
};

template <typename Key, typename Value>
class RedBlackTree {
 public:
 private:
  Node<Key, Value>* root;

  // Дополнительные приватные методы для поддержания баланса

 public:
  RedBlackTree();
  ~RedBlackTree();

  // Публичные методы для вставки, удаления, поиска и т. д.

 private:
  // Приватные методы для вставки, удаления, балансировки и т. д.
};

#endif  // S21_DEREVO_H_