//Software Developer: Vampire425
//Software Version: 0.1
// APP 64-bit ONLY

#include <iostream>
#include <windows.h>
#include <system_error>


using namespace std;

int main()
{
    setlocale (LC_ALL, "Russian"); // ��� ������� ��������� ����� ��� ������ ������ � �������, �� ��� �� ������� �����, � �� ����� ���������� ����� �� ���� ����������
    cout << "����� ���������� � CsGO Fix v0.1!, ������� ������ ����� ��������� ���������� � ���������� ���������" << endl;
    system ("pause");
    system ("C:\Program Files (x86)\Steam\bin\SteamService.exe /repair"); // ������ ������ ��� �������������� ������� Steam
    system ("bcdedit /deletevalue nointegritychecks");
    system ("bcdedit /deletevalue loadoptions");
    system ("bcdedit /debug off");
    system ("bcdedit /deletevalue nx");
    system ("sfc /scannow"); // ������� �� �������� � �������������� ������������ ��������� ������ Windows
    cout << "��������� ��������� ���� ������, ������ ������� ������ ������ ��� ������������ ������� ����� ��������� �������� � ����" << endl;
    system ("pause");
    system ("shutdown /r /t 5"); // ��� ������� ��������� ������������ ���������� ����� 5 ������ ����� ���� ��� ������������ ������ ������
    return 0;
}
