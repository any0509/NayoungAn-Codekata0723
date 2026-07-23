#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number, int limit, int power) {
    int answer = 0;

    int divisor = 0;
    int final_power = 0;
    int power_sum = 0;
    for (int i = 1; i <= number; ++i)
    {
        // 대원 한 명씩 약수 개수 구하기
        for (int j = 1; j <= i; ++j)
        {
            if (i % j == 0)
            {
                ++divisor;
            }

        }

        if (divisor > limit)
        {
            final_power = power;
        }
        else
        {
            final_power = divisor;
        }

        power_sum += final_power;
        divisor = 0;
    }

    answer = power_sum;

    return answer;

}