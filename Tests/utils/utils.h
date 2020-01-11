/*
 * utils.h
 * 
 * Created: 12/3/2019
 *  Author: n-is
 *   Email: 073bex422.nischal@pcampus.edu.np
 */

#ifndef _UTILS_H_
#define _UTILS_H_

template <typename T, size_t N>
constexpr size_t len(T (&arr)[N])
{
        return N;
}

#endif // !_UTILS_H_
