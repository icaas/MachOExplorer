//
// Created by everettjf on 2017/7/5.
//

#ifndef MOEX_UTILITY_H
#define MOEX_UTILITY_H

#include <boost/format.hpp>

template <typename T>
std::string ToString(T value){
    return boost::str(boost::format("%1%") % value);
}
template <typename T>
std::string ToHexString(T value){
    return boost::str(boost::format("0x%x") % value);
}

#endif //MOEX_UTILITY_H
