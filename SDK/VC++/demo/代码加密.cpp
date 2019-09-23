#include <iostream>
#include <Windows.h>
#include "SysProtectSDK.h"


int main(void)
{
	SP_Begin(0);

	printf("hello, sp!\n");

	return getchar();

	SP_End();
}