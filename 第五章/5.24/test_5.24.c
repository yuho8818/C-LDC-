/*
 * This program was written by Fawei Liang .
 * Produced date 5/10/2020 , Northeastern University,China
 * 题目：（温度转换）实现下列整数函数：
 * （a）返回与华氏温度等价的摄氏温度的 toCelsius 函数。
 * （b）返回与摄氏温度等价的华氏温度的 toFahrenheit 函数。
 * （c）请编写一个程序用这些函数来打印从摄氏温度0～100度
 * 对应的华氏温度，以及华氏温度32～212度对应的摄氏温度。
 * 打印采用简单的表格形式，即在保证可读性的前提下所用的行
 * 数最少。
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// function prototypes
float toCelsius(float);
float toFahrenheit(float);

// function main begins program execution
int main(void)
{
    float fahrenheit, celsius;
    int line;

    printf( "%s%17s%34s%17s\n", "Celsius", "Fahrenheit", "Fahrenheit", "Celsius" );

    for (line = 0, celsius = 0, fahrenheit = 32;line <= 180;) {
        if (line <= 100) {
           printf( "%7.0f%17.1f", celsius, toFahrenheit(celsius) );
           printf( "%34.0f%17.1f", fahrenheit, toCelsius(fahrenheit) );
           puts( "" );  // line feed
           Sleep(50);  // wait for 0.02s
           celsius++;  // increment celsius
           fahrenheit++;  // increment fahrenheit
           line++;  // increment line
        }  // end if
        else {
           printf( "%7s%17s", " ", " " );
           printf( "%34.0f%17.1f", fahrenheit, toCelsius(fahrenheit) );
           puts( "" );  // line feed
           Sleep(50);  // wait for 0.02s
           fahrenheit++;  // increment fahrenheit
           line++;  // increment line
        }  // end else
    }  // end for
}  // end function main


float toCelsius(float f)
{
   float c;
   c = (f - 32) / 1.8;
   return c;
}

float toFahrenheit(float c)
{
   float f;
   f = c * 1.8 + 32;
   return f;
}
