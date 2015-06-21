#include "stdafx.h"
#include <stdio.h>
#include "dlltutorialcpp.h"


__declspec(dllexport) long Add(long a, long b, long *c)
{
	*c = a + b;
	return a + b;
}

__declspec(dllexport) long Add1(myStruct t) {
	return t.one + t.two;
}

__declspec(dllexport) void Func(struct2 &t) {
	t.one += 1;
	t.two += 2;
	char buf = t.three[0];
	t.three[0] = t.three[1];
	t.three[1] = buf;
}

__declspec(dllexport) void GetString(char  n[21]) {
	strcpy_s(n, 21, "qwertyuiopasdfghjklz");
}