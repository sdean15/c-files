#include <stdio.h>

#define FALSE 0;
#define TRUE 1;



int isMatch(char *s, char* p)
{
    int sLength;
    int i = 0;
    int j = 0;

    //get length of s
    sLength = sizeof(s) -1;

    //iternate through the char*
    for(;j<= sLength;j++,i++)
    {
        printf("s: %c\n",s[i]);
        printf("p: %c\n",p[i]);

        //if it is a . then dont care what char it is so continue
        if(p[i] == '.')
        {
            i++;
            j++;
            continue;
        }

        //if the next char is *
        if(p[i+1] == '*')
        {
            //we want to see if the previous char is there
            j--;
            int k = j;
            //if there is no previous char, we dont care and continue
            //with loop and make i index + 1 to move over the *
            if(s[j] != p[i])
            {
                i++;
                continue;
            }
            //if is previous char then iternate through s until
            //the char is not the same
            while(s[j] == s[k])
            {
                k++;
            }

            j = k;

        }

        //check if the strings are not equal
        if(s[j] != p[i])
        {
            return FALSE;
            break;
        }

    }

    return TRUE;
}



main()
{
    char* s = "abddddx";
    char* pattern = "abc*d*.";

    int result = isMatch(s,pattern);

    printf("%d", result);

}
