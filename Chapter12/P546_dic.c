#include <stdio.h>
#include <string.h>
#define WORDS 5

int main(void)
{
    int i, index;
    char dic[WORDS][2][30] =
    {
        {"book", "å"},
        {"boy", "�ҳ�"},
        {"computer", "��ǻ��"},
        {"language", "���"},
        {"rain", "��"},
    };
    char word[30];
    printf("�ܾ �Է��Ͻÿ�: ");
    scanf_s("%s", word, sizeof(word));

    index = 0;
    for (i = 0; i < WORDS; i++)
    {
        if (strcmp(dic[index][0], word) == 0)
        {
            printf("%s: %s\n", word, dic[index][1]);
            return 0;
        }
        index++;
    }
    printf("�������� �߰ߵ��� �ʾҽ��ϴ�.\n");

    return 0;
}