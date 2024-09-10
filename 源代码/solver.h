#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#ifndef DPLL_h
#define DPLL_h
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "cnfparser.h"



status SAT(void);
status DPLL1(int num, int op, int times);//采用第一种变元选取策略的递归算法DPLL函数
status DPLL2(int num, int op, int times);//采用第二种变元选取策略的递归算法DPLL函数
status DPLL3(int num, int op, int times);//采用第三种变元选取策略的递归算法DPLL函数
status DPLL4(int num, int op, int times);//采用第四种变元选取策略的递归算法DPLL函数
status DPLL(int num, int op, int times);//采用第一种变元选取策略的非递归算法DPLL函数
status DPLL_Before(Root* r, int op);//优化前版本DPLL
void AnswerComplete(void);//完善SAT求解结果
status AnswerCheck(int solut);//检查SAT求解结果正确性

#endif /* DPLL_h */