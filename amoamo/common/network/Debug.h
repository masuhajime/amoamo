#ifndef AMOAMO_COMMON_NETWORK_DEBUG_H
#define AMOAMO_COMMON_NETWORK_DEBUG_H

#include <iostream>

#include "cocos2d.h"
#include "network/HttpClient.h"

USING_NS_CC;

namespace amoamo {
namespace common {
namespace network {
    
class Debug
{
public:
    /**
     * 指定秒数後にレスポンスを返す
     * http://httpbin.org/delay/3
     */
    static void delay(const cocos2d::network::ccHttpRequestCallback &callback, int seconds = 5);
    
    /**
     * 
     */
    static void delay(
                      const std::function<void()> &succeed,
                      const std::function<void()> &timeout,
                      const std::function<void()> &failed,
                      int responseStatus = RESPONSE_STATUS_SUCCEED,
                      int seconds = 5);
    
    static const int RESPONSE_STATUS_SUCCEED;
    static const int RESPONSE_STATUS_TIMEOUT;
    static const int RESPONSE_STATUS_FAILED;
};

}// namespace network
}// namespace common
}// namespace amoamo

#endif /* defined(AMOAMO_COMMON_NETWORK_DEBUG_H) */
