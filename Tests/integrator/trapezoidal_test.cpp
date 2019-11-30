#include "trapezoidal.h"
#include "integrator.h"

#include "catch2/catch.hpp"

#include "utils/utils.h"

TEST_CASE("Testing Trapezoidal class", "[integration][trapezoidal]") {

        GIVEN("Linearly related Data") {

                Trapezoidal tr;

                float dx[] = {1, 1, 1, 1};
                float  y[] = {1, 2, 3, 4};

                float res[] = {0.5, 2, 4.5, 8};

                REQUIRE(len(dx) == len(y));

                for (size_t i = 0; i < len(dx); ++i) {
                        float integrated = tr.integrate(dx[i], y[i]);

                        REQUIRE_THAT(integrated, Catch::Matchers::WithinRel(res[i]));
                }
        }
}

TEST_CASE("Testing Trapezoidal with Integrator", "[integration][trapezoidal]") {

        GIVEN("Linearly related Data") {

                Trapezoidal tr;
                Integrator inte(&tr);

                float dx[] = {1, 1, 1, 1};
                float  y[] = {1, 2, 3, 4};

                float res[] = {0.5, 2, 4.5, 8};

                REQUIRE(len(dx) == len(y));

                for (size_t i = 0; i < len(dx); ++i) {
                        float integrated = inte.integrate(dx[i], y[i]);

                        REQUIRE_THAT(integrated, Catch::Matchers::WithinRel(res[i]));
                }
        }
}
