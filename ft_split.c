
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperugin <lperugin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:50:05 by lperugin          #+#    #+#             */
/*   Updated: 2024/11/13 18:50:06 by lperugin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int word_count(const char *s, char c)
{
    int count = 0;
    int in_word = 0;

    while(*s)
    {
        if(*s != c && !in_word)
        {
            in_word = 1;
            count ++;
        }
        else if(*s == c)
        {
            in_word = 0;
        }
        s++;
    }
    return count;
}

char *fill_word(const char *start, int len)
{
    char *word = (char*)malloc(len+1);

    if(!word)
    return (NULL);

    strncpy(word, start, len);
    word[len] = '\0'; // make sure its NULL terminated

    return (word);
}

void ft_free(char **words)
{
    if(words)
    {
        for(int i = 0; words[i] != NULL; i++)
        {
            free(words[i]);
        }
        free (words);
    }
}

char **ft_split(const char *s, char c)
{
    if (!s)
        return (NULL);

    int num_words = word_count (s,c);
    char **words = (char**)malloc(sizeof(char*)*(num_words+1))
    if(!words)
        return NULL;

    int i = 0;
    int start = -1;
    int word_len = 0;

    for(int j=0; s[j] != '\0'; j++)
    {
        if(s[j] != c && start == -1)
        {
         start = j;
        }

        if((s[j] == c || s[j + 1] == '\0') && start != -1)
        {
           if(s[j] == c)
           {
               word_len = j - start;
           }
           else
           {
               word_len = j - start + 1;
           }
        
            words[i] = fill_word(s+start, word_len);
            if(!words[i])
            {
                ft_free(words);
                return (NULL);
            }

            i++;
            start = -1;
        }
    }

    words[i] = NULL;
    return words;
}