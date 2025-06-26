#include <stdio.h> // Required for input/output operations like printf and scanf

/**
 * @brief Calculates the output rotations and speed ratio of a simple gear train.
 *
 * This function takes the number of teeth on the input (driving) gear and
 * the output (driven) gear, along with the input gear's rotations, to
 * determine the output gear's rotations and the overall speed ratio.
 *
 * @param inputTeeth The number of teeth on the input (driving) gear.
 * @param outputTeeth The number of teeth on the output (driven) gear.
 * @param inputRotations The number of rotations of the input gear.
 * @param outputRotationsPtr A pointer to a double where the calculated
 * output rotations will be stored.
 * @param speedRatioPtr A pointer to a double where the calculated
 * speed ratio (input speed / output speed) will be stored.
 */
void calculateGearMechanism(int inputTeeth, int outputTeeth, double inputRotations,
                            double *outputRotationsPtr, double *speedRatioPtr)
{
    // Basic principle: InputTeeth * InputRotations = OutputTeeth * OutputRotations
    // From this, OutputRotations = (InputTeeth * InputRotations) / OutputTeeth

    if (outputTeeth == 0)
    {
        // Prevent division by zero if the output gear has no teeth (invalid scenario)
        printf("Error: Output gear cannot have zero teeth.\n");
        *outputRotationsPtr = 0.0;
        *speedRatioPtr = 0.0;
        return;
    }

    // Calculate output rotations
    *outputRotationsPtr = (double)inputTeeth * inputRotations / outputTeeth;

    // Calculate speed ratio
    // Speed ratio = (InputTeeth / OutputTeeth) - or - (OutputRotations / InputRotations)
    // Here we'll define it as the ratio of input speed to output speed,
    // which is inversely proportional to the teeth ratio.
    *speedRatioPtr = (double)outputTeeth / inputTeeth;
}

int main()
{
    int teeth1, teeth2;
    double rotations1;
    double rotations2;
    double ratio;

    printf("--- Simple Two-Gear Mechanism Calculator ---\n");

    // Get input gear teeth count from the user
    printf("Enter the number of teeth on the Input Gear (driving gear): ");
    // Using %d to read an integer, &teeth1 passes the memory address
    if (scanf("%d", &teeth1) != 1 || teeth1 <= 0)
    {
        printf("Invalid input. Please enter a positive integer for teeth count.\n");
        return 1; // Exit with an error code
    }

    // Get output gear teeth count from the user
    printf("Enter the number of teeth on the Output Gear (driven gear): ");
    if (scanf("%d", &teeth2) != 1 || teeth2 <= 0)
    {
        printf("Invalid input. Please enter a positive integer for teeth count.\n");
        return 1; // Exit with an error code
    }

    // Get input gear rotations from the user
    printf("Enter the number of rotations of the Input Gear: ");
    // Using %lf to read a double for rotations
    if (scanf("%lf", &rotations1) != 1)
    {
        printf("Invalid input. Please enter a numeric value for rotations.\n");
        return 1; // Exit with an error code
    }

    // Call the function to calculate the gear mechanism properties
    calculateGearMechanism(teeth1, teeth2, rotations1, &rotations2, &ratio);

    printf("\n--- Calculation Results ---\n");
    printf("Input Gear (Teeth: %d, Rotations: %.2f)\n", teeth1, rotations1);
    printf("Output Gear (Teeth: %d)\n", teeth2);
    printf("Output Gear Rotations: %.2f\n", rotations2);
    printf("Speed Ratio (Input Speed : Output Speed): 1 : %.2f\n", ratio);
    printf("This means for every 1 rotation of the Input Gear, the Output Gear rotates %.2f times.\n", rotations2 / rotations1);

    return 0; // Indicate successful execution
}