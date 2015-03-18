#include "StdAfx.h"
#include "functions.h"
#include "form1.h"


void Code::Set_out(wchar_t* out)
{
	out_str = out;
}

void Code::Set_size(__int64 size)
{
	size_file = size;
	str_res = new char [size_file];
}
char* Code::utf()
{
	
	__int64 size_str = WideCharToMultiByte (CP_UTF8, 0, out_str, -1, 0, 0, 0, 0);
	WideCharToMultiByte(CP_UTF8, 0, out_str , -1, str_res, size_str, NULL, NULL); 
	return str_res;
}

char* Code::koir()
{
	
	__int64 size_str = WideCharToMultiByte (20866, 0, out_str, -1, 0, 0, 0, 0);
	WideCharToMultiByte (20866, 0, out_str, -1, str_res, size_str, NULL, NULL);
	return str_res;
}

char* Code::koiu()
{
	
	__int64 size_str = WideCharToMultiByte (21866, 0, out_str, -1, 0, 0, 0, 0);
	WideCharToMultiByte (21866, 0 , out_str, -1, str_res, size_str, NULL, NULL);
	return str_res;
}

char*Code::iso()
{
	
	__int64 size_str = WideCharToMultiByte (50220, 0, out_str, -1, 0, 0, 0, 0);
	WideCharToMultiByte (50220, 0, out_str, -1, str_res, size_str, NULL, NULL);
	return str_res;
}

char*Code::ibm()
{ 
	
	__int64 size_str = WideCharToMultiByte (855, 0, out_str, -1, 0, 0, 0, 0);
	WideCharToMultiByte (855, 0, out_str, -1, str_res, size_str, NULL, NULL);
	return str_res;
}

char*Code::utf7()
{
	
	__int64 size_str = WideCharToMultiByte (65000, 0, out_str, -1, 0, 0, 0, 0);
	WideCharToMultiByte (65000, 0, out_str, -1, str_res, size_str, NULL, NULL);
	return str_res;
}

char*Code::utf16()
{
	
	WideCharToMultiByte (1200, 0, out_str, -1, str_res, 500, NULL, NULL);
	return str_res;
}
