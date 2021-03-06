// Dhananjay Yelwande
// 10 May 2019
// Problem Set 2 : Caesar

// The program coverts plaintext to ciphertext

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string args[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar <key>");
        return 1;
    }
    
    // Store the division remainder if k is less than 26
    int k = atoi(args[1]) % 26;
    
    // Input prompt and Output print
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (!isalpha(plaintext[i]))
        {
            printf("%c", plaintext[i]);
            continue;
        }

        int ascii_offset = isupper(plaintext[i]) ? 65 : 97;
        int pi = plaintext[i] - ascii_offset;
        int ci = (pi + k) % 26;

        printf("%c", ci + ascii_offset);
    }

    printf("\n");
    return 0;
}
