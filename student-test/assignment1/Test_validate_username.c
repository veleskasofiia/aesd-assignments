#include "unity.h"
#include <stdbool.h>
#include <stdlib.h>
#include "../../examples/autotest-validate/autotest-validate.h"
#include "../../assignment-autotest/test/assignment1/username-from-conf-file.h"

/**
* This function should:
*   1) Call the my_username() function in autotest-validate.c to get your hard coded username.
*   2) Obtain the value returned from function malloc_username_from_conf_file() in username-from-conf-file.h within
*       the assignment autotest submodule at assignment-autotest/test/assignment1/
*   3) Use unity assertion TEST_ASSERT_EQUAL_STRING_MESSAGE to verify the two strings are equal. 
*/
void test_validate_my_username()
{
    // Get the hardcoded username from my_username()
    const char* hardcoded_username = my_username();

    // Get the username from the config file
    char* username_from_conf_file = malloc_username_from_conf_file("username-from-conf-file.h");

    // Verify the two usernames are equal
    TEST_ASSERT_EQUAL_STRING_MESSAGE(hardcoded_username, username_from_conf_file, "The usernames do not match!");

}
