#include <stdio.h>

// Function to print a separator line for better readability
void print_separator()
{
    printf("-------------------------\n");
}

int main()
{
    printf("Simple Console Compass Rose\n");
    print_separator();

    // Print cardinal directions
    printf("        N\n");
    printf("        |\n");
    printf("        |\n");
    printf("W ------+------ E\n");
    printf("        |\n");
    printf("        |\n");
    printf("        S\n");

    print_separator();

    printf("Compass Rose with Intercardinal Directions:\n");
    print_separator();

    // Print compass rose with cardinal and intercardinal directions
    printf("        N\n");
    printf("       /|\\\n");
    printf("      NW|NE\n");
    printf("       \\|/\n");
    printf("W ------+------ E\n");
    printf("       /|\\\n");
    printf("      SW|SE\n");
    printf("       \\|/\n");
    printf("        S\n");

    print_separator();

    printf("This is a text-based representation.\n");
    printf("For a graphical compass, a graphics library would be needed.\n");

    return 0; // Indicate successful execution
}