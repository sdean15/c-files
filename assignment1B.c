
int balancedStringSplit(char * s){

    int rCount = 0;
    int lCount = 0;
    int balancedCount = 0;

    while(s[0] != '\0')
    {

        if(s[0] == 'L')
            lCount++;
        else
            rCount++;


        //check if L and R are same amount but not 0(only checking one)
        if(rCount == lCount && rCount != 0)
        {
            balancedCount++;
            rCount = 0;
            lCount = 0;
        }

        s++;
    }

    return balancedCount;


}
