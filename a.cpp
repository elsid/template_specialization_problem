#include "a.hpp"

namespace foo {

void call_a() {
    A<boost::hana::string<'a'>>::call();
}

}
