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