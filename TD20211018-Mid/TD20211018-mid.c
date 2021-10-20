/*
    File:       /workspaces/INFO1/TD/TD20211018-Mid/TD20211018-mid.c
    Created on: 2021-10-18 19:58:13
    by:         πR

    Description 
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char input_text[20] = "Texte\n";
    char output_text[20] = "                    \n";
    char test[20] = "";
    int text_size = 0;
    int text_shift = 0;

    printf("Introduisez le texte que vous voulez centraliser : ");
    gets(input_text);

    text_size = strlen(input_text);

    text_shift = 10 - (text_size / 2);
    memcpy(&output_text[text_shift], input_text, text_size);

    printf("%s", output_text);

    /*
    if (text_size > 20)
    {
        return -1;
    }
    else if (text_size % 2)
    {
        text_size++;
    }*/

    return 0;
}