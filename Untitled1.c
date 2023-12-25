#include <stdio.h>

int main() {
    int A[6], B[6], Answer[7] ;
    int i = 0 ;
    char Operator ;

    printf( "Enter Number A:\n" ) ;
    while ( i < 6)  {
        printf( "A[%d] : ", i ) ;
        scanf( "%d", &A[i] ) ;
        i++ ;
    }//end while

    i = 0 ;

    printf( "Enter Number B:\n" ) ;
    while ( i < 6 ) {
        printf( "B[%d] : ", i ) ;
        scanf( "%d", &B[i] ) ;
        i++ ;
    }//end while

    printf( "Operator :\n" ) ;
    scanf( " %s", &Operator ) ;

    if ( Operator == '+' ) {
        printf( "Index\t\tX 0 1 2 3 4 5 \n" ) ;

        i = 0 ;
        printf( "Number A :\t  " ) ;
        while ( i < 6 ) {
            printf("%d ", A[i]) ;
            i++ ;
        }//end while

        printf( "\nOperator\t\t+\n" ) ;

        i = 0 ;
        printf( "Number B :\t  " ) ;
        while ( i < 6 ) {
            printf( "%d ", B[i] ) ;
            i++ ;
        }//end while
    }

    if ( Operator == '-' ) {
        printf( "Index\t\tX 0 1 2 3 4 5 \n" ) ;

        i = 0 ;
        printf( "Number A :\t  " ) ;
        while ( i < 6)  {
            printf( "%d ", A[i] ) ;
            i++ ;
        }//end while

        printf( "\nOperator\t\t-\n" ) ;

        i = 0 ;
        printf( "Number B :\t  " ) ;
        while ( i < 6 ) {
            printf( "%d ", B[i] ) ;
            i++ ;
        }//end while
    }//end if

    int total = 0 ;
    Answer[0] = total ;
    i = 5 ;

    while ( i >= -1 ) {
        if ( Operator == '+' ) {
            int Sum1 = A[i] + B[i] + total ;
            Answer[i + 1] = Sum1 % 10 ;
            total = Sum1 / 10 ;
        } else if ( Operator == '-' ) {
            int Diff = A[i] - B[i] - total ;
            if ( Diff < 0 ) {
                total = 1 ;
                Answer[i + 1] = Diff + 10 ;
            } else {
                total = 0 ;
                Answer[i + 1] = Diff ;
            }//end else
        }//end if
        i-- ;
    }//end while

    printf( "\n" );
    printf( "Answer :\t" ) ;

    i = 0 ;
    while ( i < 7 ) {
        printf( "%d ", Answer[i] ) ;
        i++ ;
    }//end while

    printf( "\n" ) ;

    return 0 ;
}//end main