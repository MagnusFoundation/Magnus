#include "sockets/tcp.h"

namespace LibMagnus
{
    TCPServer::TCPServer() : Server()
    {
    }

    TCPServer::TCPServer(std::string_view address) : Server(address)
    {
    }

    // void TCPServer::Run()
    // {
    //     this->Initialize();
    // }

    // TCPServer::TCPServer(TCPServer& server)
    // {
    // }

    // TCPServer::TCPServer(TCPServer&& server)
    // {
    // }

    TCPServer::~TCPServer()
    {
    }
}
