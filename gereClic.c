#include <stdlib.h>
#include <stdio.h>
#include <math.h> // Pour pouvoir utiliser sin() et cos()
#include "GfxLib.h" // Seul cet include est necessaire pour faire du graphique
#include "BmpLib.h" // Cet include permet de manipuler des fichiers BMP
#include "ESLib.h" // Pour utiliser valeurAleatoire()
#include "gereClic.h"


float gereClicBoutonDroitA (float cptA)
{
	float nouveau;
	if ((abscisseSouris()>(6*LargeurFenetre/40) && abscisseSouris()<(8*LargeurFenetre/40)) && (ordonneeSouris()>(75*hauteurFenetre()/80) && ordonneeSouris()<(78*hauteurFenetre()/80)))
	{
		nouveau=cptA+0.5;
	}
	else
	{
		nouveau=cptA;
	}
	return nouveau;
}


float gereClicBoutonDroitB (float cptB)
{
	float nouveau;
	if ((abscisseSouris()>(14*LargeurFenetre/40) && abscisseSouris()<(16*LargeurFenetre/40)) && (ordonneeSouris()>(75*hauteurFenetre()/80) && ordonneeSouris()<(78*hauteurFenetre()/80)))
	{
		nouveau=cptB+0.5;
	}
	else
	{
		nouveau=cptB;
	}
	return nouveau;
}


float gereClicBoutonDroitC (float cptC)
{
	float nouveau;
	if ((abscisseSouris()>(22*LargeurFenetre/40) && abscisseSouris()<(24*LargeurFenetre/40)) && (ordonneeSouris()>(75*hauteurFenetre()/80) && ordonneeSouris()<(78*hauteurFenetre()/80)))
	{
		nouveau=cptC+0.5;
	}
	else
	{
		nouveau=cptC;
	}
	return nouveau;
}


float gereClicBoutonDroitD (float cptD)
{
	float nouveau;
	if ((abscisseSouris()>(28*LargeurFenetre/40) && abscisseSouris()<(30*LargeurFenetre/40)) && (ordonneeSouris()>(75*hauteurFenetre()/80) && ordonneeSouris()<(78*hauteurFenetre()/80)))
	{
		nouveau=cptD+0.5;
	}
	else
	{
		nouveau=cptD;
	}
	return nouveau;
}


int gereClicBoutonEpDroit (int ep)
{
	int nouveau;
	if ((abscisseSouris()>(13*largeurFenetre()/20) && abscisseSouris()<(15*largeurFenetre()/20)) && (ordonneeSouris()>(5*hauteurFenetre()/40) && ordonneeSouris()<(7*hauteurFenetre()/40)))
	{
		if (ep<15)
		{
			nouveau=ep+1;
		}
		else
		{
			nouveau=ep;
			printf("Impossible d'augmenter l'épaisseur, épaisseur au maximum\n");
		}
	}
	else
	{
		nouveau=ep;
	}
	return nouveau;
}


int gereClicNbPointDroit (int NbPoint)
{
	int nouveau;
	if ((abscisseSouris()>(1*largeurFenetre()/20) && abscisseSouris()<(4*largeurFenetre()/20)) && (ordonneeSouris()>(3*hauteurFenetre()/40) && ordonneeSouris()<(5*hauteurFenetre()/40)))
	{
		nouveau=NbPoint+5;
	}
	else
	{
		nouveau=NbPoint;
	}
	return nouveau;
}


float gereClicXmaxDroit (float xmax)
{
	float nouveau;
	if ((abscisseSouris()>(5*largeurFenetre()/20) && abscisseSouris()<(7*largeurFenetre()/20)) && (ordonneeSouris()>(5*hauteurFenetre()/40) && ordonneeSouris()<(7*hauteurFenetre()/40)))
	{
		nouveau=xmax+0.5;
	}
	else
	{
		nouveau=xmax;
	}
	return nouveau;
}


