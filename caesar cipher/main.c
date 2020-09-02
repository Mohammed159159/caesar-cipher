#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void encrypt();
void decrypt();

int key;
char text[1000], choice[10], character;

int main() {
    //remember the sleep trick and how you inserted the icon and could change the font and background color


    printf("                                                        Welcome to Cesar cipher!\n\n\n\n\n");
    printf("                            Do you Want to 'encrypt' or 'decrypt' text?(type the answer from quotes): ");
    scanf("%s", choice);

    printf("\n\n\n");

    if (strcmp(choice, "encrypt") == 0)
        encrypt();
    else if (strcmp(choice, "decrypt") == 0)
        decrypt();
    else printf("Unvalid... Restart Program");


}

void encrypt()
{
    printf("                    Enter key: ");
    scanf("%d", &key);
    if (key != sizeof(int))
    {
        printf("Unvalid... Restart Program");
        return 1;
    }
    printf("                 Enter Plain Text: ");
    scanf(" %[^\n]%*c", text);      //best way to get full strings
    for (int i = 0; i < strlen(text); i++)
    {
        character = (int)text[i];

        if (character >= 65 && character <= 90)
        {
            character -= 65;
            character += key;
            character %= 26;
            character += 65;
            text[i] = (char)character;
        }
        else if (character >= 97 && character <= 122)
        {
            character -= 97;
            character += key;
            character %= 26;
            character += 97;
            text[i] = (char)character;
        }
        else
            text[i] == (char)character;
    }

    printf("\n                                                    Enscrypted text: %s", text);
}

void decrypt()
{
    printf("                          Enter key: ");
    scanf("%d", &key);
    if (key != sizeof(int))
    {
        printf("Unvalid... Restart Program");
        return 1;
    }
    printf("                    Enter Enscrypted Text: ");
    scanf(" %[^\n]%*c", text);      //best way to get full strings
    for (int i = 0; i < strlen(text); i++)
    {
        character = (int)text[i];

        if (character >= 65 && character <= 90)
        {
            character -= 65;
            character -= key;
            character %= 26;
            character += 65;
            text[i] = (char)character;
        }
        else if (character >= 97 && character <= 122)
        {
            character -= 97;
            character -= key;
            character %= 26;
            character += 97;
            text[i] = (char)character;
        }
        else
            text[i] == (char)character;
    }

    printf("\n                                                   decrypted text: %s", text);
}
































/*for(int i = 0; i < strlen(text); i++)
   {
       //if(character == *" " || character == *"!" || character == *"?")
         //  text[i] = character;
       //printf("\n%c",character);


   }*/




