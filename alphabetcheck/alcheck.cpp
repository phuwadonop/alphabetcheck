#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>

using namespace std;

int main() {

    char text[1000];

    int al_capital[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
    int max = 0;
    int al_lower[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

    scanf("%[^\n]", text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] <= 90 && text[i] >= 65)
        {
            int a = int(text[i]) - 65;
            al_capital[a]++;
        }
        if (text[i] <= 122 && text[i] >= 97)
        {
            int a = int(text[i]) - 97;
            al_lower[a]++;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (i == 0)
            {
                if (al_capital[j] > max) max = al_capital[j];
            }
            if (i == 1)
            {
                if (al_lower[j] > max) max = al_lower[j];
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (i == 0)
            {
                if (al_capital[j] == max) cout << char(j + 65) << " ";
            }
            if (i == 1)
            {
                if (al_lower[j] == max) cout << char(j + 97) << " ";
            }
        }
    }
}