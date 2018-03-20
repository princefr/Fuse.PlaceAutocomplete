// This file was generated based on /usr/local/share/uno/Packages/Fuse.WebSockets/1.4.2/Android/Neovisionaries/WebSocketClient.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.WebSocket.IWebSo-b6556b9.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Java{struct Object;}}
namespace g{namespace Neovisionaries{struct WebSocketClient;}}

namespace g{
namespace Neovisionaries{

// internal sealed extern class WebSocketClient :13
// {
struct WebSocketClient_type : uType
{
    ::g::Fuse::WebSocket::IWebSocketClient interface0;
    ::g::Uno::IDisposable interface1;
};

WebSocketClient_type* WebSocketClient_typeof();
void WebSocketClient__ctor__fn(WebSocketClient* __this);
void WebSocketClient__Close_fn(WebSocketClient* __this);
void WebSocketClient__Connect_fn(WebSocketClient* __this);
void WebSocketClient__Create_fn(WebSocketClient* __this, uString* url, uArray* protocols, uDelegate* open, uDelegate* close, uDelegate* error, uDelegate* receiveMessageHandler, uDelegate* receiveDataHandler);
void WebSocketClient__Dispose_fn(WebSocketClient* __this);
void WebSocketClient__New1_fn(WebSocketClient** __retval);
void WebSocketClient__Send_fn(WebSocketClient* __this, uArray* data);
void WebSocketClient__Send1_fn(WebSocketClient* __this, uString* data);

struct WebSocketClient : uObject
{
    uStrong< ::g::Java::Object*> _webSocket;

    void ctor_();
    void Close();
    void Connect();
    void Create(uString* url, uArray* protocols, uDelegate* open, uDelegate* close, uDelegate* error, uDelegate* receiveMessageHandler, uDelegate* receiveDataHandler);
    void Dispose();
    void Send(uArray* data);
    void Send1(uString* data);
    static WebSocketClient* New1();
};
// }

}} // ::g::Neovisionaries
