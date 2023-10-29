#pragma once // インクルードガード

// C++ でCのライブラリを使うときのおまじない
#ifdef __cplusplus
extern "C" {
#endif


	// num個の整数の和を得る
	int sum(int num, int* array);

	// num個の整数の平均を得る
	int average(int num, int* array);


// C++ でCのライブラリを使うときのおまじない
#ifdef __cplusplus
} // extern "C"
#endif
