#include <stdio.h>
#include <zxcvbn.h>

int main(int argc, char **argv)
{
	double e;
	ZxcMatch_t *Info, *p;
	int Len, ChkLen;

	e = ZxcvbnMatch("Oxford2016", NULL, &Info);

	p = Info;
        ChkLen = 0;
        while(p)
        {
            int n;
            switch(p->Type)
            {
                case BRUTE_MATCH:       printf("  Type: Bruteforce");   break;
                case DICTIONARY_MATCH:  printf("  Type: Dictionary");   break;
                case DICT_LEET_MATCH:   printf("  Type: Dict+Leet ");   break;
                case USER_MATCH:        printf("  Type: User Words");   break;
                case USER_LEET_MATCH:   printf("  Type: User+Leet ");   break;
                case REPEATS_MATCH:     printf("  Type: Repeated  ");   break;
                case SEQUENCE_MATCH:    printf("  Type: Sequence  ");   break;
                case SPATIAL_MATCH:     printf("  Type: Spatial   ");   break;
                case DATE_MATCH:        printf("  Type: Date      ");   break;
                default:                printf("  Type: Unknown%d ", p->Type);   break;
            }
            ChkLen += p->Length;
            printf("  Length %d  Entropy %6.3f  ", p->Length, p->Entrpy);
//            for(n = 0; n < p->Length; ++n, ++Pwd)
//                printf("%c", *Pwd);
            printf("\n");
            p = p->Next;
        }

	ZxcvbnFreeInfo(Info);

	printf("Hello World!\n");
}
