#include "trapezoidal.h"

Trapezoidal::Trapezoidal(float initialValue, float intValue) {
        lastValue_ = initialValue;
        value_ = intValue;
}

float Trapezoidal::integrate(float dx, float y) {
        float val = (lastValue_ + y) / 2;
        lastValue_ = y;
        value_ += val * dx;

        return value_;
}