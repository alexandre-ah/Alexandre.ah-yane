/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_str_to_word_array
*/

#include "tests_includes.h"

Test(my_str_to_word_array, test)
{
    cr_assert_eq(my_str_to_word_array(NULL, " "), NULL);
}

Test(my_str_to_word_array, test2)
{
    cr_assert_eq(my_str_to_word_array("je sui sun etst", NULL), NULL);
}

Test(my_str_to_word_array, test3)
{
    char *tab[5] = {"je", "suis", "un", "test", NULL};
    char **tab2 = my_str_to_word_array("je suis un test", " ");

    for (int i = 0; tab[i]; i++)
        cr_assert_str_eq(tab2[i], tab[i]);
}
