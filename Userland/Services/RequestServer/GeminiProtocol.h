/*
 * Copyright (c) 2020, The SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <RequestServer/Protocol.h>

namespace RequestServer {

class GeminiProtocol final : public Protocol {
public:
    GeminiProtocol();
    virtual ~GeminiProtocol() override;

    virtual OwnPtr<Request> start_request(ClientConnection&, const String& method, const URL&, const HashMap<String, String>&, ReadonlyBytes body) override;
};

}
