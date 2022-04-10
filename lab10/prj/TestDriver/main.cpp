#include <iostream>
#include <cstring>
#include <conio.h>
#include <fstream>
#include "ModulesBaramba.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");

    fstream file;
    string outputPath = "outputText.txt";
    string inputPath = "inputText.txt";

    file.open(inputPath, ios_base::out);
    system("chcp 65001 & cls");
    file << "Як парость виноградної лози, плекайте мову.\n"
         << "Пильно й нестанно політь бур’ян.\n"
         << "Чистіша від сльози вона хай буде.\n"
         << "Вірно й слухняно нехай вона щоразу служить вам,\n"
         << "Хоч і живе своїм життям.";
    file.close();


    string TC_1_1_expectedResult = "Модуль розробив Барамба Андрій\nЦентральноукраїнський Національний Технічний Університет\nКропивницький, Україна, 2022\n";

    cout << authorInformation(outputPath) << "\b";
    string TC_1_1_actualResult = readfile(outputPath);

    int TC_1_1_result = 0;

    cout << "=======================================================================================================================" << endl
         << "\t\t\t\t\t\tTASK 10.1 TEST CASE #1" << endl
         << "\t\t\t\t\t     ЗАПИС авторської інформації\n\n"
         << "Incoming data: Шлях до файлу outputText.txt\n\n"
         << "Expected result:\n\n" << TC_1_1_expectedResult << "\n"
         << "Actual result:\n\n" << TC_1_1_actualResult << "\n";

         if(TC_1_1_actualResult == TC_1_1_expectedResult){
            cout << "\tTest case #1 PASSED" << endl;
            TC_1_1_result++;
         } else cout << "\tTest case #1 FAILED" << endl;

         file.open(outputPath, ios_base::out);
         file << "";
         file.close();

    cout << "=======================================================================================================================" << endl << endl;


    cout << randNum(outputPath) << "\b";

    string TC_1_2_actualResult = readfile(outputPath);

    int TC_1_2_result = 0;

    cout << "=======================================================================================================================" << endl
         << "\t\t\t\t\t\tTASK 10.1 TEST CASE #2" << endl
         << "\t\t\t\t\t ЗАПИС випадкового числа від 10 до 100\n\n"
         << "Incoming data: Шлях до файлу outputText.txt\n\n"
         << "Expected result: Випадкове число від 10 до 100\n\n"
         << "Actual result: " << TC_1_2_actualResult << "\n";


         cout << "Чи \"actual result\" є числом від 10 до 100? (Так - Y, Ні - N)\n" << endl;
         while(true){
             switch(getch()){
             case 'Y': cout << "\tTEST CASE #2 PASSSED" << endl; break;
             case 'N': cout << "\tTEST CASE #2 FAILED" << endl; break;
             default: cout << "\a"; continue;
             }
             break;
         }
         TC_1_2_result++;


         file.open(outputPath, ios_base::out);
         file << "";
         file.close();

    cout << "=======================================================================================================================" << endl << endl;


    string TC_1_3_expectedResult = "\nВідповідно до авторського оригіналу, у вхідному файлі пунктуаційних помилок немає\n";

    cout << punctuation(outputPath) << "\b";
    string TC_1_3_actualResult = readfile(outputPath);

    int TC_1_3_result = 0;

    cout << "=======================================================================================================================" << endl
         << "\t\t\t\t\t\tTASK 10.1 TEST CASE #3" << endl
         << "\t\t      ЗАПИС повідомлення, чи текст віршу з вхідного файла має пунктуаційні помилки\n"
         << "\t\t\t\t\t(відповідно до авторського оригіналу)\n\n"
         << "Incoming data: Шлях до файлу outputText.txt\n\n"
         << "Expected result:\n" << TC_1_3_expectedResult << "\n\n"
         << "Actual result:\n" << TC_1_3_actualResult << "\n";

         if(TC_1_3_actualResult == TC_1_3_expectedResult){
            cout << "\tTEST CASE #3 PASSED" << endl;
            TC_1_3_result++;
         } else cout << "\tTEST CASE #3 FAILED" << endl;

         file.open(outputPath, ios_base::out);
         file << "";
         file.close();

    cout << "=======================================================================================================================" << endl << endl;

    if(TC_1_1_result == TC_1_2_result == TC_1_3_result == 1){
        cout << authorInformation(outputPath) << "\b"
        << randNum(outputPath) << "\b"
        << punctuation(outputPath) << "\b";
    }


    string TC_2_1_expectedResult = "Як парость виноградної лози, плекайте мову.\n"
                                   "Пильно й нестанно політь бур’ян.\n"
                                   "Чистіша від сльози вона хай буде.\n"
                                   "Вірно й слухняно нехай вона щоразу служить вам,\n"
                                   "Хоч і живе своїм життям."
                                   "\nA B C D \nE F G H \nI J K L \nM N O P \nQ R S T \nU V W X \n  Y Z \n";

    cout << alphabet(inputPath) << "\b";
    string TC_2_1_actualResult = readfile(inputPath);

    cout << "=======================================================================================================================" << endl
         << "\t\t\t\t\t\tTASK 10.2 TEST CASE #1" << endl
         << "\t\t\t\t    ДОЗАПИС англійської абетки (у верхньому регістрі)\n\n"
         << "Incoming data: Шлях до файлу inputText.txt\n\n"
         << "Expected result:\n\n" << TC_2_1_expectedResult << "\n"
         << "Actual result:\n\n" << TC_2_1_actualResult << "\n";

         if(TC_2_1_actualResult == TC_2_1_expectedResult) cout << "\tTest case #1 PASSED" << endl;
         else cout << "\tTest case #1 FAILED" << endl;

    cout << "=======================================================================================================================" << endl << endl;


    cout << dateTime(inputPath) << "\b";
    string TC_2_2_actualResult = readfile(inputPath);

    cout << "=======================================================================================================================" << endl
         << "\t\t\t\t\t\tTASK 10.2 TEST CASE #2" << endl
         << "\t\t\t\t\t    Дата й час дозапису інформації\n\n"
         << "Incoming data: Шлях до файлу inputText.txt\n\n"
         << "Expected result: Дата й час дозапису інформації\n\n"
         << "Actual result: \n\n" << TC_2_2_actualResult << "\n";


         cout << "Чи \"actual result\" співпадають з поточним часом (можлива похибка: одна хвилина)? (Так - Y, Ні - N)\n" << endl;
         while(true){
             switch(getch()){
                 case 'Y': cout << "\tTEST CASE #2 PASSSED" << endl; break;
                 case 'N': cout << "\tTEST CASE #2 FAILED" << endl; break;
                 default: cout << "\a"; continue;
             }
             break;
         }

    cout << "=======================================================================================================================" << endl << endl;


    double TC_3_1_expectedResult = 102.261;
    double TC_3_1_actualResult = floor(s_calculation(3.0, 4.0) * 1000) / 1000;

    cout << "=======================================================================================================================" << endl
         << "\t\t\t\t\t\tTASK 10.3 TEST CASE #1" << endl
         << "\t\t\t\t       ДОЗАПИС результату функції s_calculation\n\n"
         << "Incoming data: Шлях до файлу outputText.txt\n\n"
         << "Expected result:\n\n" << TC_3_1_expectedResult << "\n\n"
         << "Actual result:\n\n" << TC_3_1_actualResult << "\n\n";

         if(TC_3_1_actualResult == TC_3_1_expectedResult){
                cout << "\tTest case #1 PASSED" << endl
                     << "\n\tРезультат s_calculation записано в файл\n\n";
                file.open(outputPath, ios_base::app);
                file << s_calculation(3.0, 4.0);
                file.close();
         } else cout << "\tTest case #1 FAILED" << endl;

         string outoutFileContents = readfile(outputPath);
         cout << "Вміст файлу:" << endl << endl << outoutFileContents;

    cout << "=======================================================================================================================" << endl << endl;


    file.open(outputPath, ios_base::out);
    file << "";
    file.close();

    int numbers[3] = {432, 543, 1023};
    char TC_3_2_expectedResult[3][255] = {"\n0000000110110000\n",
                                        "\n0000001000011111\n",
                                        "\n0000001111111111\n"};

    unsigned short int TC_3_2_result = 0;

    for(int i = 0; i < 3; i++){
        cout << "=======================================================================================================================" << endl
             << "\t\t\t\t\t\tTASK 10.3 TEST CASE #3." << i + 1 << endl
             << "\t\t\t\t\t    ДОЗАПИС числа у двійковому коді\n\n"
             << "Incoming data: Шлях до файлу outputText.txt, число " << numbers[i] << "\n\n"
             << "Expected result:\n" << TC_3_2_expectedResult[i] << "\n";

             cout << binNumber(numbers[i], outputPath) << "\b";
             string TC_3_2_actualResult = readfile(outputPath);
             cout << "Actual result:\n" << TC_3_2_actualResult << "\n\n";

         if(TC_3_2_actualResult == TC_3_2_expectedResult[i]){
                cout << "\tTest case #3." << i + 1 << " PASSED" << endl;
                TC_3_2_result++;
         } else cout << "\tTest case #3." << i + 1 << " FAILED" << endl;

         file.open(outputPath, ios_base::out);
         file << "";
         file.close();

         cout << "=======================================================================================================================" << endl << endl;
    }


    cout << "=======================================================================================================================" << endl;
    if(TC_3_2_result == 3){
        cout << "\nУсі три тест кейса пройшли перевірку! Останнє число записано у файл у двійковому коді";
        cout << authorInformation(outputPath) << "\b"
        << randNum(outputPath) << "\b"
        << punctuation(outputPath) << "\b";
        file.open(outputPath, ios_base::app);
        file << s_calculation(3.0, 4.0);
        file.close();
        cout << binNumber(1023, outputPath) << "\b";
    }

    outoutFileContents = readfile(outputPath);
    cout << "Вміст файлу:" << endl << endl << outoutFileContents << endl;
    cout << "=======================================================================================================================" << endl << endl;

    cout << "Для завершення натисніть Enter..." << endl;
    cin.get();

    return 0;
}
