#ifndef FUNCTIONS_H
#define FUNCTIONS_H
class Code
{
private:
	char* str_res;
	wchar_t* out_str;
	__int64 size_file;

public:
	char* utf();
	char* koir();
	char* koiu();
	char* iso();
	char* ibm();
	char* utf7();
	char* utf16();
	Code(){}
	~Code()
	{
		delete[] out_str;
		delete[] str_res;
	}

	void Set_out(wchar_t* out);
	void Set_size(__int64 size);
};
#endif