float gereClicXminDroit (float xmax, float xmin)
{
	float nouveau;
	if ((abscisseSouris()>(5*largeurFenetre()/20) && abscisseSouris()<(7*largeurFenetre()/20)) && (ordonneeSouris()>(hauteurFenetre()/40) && ordonneeSouris()<(3*hauteurFenetre()/40)))
	{
		if (xmin<(xmax-0.5))
		{
			nouveau=xmin+0.5;
		}
		else if (xmin==(xmax-0.5))
		{
			nouveau=xmin;
			printf("Impossible car xmin<xmax\n");
		}
	}
	else
	{
		nouveau=xmin;
	}
	return nouveau;
}


float gereClicYmaxDroit (float ymax)
{
	float nouveau;
	if ((abscisseSouris()>(9*largeurFenetre()/20) && abscisseSouris()<(11*largeurFenetre()/20)) && (ordonneeSouris()>(5*hauteurFenetre()/40) && ordonneeSouris()<(7*hauteurFenetre()/40)))
	{
		nouveau=ymax+0.5;
	}
	else
	{
		nouveau=ymax;
	}
	return nouveau;
}


float gereClicYminDroit (float ymax, float ymin)
{
	float nouveau;
	if ((abscisseSouris()>(9*largeurFenetre()/20) && abscisseSouris()<(11*largeurFenetre()/20)) && (ordonneeSouris()>(hauteurFenetre()/40) && ordonneeSouris()<(3*hauteurFenetre()/40)))
	{
		if (ymin<(ymax-0.5))
		{
			nouveau=ymin+0.5;
		}
		else if (ymin==(ymax-0.5))
		{
			nouveau=ymin;
			printf("Impossible car ymin<ymax\n");
		}
	}
	else
	{
		nouveau=ymin;
	}
	return nouveau;
}

float gereClicBoutonGaucheA (float cptA)
{
	float nouveau;
	if ((abscisseSouris()>(6*LargeurFenetre/40) && abscisseSouris()<(8*LargeurFenetre/40)) && (ordonneeSouris()>(75*hauteurFenetre()/80) && ordonneeSouris()<(78*hauteurFenetre()/80)))
	{
		nouveau=cptA-0.5;
	}
	else
	{
		nouveau=cptA;
	}
	return nouveau;
}


float gereClicBoutonGaucheB (float cptB)
{
	float nouveau;
	if ((abscisseSouris()>(14*LargeurFenetre/40) && abscisseSouris()<(16*LargeurFenetre/40)) && (ordonneeSouris()>(75*hauteurFenetre()/80) && ordonneeSouris()<(78*hauteurFenetre()/80)))
	{
		nouveau=cptB-0.5;
	}
	else
	{
		nouveau=cptB;
	}
	return nouveau;
}


float gereClicBoutonGaucheC (float cptC)
{
	float nouveau;
	if ((abscisseSouris()>(22*LargeurFenetre/40) && abscisseSouris()<(24*LargeurFenetre/40)) && (ordonneeSouris()>(75*hauteurFenetre()/80) && ordonneeSouris()<(78*hauteurFenetre()/80)))
	{
		nouveau=cptC-0.5;
	}
	else
	{
		nouveau=cptC;
	}
	return nouveau;
}


float gereClicBoutonGaucheD (float cptD)
{
	float nouveau;
	if ((abscisseSouris()>(28*LargeurFenetre/40) && abscisseSouris()<(30*LargeurFenetre/40)) && (ordonneeSouris()>(75*hauteurFenetre()/80) && ordonneeSouris()<(78*hauteurFenetre()/80)))
	{
		nouveau=cptD-0.5;
	}
	else
	{
		nouveau=cptD;
	}
	return nouveau;
}


