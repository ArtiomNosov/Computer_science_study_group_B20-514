#include "string.h"
/*Удалить все символы, стоящие до первой точки в строке и после
последней точки с запятой. */
#include "stdio.h"
//функция обрабатывающая стрики переводит строки типа s.s;s -> .s;
//ей требуется указатель на массив строк, число строк для обработки, максимальный размер строки
int tochka(char *ps, int k, int step)
{
	char *psd;
	int len = 0;
	int del = 0;
       	// идём по всём необходимым строкам удаляя часть после точки с запятой
        for (int i = 0; i < k; i ++)
        {
		psd = memchr( ps+i*step, ';', strlen(ps+i*step) );
		*(psd+1) = '\0';
	}
		// идём по всём необходимым строкам удаляя часть перед точкой
	for (int i = 0; i < k; i ++)
        {
		len = strlen(ps+i*step);
		del = strcspn( ps+i*step, ".");
		for (int j = 0;j<(len-del);j++) (ps+i*step)[j]=(ps+i*step)[j + del];
		(ps+i*step)[len-del] = '\0';

	}
                
        return 0;
}
//функция выполняющая задачу
void foo()

        //количество строк
        int k = 0;
        //максимальная длинна строки + 1
        const int step = 121;
        //указатель на массив строк
        char* ps;
          выделяем память для массива
        ps = (char*)malloc(121);
          вводим строки пока не конец файла
        while (scanf("%120s", (ps + k * step)) != EOF)k++;
        //      printf("%s",ps);
        //применяем функцию обработки строк
        tochka(ps, k, step);
        printf("\n");
        //выводим изменённые строки
        for (int i = 0; i < k; i++)
                printf("%s ", (ps + i * step));
        printf("\n");
}
//точка входа
int main()
{
        //запуск функции, решающей задачу
        foo();
        return 0;
}