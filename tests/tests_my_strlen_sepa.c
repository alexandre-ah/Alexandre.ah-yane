/*
** EPITECH PROJECT, 2024
** g
** File description:
** tests_my_strlen_sepa
*/


#include "tests_includes.h"

Test(my_strlen_sepa, test1)
{
    cr_assert_eq(my_strlen_sepa("je suis", " "), 2);
}

Test(my_strlen_sepa, test2)
{
    cr_assert_eq(my_strlen_sepa("je suis un test", NULL), -1);
}

Test(my_strlen_sepa, test3)
{
    cr_assert_eq(my_strlen_sepa(NULL, "je"), -1);
}
