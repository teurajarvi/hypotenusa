// Write a program that calculates the hypotenusa of a given
// triagle. It asks for the other sides. (Hint a^2 * b^2 = c^2)
// lauseke c = neliöjuuri(a^2 + b^2)

/* yleiset kirjastot */
#include <stdio.h> /* lukemista ja tulostusta varten */
#include <math.h> /* kirjasto laskutoimituksia varten */
#include <ctype.h> /* tyypin tarkistamista varten */
#include <stdlib.h> /* muuntaa merkin luvuksi */
#include <string.h> /* string pituuden laskeminen */

/* omat headerit */
#include "hypotenusa.h"

/* tässä tiedostossa näkyvät muuttujat */
int testi_1 = 0;
int testi_2 = 1;
char luku_1[7];
char luku_2[7];
double vastaus = 0;

/* ohjelman pääfunktio */
int main(void)
	{
    int i;
	printf( " Anna kolmion kahden lyhimmän sivun pituuden ja lasken hypotenuusan \n" );

	printf( "\n Kolmion ensimmäisen sivun pituus: " );
	testi_1 = scanf( "%s", luku_1 );
    tarkistus();
    
	printf( "\n Kolmion toisen sivun pituus: " );
	testi_1 = scanf( "%s", luku_2 );
    tarkistus();
    
    lopputulos = laske_hypotenuusa();
	printf( "\n Hypotenuusa: %.2f \n", lopputulos );
	lopputulos = 0;

	return 0;
	}

void tarkistus( )
    {
	if ( 0 > testi_1 ) /* negatiivinen arvo indikoi virhettä, positiivinen merkkien määrä */
		{
		printf( "\n Virhe: lukeminen epäonnistui \n");
		}
    else if ( 0 == testi_2 ) /* nolla indigoi virhettä */
		{
		printf( "\n Virhe: annoit vääräntyyppisen merkin, anna numero. \n" );
		}
    }

double laske_hypotenuusa( )
    {
    double eka = 0;
    double toka = 0;
    double power = 2;

    // muutetaan string muotoon double
    eka = atof( luku_1 );
    toka = atof( luku_2 );

    // luvut toiseen potenssiin
    eka = pow( eka, power );
    toka = pow( toka, power );

	vastaus = sqrt( eka + toka );
	return vastaus;
    }
