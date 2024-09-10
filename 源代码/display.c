#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>
#include "cnfparser.h"
#include "solver.h"
#include "X-Sudoku.h"

extern ArgueValue* ValueList;
extern Root* r;



int main(int argc, const char* argv[]) {
    int op = 1;
    while (op) {
        system("cls");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("\t\t      #请选择功能#\n");
        // printf("---------------------------------------------------------\n");
        printf("\n");
        printf("   1.Sudoku             2.SAT                0.exit\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        scanf("%d", &op);
        switch (op) {
        case 1:
            Sudoku();
            break;
        case 2:
            SAT();
            break;
        case 0:
            break;
        default:
            printf("输入错误！");
            getchar(); getchar();
            break;
        }
    }
    return 0;
}