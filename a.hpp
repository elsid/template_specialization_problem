#pragma once

#include <boost/hana/string.hpp>
#include <boost/core/demangle.hpp>

#include <iostream>

namespace foo {

template <class T>
struct A {
    static void call() {
        std::cout << "general call: A<" << boost::core::demangle(typeid(T).name()) << ">" << std::endl;
    }
};

}
