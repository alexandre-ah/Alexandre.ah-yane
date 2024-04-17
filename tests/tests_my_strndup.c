/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_strndup
*/

#include "tests_includes.h"

Test(my_strndup, test)
{
    cr_assert_neq(my_strndup("je suis un test", 5), 5);
}

Test(my_strndup, test1)
{
    cr_assert_eq(my_strndup("je suis un test", -1), NULL);
}

Test(my_strndup, test2)
{
    cr_assert_eq(my_strndup(NULL, 2), NULL);
}