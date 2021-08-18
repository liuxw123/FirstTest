//
// Created by 86132 on 2021/8/18.
//

#ifndef FIRSTTEST_INSTANT_H
#define FIRSTTEST_INSTANT_H

#include <common_def.h>
#include "led.h"

#ifdef LED_INSTANT
struct LedInstant {
    // Led灯的init函数指针
    AckCode (*init)(LedInfo);
    // Led灯的deInit函数指针
    AckCode (*deInit)(LedInfo);
    // 点亮led
    AckCode (*on)(LedInfo);
    // 熄灭led
    AckCode (*off)(LedInfo);
    // 翻转led状态
    AckCode (*toggle)(LedInfo);
    // 呼吸灯
    AckCode (*breathLighting)(LedInfo);

    LedInfo led;
    struct LedInstant* next;
};
#endif

#endif //FIRSTTEST_INSTANT_H
