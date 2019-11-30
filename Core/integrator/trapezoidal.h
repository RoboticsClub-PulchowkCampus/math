#ifndef _TRAPEZOIDAL_H_
#define _TRAPEZOIDAL_H_

#include "intalgo.h"

class Trapezoidal : public Integration_Algorithm
{
public:
        Trapezoidal() = default;
        Trapezoidal(Trapezoidal &&) = default;
        Trapezoidal(const Trapezoidal &) = default;
        Trapezoidal &operator=(Trapezoidal &&) = default;
        Trapezoidal &operator=(const Trapezoidal &) = default;
        ~Trapezoidal() { }

        Trapezoidal(float initialValue);

        float integrate(float dx, float y);

private:
        float value_;
        float lastValue_;
};

#endif // !_TRAPEZOIDAL_H_
