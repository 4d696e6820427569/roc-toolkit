/*
 * Copyright (c) 2021 Roc authors
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

//! @file roc_core/itimer.h
//! @brief An interface for timers.

#ifndef ROC_CORE_ITIMER_H_
#define ROC_CORE_ITIMER_H_

#include "roc_core/time.h"

namespace roc {
namespace core {

//! ITimer interface.
class ITimer {
public:
    virtual ~ITimer();

    //! Set timer deadline.
    virtual bool try_set_deadline(nanoseconds_t deadline) = 0;

    //! Wait until deadline expires.
    virtual void wait_deadline() = 0;

    //! Get the current time.
    virtual nanoseconds_t get_time() = 0;
};
} // namespace core
} // namespace roc

#endif // ROC_CORE_ITIMER_H_
