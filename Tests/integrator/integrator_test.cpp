#include "integrator.h"
#include "intalgo.h"

#include "catch2/catch.hpp"

#include "utils/utils.h"

class dummyAlgo: public Integration_Algorithm
{
public:
        dummyAlgo() { }
        dummyAlgo(dummyAlgo &&) = default;
        dummyAlgo(const dummyAlgo &) = default;
        dummyAlgo &operator=(dummyAlgo &&) = default;
        dummyAlgo &operator=(const dummyAlgo &) = default;
        ~dummyAlgo() { }

        float integrate(float dx, float y) {
                return dx*y;
        } 
};

TEST_CASE("Testing Integrator class", "[integration]") {

        dummyAlgo dum;

        Integrator sum(&dum);

        float vals[] = {1.1, 1.2, 1.3, 1.4};

        for (size_t i = 0; i < len(vals); ++i) {
                float v = sum.integrate(i, vals[i]);
                REQUIRE_THAT(v, Catch::Matchers::WithinRel(i*vals[i]));
        }
}
