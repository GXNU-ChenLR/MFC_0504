// Win32D.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "Win32D.h"
#include "math.h"

// ���ǵ���������һ��ʾ��
WIN32D_API int nWin32D=0;

// ���ǵ���������һ��ʾ����
WIN32D_API int fnWin32D(void)
{
    return 42;
}

WIN32D_API int factorial2(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n*factorial2(n - 1);
}

float FAC2::convert(float deg2) {
	return deg2 / atan(1.0);
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� Win32D.h
CWin32D::CWin32D()
{
    return;
}
