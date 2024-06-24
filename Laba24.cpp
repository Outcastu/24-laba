#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "Header.h"
#define _CRT_SECURE_NO_WARNINGS
void F1(int n) {
	printf(" %d", n);
	if (n > 1) {
		F1(n - 2);
	}
}
void F2(int n) {
	if (n > 1) {
		F2(n - 2);
	}
	printf(" %d", n);
}
void F3(int n) {
	printf(" %d", n);
	if (n > 1) {
		F3(n - 2);
	}
	printf(" %d", n);
}
void recEGE1(int n) {
	if (n >= 1) {
		printf("%d\n", n);
		printf("(((1)))");
		recEGE1(n - 1);
		printf("(((2)))");
		recEGE1(n - 1);
	}
}
void D1(int n) {
	if (n >= 2) {
		printf("%d", n);
		printf("(((1)))");
		D1(n - 3);
		printf("(((2)))");
		D1(n - 4);
	}
}
void ex1() {
	int n;
	printf("Найдите факториал числа:");
	scanf_s("%d", &n);
	long f = Faktorial_My(n);
	printf("%d!=%ld", n, f);
}
void ex2() {
	int n;
	int f = 2;
	printf("Введите число: ");
	scanf_s("%d", &n);
	F1(n);
}
void ex2_2() {
	int n;
	int f = 2;
	printf("Введите число: ");
	scanf_s("%d", &n);
	F2(n);
}
void ex2_3() {
	int n;
	int f = 2;
	printf("Введите число: ");
	scanf_s("%d", &n);
	F3(n);
}
void main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ex2_3();
}