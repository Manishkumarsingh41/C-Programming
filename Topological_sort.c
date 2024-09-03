#include <stdio.h>
int cost[10][10], n, colsum[10];
void cal_colsum()
{
    for (int j = 0; j < n; j++)
    {
        colsum[j] = 0;
        for (int i = 0; i < n; i++)
            colsum[j] += cost[i][j];
    }
}
void source_removal()
{
    int i, j, k, select[10] = {0};
    printf("Topological ordering is:");
    for (i = 0; i < n; i++)
    {
        cal_colsum();
        for (j = 0; j < n; j++)
        {
            if (select[j] == 0 && colsum[j] == 0) 
                break;
        }
        printf("%d ", j);
        select[j] = 1;
        for (k = 0; k < n; k++)
            cost[j][k] = 0;
    }
}
void main()
{
    printf("Enter no. of Vertices: ");
    scanf("%d", &n);
    printf("Enter the cost matrix\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &cost[i][j]);
    source_removal();
}
