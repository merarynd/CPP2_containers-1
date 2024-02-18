#ifndef S21_CONTAINERS_H_
#define S21_CONTAINERS_H_

#include <cmath>
#include <iostream>
#include <stdexcept>

class S21Matrix {
 public:
  //// Конструкторы и деструктор:
  S21Matrix();
  S21Matrix(int rows, int cols);
  S21Matrix(const S21Matrix& other);
  S21Matrix(S21Matrix&& other) noexcept;
  ~S21Matrix();
  void Memory() {
    matrix_ = new double*[rows_];
    for (int i = 0; i < rows_; ++i) {
      matrix_[i] = new double[cols_];
    }
  }

 private:
};

#endif  // S21_CONTAINERS_H_
