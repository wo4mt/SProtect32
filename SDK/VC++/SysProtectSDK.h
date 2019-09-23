#ifndef __SPROTECT_SDK__
#define __SPROTECT_SDK__


//
// 汇编形式的水印
//

#define SP_Begin(flag) \
	__asm _emit 0xEB \
	__asm _emit 0x1C \
	__asm _emit 0x53 \
	__asm _emit 0x79 \
	__asm _emit 0x73 \
	__asm _emit 0x56 \
	__asm _emit 0x4d \
	__asm _emit 0x50 \
	__asm _emit 0x72 \
	__asm _emit 0x6f \
	__asm _emit 0x74 \
	__asm _emit 0x65 \
	__asm _emit 0x63 \
	__asm _emit 0x74 \
	__asm _emit 0x20 \
	__asm _emit 0x42 \
	__asm _emit 0x65 \
	__asm _emit 0x67 \
	__asm _emit 0x69 \
	__asm _emit 0x6e \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm jmp dword ptr ds : [flag] \
	__asm _emit 0x90

#define SP_End() \
	__asm _emit 0xEB \
	__asm _emit 0x11 \
	__asm _emit 0x53 \
	__asm _emit 0x79 \
	__asm _emit 0x73 \
	__asm _emit 0x56 \
	__asm _emit 0x4d \
	__asm _emit 0x50 \
	__asm _emit 0x72 \
	__asm _emit 0x6f \
	__asm _emit 0x74 \
	__asm _emit 0x65 \
	__asm _emit 0x63 \
	__asm _emit 0x74 \
	__asm _emit 0x45 \
	__asm _emit 0x6e \
	__asm _emit 0x64 \
	__asm _emit 0x90 \
	__asm _emit 0x90

//
// 防止DUMP水印
//

#define SP_AntiDumpCodeBegin() \
	__asm _emit 0xEB \
	__asm _emit 0x1d \
	__asm _emit 0x53 \
	__asm _emit 0x79 \
	__asm _emit 0x73 \
	__asm _emit 0x56 \
	__asm _emit 0x4d \
	__asm _emit 0x50 \
	__asm _emit 0x72 \
	__asm _emit 0x6f \
	__asm _emit 0x74 \
	__asm _emit 0x65 \
	__asm _emit 0x63 \
	__asm _emit 0x74 \
	__asm _emit 0x20 \
	__asm _emit 'D' \
	__asm _emit 'u' \
	__asm _emit 'm' \
	__asm _emit 'p' \
	__asm _emit 0x42 \
	__asm _emit 0x65 \
	__asm _emit 0x67 \
	__asm _emit 0x69 \
	__asm _emit 0x6e \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm _emit 0x90

#define SP_AntiDumpCodeEnd() \
	__asm _emit 0xEB \
	__asm _emit 0x1a \
	__asm _emit 0x53 \
	__asm _emit 0x79 \
	__asm _emit 0x73 \
	__asm _emit 0x56 \
	__asm _emit 0x4d \
	__asm _emit 0x50 \
	__asm _emit 0x72 \
	__asm _emit 0x6f \
	__asm _emit 0x74 \
	__asm _emit 0x65 \
	__asm _emit 0x63 \
	__asm _emit 0x74 \
	__asm _emit 'D' \
	__asm _emit 'u' \
	__asm _emit 'm' \
	__asm _emit 'p' \
	__asm _emit 0x45 \
	__asm _emit 0x6e \
	__asm _emit 0x64 \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm _emit 0x90


//
// 代码效验水印 检测到异常自动结束进程
//

