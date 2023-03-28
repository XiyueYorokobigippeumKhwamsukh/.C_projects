#include <stdlio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main (void)
{
	int score;	/* the score of each player or players*/
	char username[20]; /* the chosen username or random name for each player*/
	int num_players; /* the number of players either 1 or multiple*/
	int hints_left = 3; /* the number of free hints remaining per level*/
	int level = 1; /* current level of each player, starting from 1*/
	int num_monsters = 0; /* the number of monsters killed*/
	int lives = 100; /* the lives % each player has per level */
	int word_length = 0; /* the length of the pre-generted random word per level*/
	int correct_words = 0; /* the number of correct words the player or players have got but not the intended correct word*/
	int max_level = 15; /* the maximum level of the game*/
	int difficulty = 1; /* the current difficulty level the player is at*/
	char current_word[20]; /* the current pre-generated random word*/
	char letters[7]; /* an array to hold the letters collected from the monsters*/
	char guess[20]; /* the player's current guess for the pre-generated word, musthave a maximum length of 20 characters*/
}
