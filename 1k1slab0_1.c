//решить квадратное уравнение

#include <stdio.h>
#define X_MAX 100
#define X_MIN -100
int solve(int a, int b, int c, int *x1, int *x2) {
if (!a) {
return 1;
}
if ((b % a) || (c % a)) {
return 2;
}
int k1 = -b / a;
int k2 = c  / a;
for (int i = X_MIN; i <= X_MAX; i++) {
for (int j = X_MIN; j <= X_MAX; j++) {
if ((i + j == k1) && (i * j == k2)) {
*x1 = i, *x2 = j;
return 0;
}
}
}
return 2;
}
int main() {
int a, b, c;
int x1, x2;
int status;
printf("ax^2 + bx + c = 0\n");
printf("Please enter a\n");
scanf("%d", &a);
printf("Please enter b\n");
scanf("%d", &b);
printf("Please enter c\n");
scanf("%d", &c);
if ((status = solve(a, b, c, &x1, &x2)) !=0) {
switch (status) {
case 1:
printf("Not a quadratic euquatioin\n");
break;
case 2:
printf("No roots found\n");
break;
deafult:
printf("Should never be reached\n");
}
return status;
}
if (x1 != x2) {
printf("Two roots found: %d %d\n", x1, x2);
} else {
printf("Sing root found: %d\n", x1);
}
return 0;
}