int gerePaletteCouleur1 (int coul1)
{
	int nouveau1;
	if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(8*hauteurFenetre()/40) && ordonneeSouris()<(11*hauteurFenetre()/40)))
	{
		nouveau1=255;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(11*hauteurFenetre()/40) && ordonneeSouris()<(14*hauteurFenetre()/40)))
	{
		nouveau1=255;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(14*hauteurFenetre()/40) && ordonneeSouris()<(17*hauteurFenetre()/40)))
	{
		nouveau1=0;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(17*hauteurFenetre()/40) && ordonneeSouris()<(20*hauteurFenetre()/40)))
	{
		nouveau1=255;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(20*hauteurFenetre()/40) && ordonneeSouris()<(23*hauteurFenetre()/40)))
	{
		nouveau1=0;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(23*hauteurFenetre()/40) && ordonneeSouris()<(26*hauteurFenetre()/40)))
	{
		nouveau1=0;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(26*hauteurFenetre()/40) && ordonneeSouris()<(29*hauteurFenetre()/40)))
	{
		nouveau1=170;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(29*hauteurFenetre()/40) && ordonneeSouris()<(32*hauteurFenetre()/40)))
	{
		nouveau1=170;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(8*hauteurFenetre()/40) && ordonneeSouris()<(11*hauteurFenetre()/40)))
	{
		nouveau1=0;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(11*hauteurFenetre()/40) && ordonneeSouris()<(14*hauteurFenetre()/40)))
	{
		nouveau1=85;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(14*hauteurFenetre()/40) && ordonneeSouris()<(17*hauteurFenetre()/40)))
	{
		nouveau1=85;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(17*hauteurFenetre()/40) && ordonneeSouris()<(20*hauteurFenetre()/40)))
	{
		nouveau1=0;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(20*hauteurFenetre()/40) && ordonneeSouris()<(23*hauteurFenetre()/40)))
	{
		nouveau1=85;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(23*hauteurFenetre()/40) && ordonneeSouris()<(26*hauteurFenetre()/40)))
	{
		nouveau1=0;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(26*hauteurFenetre()/40) && ordonneeSouris()<(29*hauteurFenetre()/40)))
	{
		nouveau1=0;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(29*hauteurFenetre()/40) && ordonneeSouris()<(32*hauteurFenetre()/40)))
	{
		nouveau1=200;
	}
	else
	{
		nouveau1=coul1;
	}
	return nouveau1;
	
}


int gerePaletteCouleur2 (int coul2)
{
	int nouveau2;
	if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(8*hauteurFenetre()/40) && ordonneeSouris()<(11*hauteurFenetre()/40)))
	{
		nouveau2=255;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(11*hauteurFenetre()/40) && ordonneeSouris()<(14*hauteurFenetre()/40)))
	{
		nouveau2=0;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(14*hauteurFenetre()/40) && ordonneeSouris()<(17*hauteurFenetre()/40)))
	{
		nouveau2=255;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(17*hauteurFenetre()/40) && ordonneeSouris()<(20*hauteurFenetre()/40)))
	{
		nouveau2=0;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(20*hauteurFenetre()/40) && ordonneeSouris()<(23*hauteurFenetre()/40)))
	{
		nouveau2=255;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(23*hauteurFenetre()/40) && ordonneeSouris()<(26*hauteurFenetre()/40)))
	{
		nouveau2=0;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(26*hauteurFenetre()/40) && ordonneeSouris()<(29*hauteurFenetre()/40)))
	{
		nouveau2=170;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(29*hauteurFenetre()/40) && ordonneeSouris()<(32*hauteurFenetre()/40)))
	{
		nouveau2=0;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(8*hauteurFenetre()/40) && ordonneeSouris()<(11*hauteurFenetre()/40)))
	{
		nouveau2=170;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(11*hauteurFenetre()/40) && ordonneeSouris()<(14*hauteurFenetre()/40)))
	{
		nouveau2=85;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(14*hauteurFenetre()/40) && ordonneeSouris()<(17*hauteurFenetre()/40)))
	{
		nouveau2=0;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(17*hauteurFenetre()/40) && ordonneeSouris()<(20*hauteurFenetre()/40)))
	{
		nouveau2=85;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(20*hauteurFenetre()/40) && ordonneeSouris()<(23*hauteurFenetre()/40)))
	{
		nouveau2=0;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(23*hauteurFenetre()/40) && ordonneeSouris()<(26*hauteurFenetre()/40)))
	{
		nouveau2=85;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(26*hauteurFenetre()/40) && ordonneeSouris()<(29*hauteurFenetre()/40)))
	{
		nouveau2=0;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(29*hauteurFenetre()/40) && ordonneeSouris()<(32*hauteurFenetre()/40)))
	{
		nouveau2=200;
	}
	else
	{
		nouveau2=coul2;
	}
	return nouveau2;
}


