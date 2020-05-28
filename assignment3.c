#include <stdio.h>

#define MAXLINE 1000

char line[MAXLINE]; /*current input line*/


/*taken from reading. Gets a line of input from file and stores it in a char array*/
int getLine(void)
{
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE - 1 && ( c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if(c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;

}


/*decided to just have a simply, basic approach and do many if-statements
  will hold each different character as an int value instead of using stack
  since I did not see much benefit using one in this case. */

main()
{
    int len=0;

    /*these ints will hold the value of occurences*/
    int brace, brack, paren, comment, sQuote, dQuote;
    brace = brack = paren = comment = 0;

    /*hard to tell whether starting or end quote
    so just set to one and will mulitply by -1 instead*/
    sQuote = dQuote = 1;



    while ((len = getLine()) > 0 )
    {
        if( line[t] == '[')
        {
            brace++;
        }
        if( line[t] == ']')
        {
            brace--;
        }
        if( line[t] == '{')
        {
            brack++;
        }
        if( line[t] == '}')
        {
            brack--;
        }
        if( line[t] == '(')
        {
            paren++;
        }
        if( line[t] == ')')
        {
            paren--;
        }
        if( line[t] == '/')
        {
            if(line[++t] == '*')
                comment++;
        }
        if( line[t] == '*')
        {
            if(line[++t] == '/')
                comment--;
        }
        if( line[t] == '\'')
        {
            sQuote = (sQuote * -1);
        }
        if( line[t] == '"')
        {
            dQuote = (dQuote * -1);
        }
    }


    if(paren != 0)
        printf ("Missing parenthesis\n");
    if(brace != 0)
        printf ("Missing brace\n");
    if(brack != 0)
        printf ("Missing bracket\n");
    printf("%d", brack);
    if(comment != 0)
        printf ("Missing comment\n");
    if(sQuote != 1)
        printf ("Missing single quote\n");
    if(dQuote != 1)
        printf ("Missing double quote\n");
    if( brack == 0 && brace == 0 && paren == 0 && comment == 0 && sQuote == 1 && dQuote == 1)
        printf ("No syntax errors found.\n");
}
