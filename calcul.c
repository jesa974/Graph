#include <stdlib.h>
#include <stdio.h>
#include <math.h> // Pour pouvoir utiliser sin() et cos()
#include "GfxLib.h" // Seul cet include est necessaire pour faire du graphique
#include "BmpLib.h" // Cet include permet de manipuler des fichiers BMP
#include "ESLib.h" // Pour utiliser valeurAleatoire()
#include "calcul.h"

float calculPasX (float xmax, float xmin, int NbPoint)
{
	float x;
	x=(xmax-xmin)/(NbPoint-1);
	return x;
}


float calculFonctionF (float cptA, float cptB, float cptC, float cptD, float valeurX)
{
	float y;
	y=cptA*valeurX*valeurX*valeurX+cptB*valeurX*valeurX+cptC*valeurX+cptD;
	return y;
}
