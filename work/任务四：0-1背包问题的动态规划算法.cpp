#include<stdio.h>
#include<cstdlib>
int V[200][200];
int max(int a, int b)
{
    if (a >= b)
        return a;
    else return b;
}

int KnapSack(int n, int w[], int v[], int x[], int C)
{
    int i, j;
    for (i = 0; i <= n; i++)
        V[i][0] = 0;
    for (j = 0; j <= C; j++)
        V[0][j] = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < C+1; j++){
            if (j<w[i])
                V[i][j] = V[i - 1][j];
            else
                V[i][j] = max(V[i - 1][j], V[i - 1][j - w[i]] + v[i]);
        }
    }
    j = C;
    for (i = n - 1; i >= 0; i--)
    {
        if (V[i][j]>V[i - 1][j])
        {
            x[i] = 1;
            j = j - w[i];
        }
        else
            x[i] = 0;
    }
    printf("ѡ�е���Ʒ��:\n");
    for (i = 0; i<n; i++)
        printf("%d ", x[i]);
    printf("\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < C+1; j++){
            printf("%d\t ", V[i][j]);
            if (j == C){
                printf("\n");
            }
        }
    }
    return V[n - 1][C];

}

int main()
{
    int s;
    int w[5] = {2,2,6,5,4};
    int v[5] = {6,3,5,4,6};
    int x[5];
    int n = 5;
    int C=10;

    s = KnapSack(n, w, v, x, C);

    printf("�����Ʒ��ֵΪ:\n");
    printf("%d\n", s);
    system("pause");
    return 0;

}