int gerePaletteCouleur3 (int coul3)
{
	int nouveau3;
	if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(8*hauteurFenetre()/40) && ordonneeSouris()<(11*hauteurFenetre()/40)))
	{
		nouveau3=0;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(11*hauteurFenetre()/40) && ordonneeSouris()<(14*hauteurFenetre()/40)))
	{
		nouveau3=255;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(14*hauteurFenetre()/40) && ordonneeSouris()<(17*hauteurFenetre()/40)))
	{
		nouveau3=255;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(17*hauteurFenetre()/40) && ordonneeSouris()<(20*hauteurFenetre()/40)))
	{
		nouveau3=0;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(20*hauteurFenetre()/40) && ordonneeSouris()<(23*hauteurFenetre()/40)))
	{
		nouveau3=0;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(23*hauteurFenetre()/40) && ordonneeSouris()<(26*hauteurFenetre()/40)))
	{
		nouveau3=255;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(26*hauteurFenetre()/40) && ordonneeSouris()<(29*hauteurFenetre()/40)))
	{
		nouveau3=0;
	}
	else if ((abscisseSouris()>(4*largeurFenetre()/5) && abscisseSouris()<(9*largeurFenetre()/10)) && (ordonneeSouris()>(29*hauteurFenetre()/40) && ordonneeSouris()<(32*hauteurFenetre()/40)))
	{
		nouveau3=170;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(8*hauteurFenetre()/40) && ordonneeSouris()<(11*hauteurFenetre()/40)))
	{
		nouveau3=170;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(11*hauteurFenetre()/40) && ordonneeSouris()<(14*hauteurFenetre()/40)))
	{
		nouveau3=0;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(14*hauteurFenetre()/40) && ordonneeSouris()<(17*hauteurFenetre()/40)))
	{
		nouveau3=85;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(17*hauteurFenetre()/40) && ordonneeSouris()<(20*hauteurFenetre()/40)))
	{
		nouveau3=85;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(20*hauteurFenetre()/40) && ordonneeSouris()<(23*hauteurFenetre()/40)))
	{
		nouveau3=0;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(23*hauteurFenetre()/40) && ordonneeSouris()<(26*hauteurFenetre()/40)))
	{
		nouveau3=0;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(26*hauteurFenetre()/40) && ordonneeSouris()<(29*hauteurFenetre()/40)))
	{
		nouveau3=85;
	}
	else if ((abscisseSouris()>(9*largeurFenetre()/10) && abscisseSouris()<(largeurFenetre())) && (ordonneeSouris()>(29*hauteurFenetre()/40) && ordonneeSouris()<(32*hauteurFenetre()/40)))
	{
		nouveau3=200;
	}
	else
	{
		nouveau3=coul3;
	}
	return nouveau3;
}


void gereClicBoutonQuit (void)
{
	if ((abscisseSouris()>(17*largeurFenetre()/20) && abscisseSouris()<(19*largeurFenetre()/20)) && (ordonneeSouris()>(3*hauteurFenetre()/40) && ordonneeSouris()<(5*hauteurFenetre()/40)))
	{
		termineBoucleEvenements();
	}
}


int gereClicBoutonEpGauche (int ep)
{
	int nouveau;
	if ((abscisseSouris()>(13*largeurFenetre()/20) && abscisseSouris()<(15*largeurFenetre()/20)) && (ordonneeSouris()>(5*hauteurFenetre()/40) && ordonneeSouris()<(7*hauteurFenetre()/40)))
	{
		if (ep>1)
		{
			nouveau=ep-1;
		}
		else
		{
			nouveau=ep;
			printf("Impossible de diminuer l'épaisseur, épaisseur au minimum\n");
		}
	}
	else
	{
		nouveau=ep;
	}
	return nouveau;
}


