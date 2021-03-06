/*
 * Copyright (c) 2020, Andreas Kling <kling@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/HashMap.h>
#include <LibIPC/ClientConnection.h>
#include <LibWeb/Forward.h>
#include <SymbolServer/Forward.h>
#include <SymbolServer/SymbolClientEndpoint.h>
#include <SymbolServer/SymbolServerEndpoint.h>

namespace SymbolServer {

class ClientConnection final
    : public IPC::ClientConnection<SymbolClientEndpoint, SymbolServerEndpoint>
    , public SymbolServerEndpoint {
    C_OBJECT(ClientConnection);

public:
    explicit ClientConnection(NonnullRefPtr<Core::LocalSocket>, int client_id);
    ~ClientConnection() override;

    virtual void die() override;

private:
    virtual OwnPtr<Messages::SymbolServer::GreetResponse> handle(const Messages::SymbolServer::Greet&) override;
    virtual OwnPtr<Messages::SymbolServer::SymbolicateResponse> handle(const Messages::SymbolServer::Symbolicate&) override;
};

}
