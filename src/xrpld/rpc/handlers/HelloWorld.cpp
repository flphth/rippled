#include <xrpld/rpc/Context.h>

namespace ripple {
Json::Value
doHelloWorld(ripple::RPC::JsonContext& context)
{
    Json::Value result;
    result["message"] = "Bonjour, monde !";
    return result;
}}