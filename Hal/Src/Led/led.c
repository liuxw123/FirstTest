//
// Created by 86132 on 2021/8/18.
//

#include "led.h"
#include "instant.h"

AckCode init(const LedInfo* const led) {
    if (!led || led->status != UNINITIALIZED) return ILLEGAL_PARAM;
    led->rccEnable();
    HAL_GPIO_Init(led->port, led->gpio);
    return OK;
}

AckCode deInit(const LedInfo* const led) {
    if (!led) return ILLEGAL_PARAM;
    if (led->status == UNINITIALIZED || led->status == FETAL) return OK;
    HAL_GPIO_DeInit(led->port, led->gpio->Pin);
    led->rccDisable();
    return OK;
}

AckCode on(const LedInfo* const led) {
    if (!led || led->status != AVAILABLE) return ILLEGAL_PARAM;
    HAL_GPIO_WritePin(led->port, led->gpio->Pin, GPIO_PIN_RESET);
    return OK;
}

AckCode off(const LedInfo* const led) {
    if (!led || led->status != AVAILABLE) return ILLEGAL_PARAM;
    HAL_GPIO_WritePin(led->port, led->gpio->Pin, GPIO_PIN_SET);
    return OK;
}

AckCode toggle(const LedInfo* const led) {
    if (!led || led->status != AVAILABLE) return ILLEGAL_PARAM;
    HAL_GPIO_TogglePin(led->port, led->gpio->Pin);
    return OK;
}

AckCode breathLighting(const LedInfo* const led) {
    if (!led) return ILLEGAL_PARAM;
    // todo 呼吸灯程序
    return OK;
}



