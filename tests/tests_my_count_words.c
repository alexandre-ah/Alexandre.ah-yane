/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_count_words
*/

#include "tests_includes.h"

Test(my_count_words, test1)
{
    cr_assert_eq(my_count_words(NULL, "je"), -1);
}

Test(my_count_words, test12)
{
    cr_assert_eq(my_count_words("je suis un test", " "), 4);
}


Test(my_count_words, test13)
{
    cr_assert_eq(my_count_words("je suis un", NULL), -1);
}



