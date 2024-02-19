#include "s21_array.h"

array::array() {}
array::array(std::initializer_list<value_type> const& items) {}
array::array(const array& a) {}
array::array(array&& a) {}
array::~array() {}

// Array Element access:
array::operator=(array && a) {}
reference array::at(size_type pos) {}
reference array::operator[](size_type pos) {}
const_reference array::front() {}
const_reference array::back() {}
iterator array::data() {}

// Array Iterators:
array::iterator begin() {}
array::iterator end() {}

// Array Capacity:
bool array::empty() {}
size_type array::size() {}
size_type array::max_size() {}

// Array Modifiers:
void array::swap(array& other) {}
void array::fill(const_reference value) {}