#ifndef __BITPIT_UTILS_HPP__
#define __BITPIT_UTILS_HPP__

/*! \file */

#include <array>
#include <functional>
#include <vector>

namespace utils {

template <typename T, typename Comparator = std::less<T> >
bool add_to_ordered_vector(const T &value, std::vector<T> &list, Comparator comparator = Comparator());

#ifndef __BITPIT_UTILS_SRC__
extern template bool add_to_ordered_vector<>(const long&, std::vector<long>&, std::less<long>);
#endif

}

#endif