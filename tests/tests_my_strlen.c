/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_strlen
*/

#include "tests_includes.h"

Test(my_strlen, tests__my_strlen)
{
    cr_assert_eq(my_strlen("je suis beu"), 11);
}

Test(my_strlen, tests_my_strlen2)
{
    cr_assert_eq(my_strlen(NULL), -1);
}

Test(my_strlen, tests_my_strlen3)
{
    cr_assert_eq(my_strlen("Je suis beuuuuuuuuuuuuuuuuuuu"), 29);
}

Test(my_strlen, tests_my_strlen4)
{
    cr_assert_neq(my_strlen("je suis un test"), NULL);
}