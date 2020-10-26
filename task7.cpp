// task7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include < string.h >
#include < cstring >

using namespace std;

void 	func5(int q,int  masbin[],int find,int &otvet,int &a,int &b) { //номер 5
	
	
		if (masbin[b] == find) {
			a = b;
			otvet = a+1;
		}
		else if (masbin[a] == find) {
			b = a;
			otvet = a+1;
		}
		else if (find < masbin[(a + b) / 2])
		{
			b = ((a + b) / 2);
		}
		else if (find == masbin[(a + b) / 2])
		{
			a = (a + b) / 2;
			b = a;
			otvet = a+1;
		}
		if (find > masbin[(a + b) / 2]) {
			a = (a + b) / 2;

		}

		exit(0);
}
void bin() {   //номер 5
	int q, * masbin, find;
	int otvet = 0;

	//	printf(" %d", a);
	//	printf(" %d", b);
	//	printf(" %d", masbin[a]);
	//	printf(" %d", masbin[b]);
	printf("\nВведите кол-во чисел в массиве? ");
	scanf_s("%d", &q);//q - кол-во эллементов массива 1

	masbin = (int*)malloc(q * sizeof(int)); //выделяем необходимую память
	for (int i = 0; i < q; i++) {
		scanf_s("%d", &masbin[i]);
	}
	printf("\nкакое число нужно найти? ");
	scanf_s("%d", &find);
	int a = 0, b; b = q - 1;
	while (otvet == 0) {
		func5(q, masbin, find, otvet, a, b);
	}

	printf("Ваше число на %d месте", otvet);
	exit(0);
}
void func6(int mas1[], int mas2[], int mas3[], int q, int w) {  //задание 6

	for (int i = 0; i < q; i++)
	{
		mas3[i] = mas1[i];
	}
	for (int i = 0; i < w; i++)
	{
		mas3[i + q] = mas2[i];
	}



}

void zadanie6() {  //прога 6
	int a, s,* mas1,* mas2, * mas3,q,w;

	printf("\nВведите кол-во чисел в массиве? ");
	scanf_s("%d", &q);//q - кол-во эллементов массива 1
	mas1 = (int*)malloc(q * sizeof(int)); //выделяем необходимую память
	for (int i = 0; i < q; i++) {
		scanf_s("%d", &mas1[i]);
	}
	printf("\nВведите кол-во чисел в массиве? ");
	scanf_s("%d", &w);//w - кол-во эллементов массива 2
	mas2 = (int*)malloc(w * sizeof(int)); //выделяем необходимую память
	for (int i = 0; i < w; i++) {
		scanf_s("%d", &mas2[i]);
	}

	mas3 = (int*)malloc((w + q) * sizeof(int)); //выделяем необходимую память
	//printf("  это тип кол-во эллементов в массиве %d %d\n", q, w);  // проверка
	
	func6(mas1,mas2,mas3,q,w);
	for (int i = 0; i < (q + w); i++) { //принт в мэйне
		printf(" %d ", mas3[i]);
	}

	// for (int i = 0; i < (a + s); i++) {  //принт прям в функции
	// 	printf(" %d ", massiv3[i]);
	// }
	exit(0);
}

void zadanie7(){//Задание 6

	string word ;

		
		printf("Введите слово: ");
		cin >> word;    // несколько часов думал как в Си записать ввод слова, ничего не работает,функции gets() вообще нету в моей версии, можно cin использовать?)
		//scanf_s("%s",word);  Не работает!
	
		int len = word.length();

		printf(" %d", len);
		for (int i = 0; i < len / 2; ++i)
		{
			if (word[i] != word[len - i - 1])
			{
				printf("\n Не полиндром");
				exit(0);
			}
		}
		printf("\nПолиндром");
		exit(0);
}
int main()
{
	int q=-1;
	setlocale(LC_ALL, "Russian");
	
	//Task7 
	//Задание 1 А
	printf("\n\n5) (2) (Рекурсия) Найти заданный элемент в упорядоченном массиве (бинарный поиск)");
	printf("\n\n6) (2) Написать функцию, объединяющую два упорядоченных массива размером m и n в упорядоченный массив размером m+n (итоговый массив не сортировать)");
	printf("\n\n7) (2)Рекурсивно описать логическую функцию Pal(t), которая проверяет, является ли предложение t типа char t[20]; палиндромом.");
	printf("\n\n0)Выйти");
	while (q!=0) {
		printf("\n\nВведите номер нужного задания : ");
		scanf_s("%d", &q);
		switch(q){
		
		case 5: {
			bin();//Задание 5
			break;
		}
		case 6: {
			zadanie6();//Задание 6
			break;
		}
		case 7: {
			zadanie7();//Задание 6
			break;
		}
		}
	}
	return 0; 
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
