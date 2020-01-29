#ifndef R9k_FILTER_HPP_
#define R9k_FILTER_HPP_

namespace r9k {
  template<typename T, typename U>
    auto stable_filter(const T& begin, const U& end) -> auto {
      return begin;
    }
};

#endif // R9k_FILTER_HPP_
