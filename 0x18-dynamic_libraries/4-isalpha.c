#include "main.h"
/**
 * _isalpha - Function Check if the character is alphabetical
 * character.
 * @c: Character being checked.
 * Return: Alphabetical character.
 */
int _isalpha(int c)
{
	return ((_islower(c) || _isupper(c)));
}
