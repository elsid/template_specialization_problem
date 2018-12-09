#pragma once

#include "a.hpp"

namespace foo {

template <>
struct A<boost::hana::string<'a'>> {
    static void call() {
        std::cout << "specialization call: A<boost::hana::string<'a'>>" << std::endl;
    }
};

void call();

}
