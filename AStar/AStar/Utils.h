#pragma once

#include <array>

template <typename T, size_t DimFirst, size_t... Dims>
class NDArray : public std::array<NDArray<T, Dims...>, DimFirst> {};

template <typename T, size_t DimLast>
class NDArray<T, DimLast> : public std::array<T, DimLast> {};

bool isIn2DBounds(size_t row, size_t col, size_t gridSize);