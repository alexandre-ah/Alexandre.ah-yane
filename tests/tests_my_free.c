/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_free
*/

#include "tests_includes.h"

Test(my_free, test1)
{
    my_free(NULL);
}

Test(my_free, test2)
{
    char *str = malloc(sizeof(100));
    my_free(str);
}