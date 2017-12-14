/* Lab0 
 * exercise6.c
 * Created by Mauro J. Pappaterra on 22 of September 2017 */

#include <stdio.h>

float minFloat (float float1, float float2) {
    if (float1 > float2) {
        return  float2;
    } else {
        return float1;
    }
}

float min4Float (float float1, float float2, float float3, float float4) {
    if (minFloat (float1, float2) > minFloat (float3, float4)) {
        return  minFloat (float3, float4);
    } else {
        return minFloat (float1, float2);
    }
}

float maxFloat (float float1, float float2) {
    if (float1 < float2) {
        return  float2;
    } else {
        return float1;
    }
}

float max4Float (float float1, float float2, float float3, float float4) {
    if (maxFloat (float1, float2) < maxFloat (float3, float4)) {
        return  maxFloat (float3, float4);
    } else {
        return maxFloat (float1, float2);
    }
}

float sum4Float (float float1, float float2, float float3, float float4) {
    return float1 + float2 + float3 + float4;
}

int main() {
    float f1;
    float f2;
    float f3;
    float f4;

    printf("Give four floats: ");

    scanf("%f", &f1);
    scanf("%f", &f2);
    scanf("%f", &f3);
    scanf("%f", &f4);

    printf("min: %f\n", min4Float(f1,f2,f3,f4));
    printf("max: %f\n", max4Float(f1,f2,f3,f4));
    printf("sum: %f\n", sum4Float(f1,f2,f3,f4));
    printf("mean: %f\n", (f1 + f2 + f3 + f4)/4.0);

    return 0;
}