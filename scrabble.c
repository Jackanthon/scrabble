#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

//assign points
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int compute_score(string word);

int main(void)
{
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    //print winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

    int compute_score(string word)
{
    char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
    'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; //store alphabets
    int score = 0;

    //iterate through the word1
    for (int i = 0; i < strlen(word); i++)
    {

        for (int a = 1; a < 16; a++ )
        {
            if (alphabet[a] == tolower(word[i]))
            {
            word[i] = POINTS[a];
            score = score + word[i];     //sum the scores
            }
        }
    }
    return score;
}
