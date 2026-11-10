#include <stdio.h>

int main(void)
{
    FILE *fp;
    int assetID;
    char assetName[50];
    char department[50];
    float assetValue;

    fp = fopen("data/assets.txt", "r");

    if (fp == NULL)
    {
        perror("Error opening asset file");
        return 1;
    }

    printf("\n--- Asset Records ---\n");

    while (fscanf(fp,
                  "Asset ID: %d\n"
                  "Asset Name: %49[^\n]\n"
                  "Department: %49[^\n]\n"
                  "Asset Value: %f\n",
                  &assetID, assetName, department, &assetValue) == 4)
    {
        printf("\nAsset ID: %d\n", assetID);
        printf("Asset Name: %s\n", assetName);
        printf("Department: %s\n", department);
        printf("Asset Value: N$%.2f\n", assetValue);
    }

    if (ferror(fp))
    {
        printf("Error reading asset file.\n");
        fclose(fp);
        return 1;
    }

    fclose(fp);

    return 0;
}