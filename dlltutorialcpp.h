#include <stdio.h>

typedef struct {
	int one;
	int two;
} myStruct;

typedef struct {
	int one;
	double two;
	char three[2];
} struct2;

__declspec(dllexport) long Add(long a, long b, long *c);
__declspec(dllexport) long Add1(myStruct t);
__declspec(dllexport) void Func(struct2 t);
__declspec(dllexport) void GetString(char * & n);