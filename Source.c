#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "RUS");
    int x, count = 0, bounce = 0, c, chet = 0, pyat = 0, nechet = 0, sem = 0, umn = 1, umnozh = 0, sumchet = 0, povtor = 0;
    char a;
    printf("������� �����:");
    scanf("%d", &x);
    int last = (x % 10), orig = x;
    if (x < 0) { x = -x; }

    
        // ���-�� 3
        while (x > 2) {
            if (x % 10 == 3) {
                count++;
            }
            x /= 10;
            printf("���������� ? (�� - y, ��� - n)");

            if ((a = getchar()) == 'n') break;
        }

        // ������ ���������
        x = orig;
        while (x > 0) {
            if (x % 10 == last) {
                bounce++;
            }
            x /= 10;
            
        }

        //  ���-�� ������ 
        x = orig;
        while (x > 1) {
            if (x % 2 == 0) {
                chet++;
            }
            x /= 10;
        }

        // ����� ������ 5
        x = orig;
        while (x > 4) {
            if (x % 10 >= 5) {
                pyat++;
            }
            x /= 10;
        }

        //����� ��������
        x = orig;
        while (x > 0) {
            if (x % 2 == 1) {
                nechet += x % 10;
            }
            x /= 10;
        }

        // ����� >= 7
        x = orig;
        while (x > 6) {
            if (x % 10 >= 7) {
                sem += x % 10;
            }
            x /= 10;
        }

        // ������������
        x = orig;
        while (x > 0) {
            if (x % 10 != 0) {
                umn *= x % 10;
            }
            x /= 10;
        }

        // 2*prelast
        x = orig;
        while (x > 9) {
            if (x <= 99) {
                umnozh = (orig / 10 % 10) * (x % 10);
            }
            x /= 10;
        }

        // ����� ������ ����� ���������
        x = orig;
        while (x > 1) {
            if (x % 2 == 0) {
                sumchet += x % 10;
            }
            x /= 10;
        }
        if (orig % 2 == 0)
            sumchet -= orig % 10;
        else
            sumchet = sumchet;


        // ����� �������� ������
        x = orig;
        while (x > 9) {
            if ((x % 100 == 0) || (x % 100 == 11) || (x % 100 == 22) || (x % 100 == 33) || (x % 100 == 44) || (x % 100 == 55) || (x % 100 == 66) || (x % 100 == 77) || (x % 100 == 88) || (x % 100 == 99)) {
                printf("\n%d", (x % 100));
            }
            x /= 10;
        }
        printf("\n1)� ������ ����� %d '3'", count);
        printf("\n2)��������� ����� ����������� %d ���", bounce);
        printf("\n3)%d ������ ���� � �����", chet);
        printf("\n4)%d ���� ������ 5", pyat);
        printf("\n5)����� �������� ���� ����� %d", nechet);
        printf("\n6)����� ���� >= 7 ����� %d", sem);
        printf("\n7)������������ ���� ����� 0 ����� %d", umn);
        printf("\n8)������������ 2 � ������������� ���� ����� %d", umnozh);
        printf("\n9)����� ������ ����� ��������� ����� %d", sumchet);

        
    
}
