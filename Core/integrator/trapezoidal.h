/*
 * trapezoidal.h
 * 
 * Created: 12/3/2019
 *  Author: n-is
 *   Email: 073bex422.nischal@pcampus.edu.np
 */

#ifndef _TRAPEZOIDAL_H_
#define _TRAPEZOIDAL_H_

#include "intalgo.h"

class Trapezoidal : public Integration_Algorithm
{
public:
        Trapezoidal() : Trapezoidal(0.0, 0.0) {}
        Trapezoidal(Trapezoidal &&) = default;
        Trapezoidal(const Trapezoidal &) = default;
        Trapezoidal &operator=(Trapezoidal &&) = default;
        Trapezoidal &operator=(const Trapezoidal &) = default;
        ~Trapezoidal() {}

        Trapezoidal(float initialValue, float intValue = 0.0);

        float integrate(float dx, float y);

private:
        float value_;
        float lastValue_;
};

#endif // !_TRAPEZOIDAL_H_
