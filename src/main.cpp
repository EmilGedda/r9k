#include <ios>
#include <iostream>
#include <iterator>
#include <string>
#include <r9k/filter.hpp>

class line : public std::string {};

std::istream &operator>>(std::istream &is, line &l) {
    std::getline(is, l);
    return is;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::istream_iterator<line> begin(std::cin), end;
  std::copy(r9k::stable_filter(begin, end), end,
            std::ostream_iterator<std::string>(std::cout, "\n"));
}
