#include "list.h"

template <typename T>
void List<T>::push_back(const_reference val) {
    ListNode* newNode = new ListNode<T>(val);
    if (tail_ == nullptr) {
        head_ = tail_ = newNode;
    } else {
        newNode->prev = tail_;
        tail_->next = newNode;
        tail_ = newNode;
    }
}

    // Удаление последнего элемента из списка
template <typename T>
void List<T>::pop_back() {
    if (tail_ == nullptr) {
        return; // Список пуст
    }

    ListNode* temp = tail_;
    tail_ = tail_->prev;
    if (tail_ != nullptr) {
        tail_->next = nullptr;
    } else {
        head_ = nullptr; // Список стал пустым
    }
    delete temp;
}

template <typename T>
void List<T>::push_front(const_reference val) {
    ListNode* newNode = new ListNode<T>(val);
    if (head_ == nullptr) {
        head_ = tail_ = newNode;
    } else {
        newNode->next_ = head_;
        head_->prev_ = newNode;
        head_ = newNode;
    }
}

template <typename T>
void List<T>::pop_front() {
    if (head_ == nullptr) {
        return; // Список пуст
    }

    ListNode* temp = head_;
    head_ = head_->next_;
    if (head_ != nullptr) {
        head_->prev_ = nullptr;
    } else {
        tail_ = nullptr; // Список стал пустым
    }
    delete temp;
}