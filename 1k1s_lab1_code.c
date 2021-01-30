//посчитать число вхожедений цифры 10 - чной с/с в число
//вывести в формате <цифра> - <число вхождений>

#include "stdio.h"
#include "limits.h"
int main ()
{
char c;
char k = 1;
unsigned long long f = 1;
unsigned long long a[10] = {0};
while(c!= 10)
    {
 scanf("%c", &c);
 switch (c)
{
case 48: a[0]=a[0]+1; break;
case 49: a[1]=a[1]+1;break;
case 50: a[2]=a[2]+1;break;
case 51: a[3]=a[3]+1;break;
case 52: a[4]=a[4]+1;break;
case 53: a[5]=a[5]+1;break;
case 54: a[6]=a[6]+1;break;
case 55: a[7]=a[7]+1;break;
case 56: a[8]=a[8]+1;break;
case 57: a[9]=a[9]+1;break;
}
f = f+1;
if (f==ULLONG_MAX)
 {
  printf("Ошибка! Вы ввели слишком много символов. Превышен тип unsigned long long");
  k = 0;
  break;
 }
    }
if (k)for (int i = 0;i<10;i++)
 printf("%d - %d\n", i,a[i]);
return 0;
}


