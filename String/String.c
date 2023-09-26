#include <stdio.h>
#include "String.h"

void *my_memchr(const char *str, int c, unsigned int n)
{
    const char *tempstr = str;
    unsigned int counter = 0;
    if (NULL == str)
    {
        printf("Error!!");
    }
    else
    {
        for (counter = 0; counter < n; counter++)
        {
            if (c == (*tempstr))
            {
                return (char *) tempstr;
            }
            tempstr++;
        }
    }
    return NULL;
}
//----------------------------------------------------------------------------------------------------
int my_memcmp(const void *str1, const void *str2, unsigned int n)
{

    const unsigned char *tempstr1 = str1;
    const unsigned char *tempstr2 = str2;
    int retvalue = 0;

    if ((NULL == str1) || (NULL == str2))
    {
        printf("Error!!");
    }
    else
    {
        if (tempstr1 == tempstr2)
        {
            retvalue = 0;
        }
        else
        {
            while (n)
            {
                if (*tempstr1 != *tempstr2)
                {
                    retvalue = (*tempstr1 < *tempstr2) ? -1 : 1;
                    break;
                }
                else
                {
                    n--;
                    tempstr1++;
                    tempstr2++;
                }
            }
        }
    }

    return retvalue;
}
//----------------------------------------------------------------------------------------------------
void *my_memcpy(void *dest, const void *src, unsigned int n)
{
    unsigned char *tempdest = dest;
    const unsigned char *tempsrc = src;

    if ((NULL == dest) || (NULL == src))
    {
        printf("Error!!");
    }
    else
    {
        while (n)
        {
            *tempdest++ = *tempsrc++;
            n--;
        }
         *tempdest = '\0';
    }
    return (char *)dest;
}
//----------------------------------------------------------------------------------------------------
// void *my_memmove(void *str1, const void *str2, unsigned int n)
// {
//     unsigned char *tempstr1 = str1;
//     const unsigned char *tempstr2 = str2;

//     while (n)
//     {
//         *tempstr1++ = *tempstr2++;
//         n--;
//     }
//     return (char *)str1;
// }
//----------------------------------------------------------------------------------------------------

