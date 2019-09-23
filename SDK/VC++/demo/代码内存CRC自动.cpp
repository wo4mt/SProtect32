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
	
	// 如果检查到代码被修改, 则会自动结束进程
	SP_CRC_AUTO();
	
	return getchar();

	SP_End();
}