#include<iostream>
using namespace std;


struct test {
	int a;
	char b;
	short c;
};
int main() {
	test t;
	printf("%d\n", &t.a);
	printf("%d\n", &t.b);
	printf("%d\n", &t.c);
	printf("%d\n", int(&t)+sizeof(t));
	printf("%d\n", int(&t.a)%sizeof(int));
	printf("%d\n", int(&t.b)%sizeof(char));
	printf("%d\n", int(&t.c)%sizeof(short));
	return 0;
}