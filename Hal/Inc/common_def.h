//
// Created by 86132 on 2021/8/18.
//

#ifndef FIRSTTEST_COMMON_DEF_H
#define FIRSTTEST_COMMON_DEF_H

typedef enum {
    OK,
    ILLEGAL_PARAM,
    ILLEGAL_STATUS,
} AckCode;

// 设备状态枚举
typedef enum {
    // 设备未初始化
    UNINITIALIZED,
    // 设备可以使用
    AVAILABLE,
    // 已被其他程序使用当中
    USING,
    // 设备处于永久不可用状态
    FETAL,
} HalStatus;

#endif //FIRSTTEST_COMMON_DEF_H
