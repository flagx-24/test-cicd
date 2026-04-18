#include <stdio.h>
#include <assert.h>
#include "temp_calc.h"

int main() {
    printf("start test...\n");

    // 测试1：0度应该等于32华氏度
    float result1 = CelsiusToFahrenheit(0.0f);
    assert(result1 == 32.0f);

    // 测试2：100度应该等于212华氏度
    float result2 = CelsiusToFahrenheit(100.0f);
    assert(result2 == 212.0f);

    printf("all tests passed!\n");
    return 0;
}