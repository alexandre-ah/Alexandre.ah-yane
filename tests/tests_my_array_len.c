/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_array_len
*/

#include "tests_includes.h"

Test(my_array_len, test1)
{

    char *tab[4] = {"je", "suis", "un", NULL};
    
    cr_assert_eq(my_array_len(tab), 3);
}

Test(my_array_len, test2)
{

    char *tab[1] = {NULL};
    
    cr_assert_eq(my_array_len(tab), NULL);
}

Test(my_array_len, test3)
{
    cr_assert_eq(my_array_len(NULL), -1);
}

