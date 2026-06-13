/*
 * File: main.c
 * Author: Daniel Bretschneider
 * Created: 26.05.2026
 *
 * Description:
 *     List available wifi networks and show additional parameters.
 *
 * Usage:
 *     Compile with your preferred C compiler, for example:
 *         gcc -Wall -Wextra -o wifilist main.c
 *
 * Notes:
 *     - Learn how to use c to access information about wireless networks
 *     - The values shown in the program have to update (dynamic list)
 *     - Make it a linux app.
 *     - Optional: Write the same program in Rust and check for differences.
 *
 */

 // Header file
 #include <stdio.h>

 // function prototypes
void print_msg(const char *str);


 /*
 * Function: main
 * ---------------------------
 * main method
 *
 * Parameters:
 *     no parameters
 *
 * Returns:
 *     0  on success
 *    -1  on failure
 * 
 */
 int main()
 {
    // printing the most iconic line in programming history
    print_msg("WifiList v.1.0 started");

    // exit
    return 0;
 }


 /*
 * Function: print_msg
 * ---------------------------
 * Prints a string to standard output using printf add a prefix.
 *
 * Parameters:
 *     str  - Pointer to a null-terminated string to print.
 *
 * Returns:
 *     no return value
 *
 * Notes:
 *     The function does append a newline.
 */
void print_msg(const char *str) 
{
    // print error message if str is NULL
    if (str == NULL)
    {
        fprintf(stderr, "Error: NULL string passed to print_string_safe\n");
    }

    // print msg with a prefix and newline character at end
    printf("[*] %s\n", str);
}