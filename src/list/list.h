#ifndef S21_LIST_H
#define S21_LIST_H

#include <iostream>
#include <initializer_list>
#include <utility>

/*
HEADER FILE
*/

// Test list class with some basic example operations and concepts
template <class T>
class List
{
    public:
        // member types
        using value_type = T;
        using reference = value_type&;
        using const_reference = const value_type&;
        using iterator = value_type*;
        using const_iterator = const value_type*;
        using size_type = size_t;

        // private method
    private:
        struct ListNode {
            value_type value_;
            ListNode* prev_;
            ListNode* next_;

            ListNode(const_reference val) : value_(val), prev_(nullptr), next_(nullptr) {}
        };
        ListNode* head_;
        ListNode* tail_;
        size_t m_size;

        // public methods
    public:
        // default constructor (simplified syntax for assigning values to attributes)
        List() : m_size(0U), m_capacity(0U), arr(nullptr) {}
        // parametrized constructor for fixed size vector (explicit was used in order to
        // avoid automatic type conversion)
        explicit List(size_type n) : m_size(n), m_capacity(n), arr(n ? new T[n] : nullptr) {}
        // initializer list constructor (allows creating lists with initializer lists, see main.cpp)
        List(std::initializer_list<value_type> const &items);
        // copy constructor with simplified syntax
        List(const List &l) : m_size(v.m_size), m_capacity(l.m_capacity), arr(v.arr) {};
        // move constructor with simplified syntax
        List(List &&l) : m_size(v.m_size), m_capacity(l.m_capacity), arr(v.arr)
        {
            v.arr = nullptr;
            v.m_size = 0;
        }

        // destructor
        ~List() { delete[] arr; }

        // some method examples
        // size getter
        size_type size();
        // element accessor
        value_type at(size_type i);
        // append new element
        void push_back(const_reference v);
        void pop_back();
        void push_front(const_reference v);
        void pop_front();
};

#endif