void *my_memset(void *str, int c, unsigned int n)
{

    unsigned char *tempstr = str;

    if (NULL == str)
    {
        printf("Error!!");
    }
    else
    {
        while (n)
        {
            *tempstr++ = (unsigned char)c;
            n--;
        }
    }
    return str;
}
//----------------------------------------------------------------------------------------------------
char *my_strcat(char *dest, const char *src)
{
    char *tempdest = dest;
    const char *tempsrc = src;
    while (*tempdest != '\0')
    {
        tempdest++;
    }
    while (*tempsrc != '\0')
    {
        *tempdest++ = *tempsrc++;
    }
    *tempdest = '\0';

    return dest;
}
//----------------------------------------------------------------------------------------------------
char *my_strncat(char *dest, const char *src, unsigned int n)
{
    char *tempdest = dest;
    const char *tempsrc = src;
    while (*tempdest != '\0')
    {
        tempdest++;
    }
    while (n && *tempsrc != '\0')
    {

        *tempdest++ = *tempsrc++;

        *tempdest = '\0';
        n--;
    }

    return dest;
}
//----------------------------------------------------------------------------------------------------
const char *my_strchr(const char *str, int c){
    const char *tempstr=str;
    
    while (*tempstr!='\0')
    {
        if (*tempstr==(unsigned char)c){
            return tempstr;
        }
        tempstr++;
    }
    return NULL;
}
//----------------------------------------------------------------------------------------------------
int my_strcmp(const char *str1, const char *str2)
{
    const char *tempstr1 = str1;
    const char *tempstr2 = str2;
    int ret = 0;

    if (tempstr1 == tempstr2)
    {
        ret = 0;
    }
    else
    {
        while ((*tempstr1 != '\0') && (*tempstr2 != '\0'))
        {
            if (*tempstr1 != *tempstr2)
            {
                ret = (*tempstr1 < *tempstr2) ? -1 : 1;
                break;
            }
            else
            {
                tempstr1++;
                tempstr2++;
            }
        }
        if (*tempstr1 == '\0' && *tempstr2 == '\0')
        {
            return 0; 
        }
        else if (*tempstr1 == '\0')
        {
            return -1; 
        }
        else if (*tempstr2 == '\0')
        {
            return 1;
        }
    }

    return ret;
}
//----------------------------------------------------------------------------------------------------
int my_strncmp(const char *str1, const char *str2, unsigned int n)
{
    const char *tempstr1 = str1;
    const char *tempstr2 = str2;
    int ret = 0;

    if (tempstr1 == tempstr2)
    {
        ret = 0;
    }
    else
    {
        while (n)
        {
            if (*tempstr1 != *tempstr2)
            {
                ret = (*tempstr1 < *tempstr2) ? -1 : 1;
                break;
            }
            else
            {
                n--;
                tempstr1++;
                tempstr2++;
            }
        }
        
    }

    return ret;
}
//----------------------------------------------------------------------------------------------------
//strcoll
//----------------------------------------------------------------------------------------------------
char *my_strcpy(char *dest, const char *src){
    char *tempdest=dest;
    const char *tempsrc=src;

    while (*tempsrc!='\0'){
        *tempdest++=*tempsrc++;
    }
    *tempdest='\0';

    return dest;
}
//----------------------------------------------------------------------------------------------------
char *my_strncpy(char *dest, const char *src, unsigned int n)
{
    char *tempdest = dest;
    const char *tempsrc = src;

    while (n)
    {
        *tempdest++ = *tempsrc++;
        n--;
    }
    *tempdest='\0';

    return dest;
}
//----------------------------------------------------------------------------------------------------
unsigned int my_strcspn(const char *str1, const char *str2)
{
    const char *tempstr1 = str1;
    unsigned int len = 0;

    while (*tempstr1 != '\0')
    {
        const char *tempstr2 = str2;
        while (*tempstr2 != '\0')
        {
            if (*tempstr1 == *tempstr2)
            {
                return len;
            }
            else
            {
                tempstr2++;
            }
        }
        len++;
        tempstr1++;
    }
    return len;
}
//----------------------------------------------------------------------------------------------------
//strerror
//----------------------------------------------------------------------------------------------------
unsigned int my_strlen(const char *str)
{
    const char *tempstr = str;
    unsigned int len = 0;

    while (*tempstr != '\0')
    {
        len++;
        tempstr++;
    }

    return len;
}
//----------------------------------------------------------------------------------------------------
const char *my_strpbrk(const char *str1, const char *str2)
{
    const char *tempstr1 = str1;
    while (*tempstr1 != '\0')
    {
        const char *tempstr2 = str2;
        while (*tempstr2 != '\0')
        {
            if (*tempstr1 == *tempstr2)
            {
                return tempstr2;
            }
            else
            {
                tempstr2++;
            }
        }
        tempstr1++;
    }
    return NULL;
}
//----------------------------------------------------------------------------------------------------
const char *my_strrchr(const char *str, int c)
{
    const char *tempstr = str;

    while (*tempstr != (unsigned char)c)
    {
        if (*tempstr == '\0')
        {
            return NULL;
        }
        else
        {
            tempstr++;
        }
    }
    return tempstr;
}
//----------------------------------------------------------------------------------------------------
unsigned int my_strspn(const char *str1, const char *str2){
    const char *tempstr1=str1;
    const char *tempstr2=str2;
    unsigned int len=0;

    while (*tempstr1!='\0')
    {   
        if (*tempstr1==*tempstr2){
            tempstr1++;
            tempstr2++;
            len++;
        }else{
            return len;
        }
    }
    return len;
}
//----------------------------------------------------------------------------------------------------
const char *my_strstr(const char *haystack, const char *needle)
{
    const char *temphaystack = haystack;
    const char *tempneedle = needle;

    while (*temphaystack != '\0')
    {
        if (*temphaystack == *tempneedle)
        {
            while (*tempneedle != '\0')
            {
                if (*temphaystack == *tempneedle)
                {
                    temphaystack++;
                    tempneedle++;
                }
                else
                {
                    return NULL;
                }
            }
            return needle;
        }
        else
        {
            temphaystack++;
        }
    }

    return NULL;
}
//----------------------------------------------------------------------------------------------------
//strtok
//----------------------------------------------------------------------------------------------------
unsigned int my_strxfrm(char *dest, const char *src, unsigned int n)
{
    char *tempdest = dest;
    const char *tempsrc = src;
    unsigned int len = 0;

    while (n && *tempsrc != '\0')
    {
        *tempdest++ = *tempsrc++;
        len++;
        n--;
    }
    *tempdest = '\0';

    return len;
}
//----------------------------------------------------------------------------------------------------