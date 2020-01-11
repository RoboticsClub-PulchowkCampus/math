/*
 * integrator.h
 * 
 * Created: 12/3/2019
 *  Author: n-is
 *   Email: 073bex422.nischal@pcampus.edu.np
 */

#ifndef _INTEGRATOR_H_
#define _INTEGRATOR_H_

#include "intalgo.h"

class Integrator
{
public:
        Integrator() {}
        Integrator(Integrator &&) = default;
        Integrator(const Integrator &) = default;
        Integrator &operator=(Integrator &&) = default;
        Integrator &operator=(const Integrator &) = default;
        ~Integrator() {}

        Integrator(Integration_Algorithm *algo)
        {
                setAlgorithm(algo);
        }

        void setAlgorithm(Integration_Algorithm *algo)
        {
                algo_ = algo;
        }

        float integrate(float dx, float y)
        {
                return algo_->integrate(dx, y);
        }

private:
        Integration_Algorithm *algo_;
};

#endif // !_INTEGRATOR_H_
