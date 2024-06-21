#include "main.h"
/**
 * main - a lowercase checker
 *
 * Return: (1) if works, (0) if doesn't.
 */

int _islower(int c) {
	if (c >= 'a'  && c <= 'z') {
		return (1);
	}
	return (0);
}
