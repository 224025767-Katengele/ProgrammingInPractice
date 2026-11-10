#include <stdio.h>

int main(void)
{
    FILE *fp;
    int assetID;
    char assetName[50];
    char department[50];
    float assetValue;

    fp = fopen("data/assets.txt", "a");

    if (fp == NULL)
    {
        perror("Error opening asset file");
        return 1;
    }

    printf("Enter asset ID: ");
    if (scanf("%d", &assetID) != 1)
    {
        printf("Invalid asset ID.\n");
        fclose(fp);
        return 1;
    }

    printf("Enter asset name: ");
    scanf("%49s", assetName);

    printf("Enter department: ");
    scanf("%49s", department);

    printf("Enter asset value: ");
    if (scanf("%f", &assetValue) != 1)
    {
        printf("Invalid asset value.\n");
        fclose(fp);
        return 1;
    }

    fprintf(fp, "Asset ID: %d\n", assetID);
    fprintf(fp, "Asset Name: %s\n", assetName);
    fprintf(fp, "Department: %s\n", department);
    fprintf(fp, "Asset Value: %.2f\n\n", assetValue);

    fclose(fp);

    printf("\nAsset information saved successfully!\n");

    return 0;
}