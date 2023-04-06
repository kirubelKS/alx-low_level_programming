#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "__hash_table.h"

/**
 * main - check the code for 
 * 
 * Return: Always Exit_sucess
*/
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}