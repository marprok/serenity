/*
 * Copyright (c) 2020, The SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

namespace Kernel {

enum class PageFaultResponse {
    ShouldCrash,
    OutOfMemory,
    Continue,
};

}