#define SP_CRC_AUTO() \
	__asm _emit 0xEB \
	__asm _emit 0x1f \
	__asm _emit 0x53 \
	__asm _emit 0x79 \
	__asm _emit 0x73 \
	__asm _emit 0x56 \
	__asm _emit 0x4d \
	__asm _emit 0x50 \
	__asm _emit 0x72 \
	__asm _emit 0x6f \
	__asm _emit 0x74 \
	__asm _emit 0x65 \
	__asm _emit 0x63 \
	__asm _emit 0x74 \
	__asm _emit 0x20 \
	__asm _emit 0x43 \
	__asm _emit 0x6f \
	__asm _emit 0x64 \
	__asm _emit 0x65 \
	__asm _emit 0x43 \
	__asm _emit 0x52 \
	__asm _emit 0x43 \
	__asm _emit 0x41 \
	__asm _emit 0x75 \
	__asm _emit 0x74 \
	__asm _emit 0x6f \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm _emit 0x90


//
// 代码效验水印 检测到异常返回一个非0值给传进来的局部变量
//

#define SP_CRC(flag) \
	__asm _emit 0xEB \
	__asm _emit 0x18 \
	__asm _emit 0x53 \
	__asm _emit 0x79 \
	__asm _emit 0x73 \
	__asm _emit 0x56 \
	__asm _emit 0x4d \
	__asm _emit 0x50 \
	__asm _emit 0x72 \
	__asm _emit 0x6f \
	__asm _emit 0x74 \
	__asm _emit 0x65 \
	__asm _emit 0x63 \
	__asm _emit 0x74 \
	__asm _emit 0x20 \
	__asm _emit 0x43 \
	__asm _emit 0x6f \
	__asm _emit 0x64 \
	__asm _emit 0x65 \
	__asm _emit 0x43 \
	__asm _emit 0x52 \
	__asm _emit 0x43 \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm mov eax, 0 \
	__asm mov dword ptr[flag], eax \
	__asm _emit 0x90 \
	__asm _emit 0x90


//
// 反调试水印 检测到异常返回一个非0值给传进来的局部变量
//

#define SP_ANTIDEBUG(flag) \
	__asm _emit 0xEB \
	__asm _emit 0x18 \
	__asm _emit 0x53 \
	__asm _emit 0x79 \
	__asm _emit 0x73 \
	__asm _emit 0x56 \
	__asm _emit 0x4d \
	__asm _emit 0x50 \
	__asm _emit 0x72 \
	__asm _emit 0x6f \
	__asm _emit 0x74 \
	__asm _emit 0x65 \
	__asm _emit 0x63 \
	__asm _emit 0x74 \
	__asm _emit 0x20 \
	__asm _emit 0x41 \
	__asm _emit 0x6e \
	__asm _emit 0x74 \
	__asm _emit 0x69 \
	__asm _emit 0x44 \
	__asm _emit 0x65 \
	__asm _emit 0x62 \
	__asm _emit 0x75 \
	__asm _emit 0x67 \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm mov eax, 0 \
	__asm mov dword ptr[flag], eax \
	__asm _emit 0x90 \


//
// 反调试水印 检测到异常自动结束进程
//

#define SP_ANTIDEBUG_AUTO(flag) \
	__asm _emit 0xEB \
	__asm _emit 0x24 \
	__asm _emit 0x53 \
	__asm _emit 0x79 \
	__asm _emit 0x73 \
	__asm _emit 0x56 \
	__asm _emit 0x4d \
	__asm _emit 0x50 \
	__asm _emit 0x72 \
	__asm _emit 0x6f \
	__asm _emit 0x74 \
	__asm _emit 0x65 \
	__asm _emit 0x63 \
	__asm _emit 0x74 \
	__asm _emit 0x20 \
	__asm _emit 0x41 \
	__asm _emit 0x6e \
	__asm _emit 0x74 \
	__asm _emit 0x69 \
	__asm _emit 0x44 \
	__asm _emit 0x65 \
	__asm _emit 0x62 \
	__asm _emit 0x75 \
	__asm _emit 0x67 \
	__asm _emit 0x41 \
	__asm _emit 0x75 \
	__asm _emit 0x74 \
	__asm _emit 0x6f \
	__asm _emit 0x90 \
	__asm _emit 0x90 \
	__asm jmp dword ptr ds : [flag] \
	__asm _emit 0x90 \

#endif	// __SPROTECT_SDK__