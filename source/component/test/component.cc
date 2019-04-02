#include <catch2/catch.hpp>

#include <component/component.h>

TEST_CASE("when ... then ...", "[component]") {
    ns::Component c{};
    REQUIRE(1 + 1 == 2);
}

