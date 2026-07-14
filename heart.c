#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    // 控制台切换UTF-8，解决中文乱码
    system("chcp 65001 > nul");
    int colorList[] = {12, 13, 14, 11, 9};
    int colorIdx = 0;
    float x, y, val;

    while (1)
    {
        system("cls");
        for (y = 1.5f; y > -1.5f; y -= 0.1f)
        {
            for (x = -1.5f; x < 1.5f; x += 0.05f)
            {
                val = x*x + y*y - 1;
                if (val*val*val - x*x*y*y*y < 0)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorList[colorIdx]);
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        printf("\n      Dynamic Love Heart ❤\n");

        colorIdx = (colorIdx + 1) % 5;
        Sleep(100);
    }
    return 0;
}
