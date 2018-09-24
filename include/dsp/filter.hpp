// Copyright 2018 by Martin Moene
//
// https://github.com/martinmoene/kalman-estimator
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef DSP_FILTER_HPP_INCLUDED
#define DSP_FILTER_HPP_INCLUDED

namespace dsp {

// filter type selection (lp, hp, ...)

enum class FilterResponse
{
    low_pass,
    high_pass,
    band_pass,
    band_stop,
    low_shelf,
    high_shelf,
    peak_band_eq
};

} // namespace dsp

#endif // DSP_FILTER_HPP_INCLUDED