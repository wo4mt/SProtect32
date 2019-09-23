#include <iostream>
#include <Windows.h>
#include "SysProtectSDK.h"


int main(void)
{
	SP_Begin(0);

	for (int i=0; i<10; ++i)
	{
		SP_AntiDumpCodeBegin();
		
		printf("hello, sp!\n");
		
		SP_AntiDumpCodeEnd();
	}
	
	int iCrcStatus = 0;
	SP_CRC(iCrcStatus);
	if (iCrcStatus)
	{
		printf("代码被修改.\n");
	}
	
	return getchar();

	SP_End();
}