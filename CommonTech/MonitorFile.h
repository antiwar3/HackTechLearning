#ifndef _MONITOR_FILE_H_
#define _MONITOR_FILE_H_


#include <Windows.h>
#include <stdio.h>

// ���ֽ��ַ���ת���ֽ��ַ���
void W2C(wchar_t *pwszSrc, int iSrcLen, char *pszDest, int iDestLen);

// Ŀ¼��ض��߳�
UINT MonitorFileThreadProc(LPVOID lpVoid);

// ����Ŀ¼��ض��߳�
void MonitorFile(const char *pszDirectory);


#endif