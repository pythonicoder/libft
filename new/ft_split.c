#include <stdlib.h>
#include "libft.h"


static size_t count_words(const char *s, char c)
{
    size_t count;
    int in_word;

    count = 0;
    in_word = 0;
    while (*s)
    {
        if (*s != c && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (*s == 0)
            in_word = 0;
        s++;
    }
    return (count);
}

static char *word_dup(const char *start, size_t len)
{
    char *word;
    size_t i;

    word = malloc(len + 1);
    if (!word)
        return (NULL);
    i = 0;
    while (i < len)
    {
        word[i] = start[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    char **arr;
    size_t i;
    size_t start_idx;
    size_t word_len;
    size_t word_count;

    i = 0;
    start_idx = 0;
    word_len = 0;
    if (!s)
        return (NULL);
    word_count = count_words(s, c);
    arr = malloc(sizeof(char *) * (word_count + 1));
    if (!arr)
        return (NULL);
    while (*s)
    {
        if (*s != c)
        {
            start_idx = 0;
            const char *ptr = s;
            while (*s && *s != c)
                s++;
            word_len = s - ptr;
            arr[i++] = word_dup(ptr, word_len);
        }
        else
            s++;
    }
    arr[i] = NULL;
    return (arr);
}