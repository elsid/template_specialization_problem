#include "b.hpp"

namespace foo {

void call() {
    A<boost::hana::string<'a'>>::call();
}

}