int gereClicBoutonFond (int etat)
{
	int nouveau;
	if ((abscisseSouris()>(13*largeurFenetre()/20) && abscisseSouris()<(15*largeurFenetre()/20)) && (ordonneeSouris()>(hauteurFenetre()/40) && ordonneeSouris()<(3*hauteurFenetre()/40)))
	{
		if (etat==1)
		{
			nouveau=2;
		}
		else if (etat==2)
		{
			nouveau=1;
		}
	}
	else
	{
		nouveau=etat;
	}
	return nouveau;
}


int gereClicBoutonPointTrait (int format)
{
	int nouveau;
	if ((abscisseSouris()>(2*largeurFenetre()/40) && abscisseSouris()<(3*largeurFenetre()/20)) && (ordonneeSouris()>(17*hauteurFenetre()/20) && ordonneeSouris()<(18*hauteurFenetre()/20)))
	{
		if (format==1)
		{
			nouveau=2;
		}
		else if (format==2)
		{
			nouveau=1;
		}
	}
	else
	{
		nouveau=format;
	}
	return nouveau;
}


int gereClicNbPointGauche (int NbPoint)
{
	int nouveau;
	if ((abscisseSouris()>(1*largeurFenetre()/20) && abscisseSouris()<(4*largeurFenetre()/20)) && (ordonneeSouris()>(3*hauteurFenetre()/40) && ordonneeSouris()<(5*hauteurFenetre()/40)))
	{
		if (NbPoint>5)
		{
			nouveau=NbPoint-5;
		}
		else
		{
			nouveau=NbPoint;
			printf("Impossible\n");
		}
	}
	else
	{
		nouveau=NbPoint;
	}
	return nouveau;
}


float gereClicXmaxGauche (float xmax, float xmin)
{
	float nouveau;
	if ((abscisseSouris()>(5*largeurFenetre()/20) && abscisseSouris()<(7*largeurFenetre()/20)) && (ordonneeSouris()>(5*hauteurFenetre()/40) && ordonneeSouris()<(7*hauteurFenetre()/40)))
	{
		if (xmax>(xmin+0.5))
		{
			nouveau=xmax-0.5;
		}
		else if (xmax==(xmin+0.5))
		{
			nouveau=xmax;
			printf("Impossible car xmax>xmin\n");
		}
	}
	else
	{
		nouveau=xmax;
	}
	return nouveau;
}


float gereClicXminGauche (float xmin)
{
	float nouveau;
	if ((abscisseSouris()>(5*largeurFenetre()/20) && abscisseSouris()<(7*largeurFenetre()/20)) && (ordonneeSouris()>(hauteurFenetre()/40) && ordonneeSouris()<(3*hauteurFenetre()/40)))
	{
		nouveau=xmin-0.5;
	}
	else
	{
		nouveau=xmin;
	}
	return nouveau;
}


float gereClicYmaxGauche (float ymax, float ymin)
{
	float nouveau;
	if ((abscisseSouris()>(9*largeurFenetre()/20) && abscisseSouris()<(11*largeurFenetre()/20)) && (ordonneeSouris()>(5*hauteurFenetre()/40) && ordonneeSouris()<(7*hauteurFenetre()/40)))
	{
		if (ymax>(ymin+0.5))
		{
			nouveau=ymax-0.5;
		}
		else if (ymax==(ymin+0.5))
		{
			nouveau=ymax;
			printf("Impossible car ymax>ymin\n");
		}
	}
	else
	{
		nouveau=ymax;
	}
	return nouveau;
}


float gereClicYminGauche (float ymin)
{
	float nouveau;
	if ((abscisseSouris()>(9*largeurFenetre()/20) && abscisseSouris()<(11*largeurFenetre()/20)) && (ordonneeSouris()>(hauteurFenetre()/40) && ordonneeSouris()<(3*hauteurFenetre()/40)))
	{
		nouveau=ymin-0.5;
	}
	else
	{
		nouveau=ymin;
	}
	return nouveau;
}
