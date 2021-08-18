//
// Created by 86132 on 2021/8/18.
//

#ifndef FIRSTTEST_LED_H
#define FIRSTTEST_LED_H
#include "common_def.h"
#include "stm32f1xx_hal.h"

#define LED_INSTANT

struct LedInfo{
    HalStatus status;
    GPIO_TypeDef* port;
    GPIO_InitTypeDef* gpio;
    void (*rccEnable)(void);
    void (*rccDisable)(void);
};

typedef struct LedInfo LedInfo;

#endif //FIRSTTEST_LED_H
