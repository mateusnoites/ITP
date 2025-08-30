#include <stdio.h>

int main() {
    int h_ini, m_ini , s_ini, d_ini;
    int h_fim, m_fim , s_fim, d_fim;
    int w, x, y, z;

    long momento_ini, momento_fim, momento_total;

    scanf("Dia %i\n", &d_ini);
    scanf("%d : %d : %d\n", &h_ini, &m_ini, &s_ini);

    scanf("Dia %d\n", &d_fim);
    scanf("%d : %d : %d", &h_fim, &m_fim, &s_fim);

    momento_ini = (d_ini * 24 * 60 * 60) + (h_ini * 60 * 60) + (m_ini * 60) + (s_ini);
    momento_fim = (d_fim * 24 * 60 * 60) + (h_fim * 60 * 60) + (m_fim * 60) + (s_fim);
    momento_total = momento_fim - momento_ini;

    w = momento_total / 86400;
    momento_total = momento_total % 86400;

    x = momento_total / 3600;
    momento_total = momento_total % 3600;

    y = momento_total / 60;
    momento_total = momento_total % 60;

    z = momento_total;

    printf("%d dia(s)\n", w);
    printf("%d hora(s)\n", x);
    printf("%d minuto(s)\n", y);
    printf("%d segundo(s)\n", z);

    return 0;
}
