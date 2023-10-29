// StaticLib.cpp : スタティック ライブラリ用の関数を定義します。
//

#include "pch.h"// プリコンパイル済みヘッダ
#include "framework.h"// プロジェクトで共有の項目を載せる

#include "../include/my_lib.h"

// num個の整数の和を得る
int sum(int num, int* array)
{
	int sum = 0;

	for (int i = 0; i < num; i++)
	{
		sum += array[i];
	}

	return sum;
}

// num個の整数の平均を得る
int average(int num, int* array)
{
	return 0x7fffffff;// 未実装
}

