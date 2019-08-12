char insp(char ascii,int opc)
{
    int minuscula,maiuscula = 65;
    switch(opc)
    {
        case 1:
            for(minuscula = 97;minuscula<=122;minuscula++)
            {
                if(ascii==minuscula)
                {
                    ascii = maiuscula;
                }
                maiuscula++;
            }
            break;
        case 2:
            if(ascii==97)
            {
                ascii = 52;  
            }
            break;
        case 3:
            if(ascii==101)
            {
                ascii = 51;
            }
            break;
        case 4:
            if(ascii==105)
            {
                ascii = 49;
            }
            break;
        case 5:
            if(ascii==111)
            {
                ascii = 48;
            }
            break;
        case 6:
            switch(ascii)
            {
                case 97:
                    ascii = 52;
                    break;
                case 101:
                    ascii =51;
                    break;
                case 105:
                    ascii = 49;
                    break;
                case 111:
                    ascii = 48;
                    break;
            }
            break;
    }
    return ascii;
}
char* capital(char *word)
{
	int minuscula,maiuscula=65;
	for(minuscula = 97;minuscula<=122;minuscula++)
    {
		if(word[0]==minuscula)
		{
			word[0] = maiuscula;
		}
		maiuscula++;
	}
	return word;
}
