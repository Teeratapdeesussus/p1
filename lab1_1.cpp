#include <stdio.h>
int main() {
	int n ;
	scanf( "%d", &n ) ;
	for( int i = 0 ; i < n ; i++ ) {
		printf( "[%d] Hello world", n) ;
		printf( "\n" ) ;
	}

	return 0 ;
}