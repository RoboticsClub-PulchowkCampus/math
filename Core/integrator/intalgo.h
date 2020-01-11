/*
 * intalgo.h
 * 
 * Created: 12/3/2019
 *  Author: n-is
 *   Email: 073bex422.nischal@pcampus.edu.np
 */

#ifndef _INT_ALGO_H_
#define _INT_ALGO_H_

// Integration_Algorithm is an interface that defines the methods that any
// integration algorithm should implement
class Integration_Algorithm
{
public:
        Integration_Algorithm() {}
        virtual ~Integration_Algorithm() {}

        virtual float integrate(float dx, float y) = 0;
};

#endif // !_INT_ALGO_H_
