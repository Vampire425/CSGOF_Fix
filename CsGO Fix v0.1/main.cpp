//Software Developer: Vampire425
//Software Version: 0.1
// APP 64-bit ONLY

#include <iostream>
#include <windows.h>
#include <system_error>


using namespace std;

int main()
{
    setlocale (LC_ALL, "Russian"); // Эта команда требуется чтобы при выводе текста с консоли, он был на русском языке, а не писал непонятную фигню по типу иероглифов
    cout << "Добро пожаловать в CsGO Fix v0.1!, нажмите ПРОБЕЛ чтобы программа приступила к выполнению алгоритма" << endl;
    system ("pause");
    system ("C:\Program Files (x86)\Steam\bin\SteamService.exe /repair"); // Запуск службы для восстановления клиента Steam
    system ("bcdedit /deletevalue nointegritychecks");
    system ("bcdedit /deletevalue loadoptions");
    system ("bcdedit /debug off");
    system ("bcdedit /deletevalue nx");
    system ("sfc /scannow"); // Команда на проверку и восстановление поврежденных системных файлов Windows
    cout << "Программа выполнила свою работу, теперь нажмите кнопку ПРОБЕЛ для перезагрузки системы чтобы настройки вступили в силу" << endl;
    system ("pause");
    system ("shutdown /r /t 5"); // Эта команда выполняет перезагрузку компьютера через 5 секунд после того как пользователь нажмет Пробел
    return 0;
}
