#include <stdio.h>

int main()
{
    // Rows represent different sensors
    // Columns represent different measurements
    float sensorData[3][5];

    int i, j;

    printf("ECE Sensor Data Monitoring System\n");
    printf("---------------------------------\n");

    // Input sensor readings
    for (i = 0; i < 3; i++)
    {
        printf("\nEnter 5 readings for Sensor %d:\n", i + 1);

        for (j = 0; j < 5; j++)
        {
            printf("Reading %d: ", j + 1);
            scanf("%f", &sensorData[i][j]);
        }
    }

    // Display sensor data
    printf("\n\nSensor Data Table\n");
    printf("-----------------\n");

    for (i = 0; i < 3; i++)
    {
        printf("Sensor %d: ", i + 1);

        for (j = 0; j < 5; j++)
        {
            printf("%.2f ", sensorData[i][j]);
        }

        printf("\n");
    }

    // Calculate average for each sensor
    printf("\nAverage Sensor Readings\n");
    printf("-----------------------\n");

    for (i = 0; i < 3; i++)
    {
        float sum = 0;

        for (j = 0; j < 5; j++)
        {
            sum += sensorData[i][j];
        }

        printf("Sensor %d Average = %.2f\n", i + 1, sum / 5);
    }

    return 0;
}
