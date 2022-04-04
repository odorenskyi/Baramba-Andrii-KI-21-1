#include <iostream>
#include <fstream>
#include <ctime>
#include <algorithm>
#include <bitset>
#include "cmath"

using namespace std;

double s_calculation(float x, float z)
{
    const double pi = 3.14159;
    return (sqrt(1 + x) - 3 * cos(x)) / (log(pow(x, 2)) + 3 * sin(pi * x)) + pow(sqrt(pow(z, 3)) + 2, 2);
}

string BeaufortScale(int BeaufortScore) {
    switch (BeaufortScore){
        case 0:
            return "Wind speed less than 0.0003 km/s";
        case 1:
            return "Wind speed varies from 0.0003 to 0.0015 km/s";
        case 2:
            return "Wind speed varies from 0.0016 to 0,0094 km/s";
        case 3:
            return "Wind speed varies from 0.0094 to 0,0054 km/s";
        case 4:
            return "Wind speed varies from 0.0055 to 0,0079 km/s";
        case 5:
            return "Wind speed varies from 0.008 to 0,0107 km/s";
        case 6:
            return "Wind speed varies from 0.0108 to 0,0138 km/s";
        case 7:
            return "Wind speed varies from 0.0139 to 0,0171 km/s";
        case 8:
            return "Wind speed varies from 0.0172 to 0,0207 km/s";
        case 9:
            return "Wind speed varies from 0.0208 to 0,0224 km/s";
        case 10:
            return "Wind speed varies from 0.0245 to 0,0284 km/s";
        case 11:
            return "Wind speed varies from 0.0285 to 0,0326 km/s";
        case 12:
            return "Wind speed more than 0.0327 km/s";
        default:
            return "Invalid value";
    }
}

string helmetSize(int headSize){

    if(headSize < 475 || headSize > 624){
        return "Your size is not in the table";
    }

    headSize = round(headSize / 10);
    int minimalSize = 47;

    char helmetSizes[8][255] = {"Children's helmet, size S",
                                "Children's helmet, size M",
                                "Children's helmet, size L",
                                "Adult's helmet, size XS",
                                "Adult's helmet, size S",
                                "Adult's helmet, size M",
                                "Adult's helmet, size L",
                                "Adult's helmet, size XL",
                                };

    int i = 0;
    for(; minimalSize < 63; minimalSize++){
        if(minimalSize != headSize){
            if(minimalSize % 2 == 0) i++;
            continue;
        } else {
            return helmetSizes[i];
        }
    }
}

string binOnesZeros(int number){

    int binZeros = 0;
    int iter_num = ~number;

    while(iter_num){
        iter_num &= iter_num - 1;
        binZeros ++;
    }

    if(number < 0 || number > 8999){
        return "Wrong number! Your number: " + to_string(number);
    }

    switch(number >> 9 & 1){
        case 0:
            return "Number of binary 0 = " + to_string(binZeros);
        case 1:
            return "Number of binary 1 = " + to_string(32 - binZeros);
    }
}

void authorInformation(string path)
{
    ofstream fout;
    fout.open(path);
    fout << "Ìîäóëü ðîçðîáèâ Áàðàìáà Àíäð³é\n" <<
            "Öåíòðàëüíîóêðà¿íñüêèé Íàö³îíàëüíèé Òåõí³÷íèé Óí³âåðñèòåò\n" <<
            "Êðîïèâíèöüêèé, Óêðà¿íà, 2022\n";
    fout.close();
}

void randNum(string path)
{
    ofstream fout;
    srand(time(0));
    fout.open(path, ios_base::app);
    fout << 10 + rand() % 91;
    fout.close();
}

string readfile(string path)
{
    ifstream file;

    string text = "";
    string line;

    file.open(path);
    if(!file.is_open()) { return path + " is not open"; };
    while(getline(file, line)){
        text += line + '\n';
    }
    file.close();
    return text;
}

string to_lower(string text)
{
    string lower = "àáâã´äåºæçè³¿éêëìíîïðñòóôõö÷øùüþÿ";
    string upper = "ÀÁÂÃ¥ÄÅªÆÇÈ²¯ÉÊËÌÍÎÏÐÑÒÓÔÕÖ×ØÙÜÞß";
    for(int i = 0; i < text.length(); i++){
        for(int j = 0; j < upper.length(); j++){
            if(text[i] == upper[j]){
                text[i] = lower[j];
                break;
            }
        }
    }
    return text;
}

void punctuation(string path)
{
    string origPoem = readfile("M_Rylsky_poem.txt");
    string inputPoem = readfile("inputText.txt");

    origPoem = to_lower(origPoem);
    inputPoem = to_lower(inputPoem);

    string signs = "?!,.’;:-";
    char origPunct[8];
    char inputPunct[8];
    int k = 0;
    for(int i = 0; i < origPoem.length(); i++){
        for(int j = 0; j < signs.length(); j++){
                if(origPoem[i] == signs[j]){
                    origPunct[k] = origPoem[i];
                    k++;
                    break;
                }
        }
    }

    k = 0;
    for(int i = 0; i < inputPoem.length(); i++){
        for(int j = 0; j < signs.length(); j++){
                if(inputPoem[i] == signs[j]){
                    inputPunct[k] = inputPoem[i];
                    k++;
                    break;
                }
        }
    }

    bool result = equal(begin(origPunct), end(origPunct), begin(inputPunct), end(inputPunct));

    ofstream fout;
    fout.open(path, ios_base::app);
    switch(result){
    case 0:
        fout << "\nÂ³äïîâ³äíî äî àâòîðñüêîãî îðèã³íàëó, ó âõ³äíîìó ôàéë³ ïóíêòóàö³éí³ ïîìèëêè íàÿâí³";
    case 1:
        fout << "\nÂ³äïîâ³äíî äî àâòîðñüêîãî îðèã³íàëó, ó âõ³äíîìó ôàéë³ ïóíêòóàö³éíèõ ïîìèëîê íåìàº";
    }
    fout.close();
}

void alfabet(string path)
{
    ofstream fout;
    fout.open(path, ios_base::app);
    char letter = 'A';
    int j = 0;
    for(int i = 0; i < 26; i++){
        fout << letter << " ";
        letter++;
        j++;
        if(j == 4){ fout << "\n"; j = 0; };
        if(i == 23) { fout << "  "; };
    }
    fout.close();
}

void dateTime(string path)
{
    ofstream fout;
    fout.open(path, ios_base::app);
    time_t curtime;
    time(&curtime);
    fout << "\n\n" << ctime(&curtime);
    fout.close();
}

void binNumber(int number, string path)
{
    ofstream fout;
    fout.open(path, ios_base::app);
    fout << "\n" << bitset<16> (number);
    fout.close();
}
