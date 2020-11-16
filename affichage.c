#include <stdlib.h>
#include <stdio.h>
#include <math.h> // Pour pouvoir utiliser sin() et cos()
#include "GfxLib.h" // Seul cet include est necessaire pour faire du graphique
#include "BmpLib.h" // Cet include permet de manipuler des fichiers BMP
#include "ESLib.h" // Pour utiliser valeurAleatoire()
#include "affichage.h"
#include "calcul.h"


void afficheFonctionF (void)
{
	couleurCourante(255,255,255);
	epaisseurDeTrait(1);
	afficheChaine("f(x) =      x (^3) +      x (^2) +     x +      ",16,(2*LargeurFenetre/40),(19*hauteurFenetre()/20));
}


void afficheFonctionFConsole (int NbPoint, float cptA, float cptB, float cptC, float cptD, int PasX, float xmax, float xmin)
{
	float y;
	float x = xmin;
	int i;
	float Pas=calculPasX(xmax,xmin,NbPoint);
	for(i=0;i<NbPoint;i++)
	{
		y=calculFonctionF(cptA,cptB,cptC,cptD,x);
		printf("f(%.2f) = %.2f\n",x,y);
		x=x+Pas;
	}
}


void afficheBoutonA (float cptA)
{
	couleurCourante(244,102,27);
	epaisseurDeTrait(1);
	rectangle((6*LargeurFenetre/40),(75*hauteurFenetre()/80),(8*LargeurFenetre/40),(78*hauteurFenetre()/80));
	
	couleurCourante(0,0,0);
	epaisseurDeTrait(1);
	char a[5];
	sprintf(a,"%.2f\n",cptA);
	afficheChaine(a,12,(6*LargeurFenetre/40),(76*hauteurFenetre()/80));
}


void afficheBoutonB (float cptB)
{
	couleurCourante(244,102,27);
	epaisseurDeTrait(1);
	rectangle((14*LargeurFenetre/40),(75*hauteurFenetre()/80),(16*LargeurFenetre/40),(78*hauteurFenetre()/80));
	
	couleurCourante(0,0,0);
	epaisseurDeTrait(1);
	char b[5];
	sprintf(b,"%.2f",cptB);
	afficheChaine(b,12,(14*LargeurFenetre/40),(76*hauteurFenetre()/80));
}


void afficheBoutonC (float cptC)
{
	couleurCourante(244,102,27);
	epaisseurDeTrait(1);
	rectangle((22*LargeurFenetre/40),(75*hauteurFenetre()/80),(24*LargeurFenetre/40),(78*hauteurFenetre()/80));
	
	couleurCourante(0,0,0);
	epaisseurDeTrait(1);
	char c[5];
	sprintf(c,"%.2f",cptC);
	afficheChaine(c,12,(22*LargeurFenetre/40),(76*hauteurFenetre()/80));
}


void afficheBoutonD (float cptD)
{
	couleurCourante(244,102,27);
	epaisseurDeTrait(1);
	rectangle((28*LargeurFenetre/40),(75*hauteurFenetre()/80),(30*LargeurFenetre/40),(78*hauteurFenetre()/80));
	
	couleurCourante(0,0,0);
	epaisseurDeTrait(1);
	char d[5];
	sprintf(d,"%.2f",cptD);
	afficheChaine(d,12,(28*LargeurFenetre/40),(76*hauteurFenetre()/80));
}

void affichePaletteCouleur (void)
{
	couleurCourante(0,0,0);
	epaisseurDeTrait(10);
	rectangle((4*largeurFenetre()/5),(hauteurFenetre()/5),(largeurFenetre()),(4*hauteurFenetre()/5));
	
	couleurCourante(255,255,0);
	epaisseurDeTrait(1);
	rectangle((4*largeurFenetre()/5),(8*hauteurFenetre()/40),(9*largeurFenetre()/10),(11*hauteurFenetre()/40));
	
	couleurCourante(255,0,255);
	epaisseurDeTrait(1);
	rectangle((4*largeurFenetre()/5),(11*hauteurFenetre()/40),(9*largeurFenetre()/10),(14*hauteurFenetre()/40));
	
	couleurCourante(0,255,255);
	epaisseurDeTrait(1);
	rectangle((4*largeurFenetre()/5),(14*hauteurFenetre()/40),(9*largeurFenetre()/10),(17*hauteurFenetre()/40));
	
	couleurCourante(255,0,0);
	epaisseurDeTrait(1);
	rectangle((4*largeurFenetre()/5),(17*hauteurFenetre()/40),(9*largeurFenetre()/10),(20*hauteurFenetre()/40));
	
	couleurCourante(0,255,0);
	epaisseurDeTrait(1);
	rectangle((4*largeurFenetre()/5),(20*hauteurFenetre()/40),(9*largeurFenetre()/10),(23*hauteurFenetre()/40));
	
	couleurCourante(0,0,255);
	epaisseurDeTrait(1);
	rectangle((4*largeurFenetre()/5),(23*hauteurFenetre()/40),(9*largeurFenetre()/10),(26*hauteurFenetre()/40));
	
	couleurCourante(170,170,0);
	epaisseurDeTrait(1);
	rectangle((4*largeurFenetre()/5),(26*hauteurFenetre()/40),(9*largeurFenetre()/10),(29*hauteurFenetre()/40));
	
	couleurCourante(170,0,170);
	epaisseurDeTrait(1);
	rectangle((4*largeurFenetre()/5),(29*hauteurFenetre()/40),(9*largeurFenetre()/10),(32*hauteurFenetre()/40));
	
	couleurCourante(0,170,170);
	epaisseurDeTrait(1);
	rectangle((9*largeurFenetre()/10),(8*hauteurFenetre()/40),(largeurFenetre()),(11*hauteurFenetre()/40));
	
	couleurCourante(85,85,0);
	epaisseurDeTrait(1);
	rectangle((9*largeurFenetre()/10),(11*hauteurFenetre()/40),(largeurFenetre()),(14*hauteurFenetre()/40));
	
	couleurCourante(85,0,85);
	epaisseurDeTrait(1);
	rectangle((9*largeurFenetre()/10),(14*hauteurFenetre()/40),(largeurFenetre()),(17*hauteurFenetre()/40));
	
	couleurCourante(0,85,85);
	epaisseurDeTrait(1);
	rectangle((9*largeurFenetre()/10),(17*hauteurFenetre()/40),(largeurFenetre()),(20*hauteurFenetre()/40));
	
	couleurCourante(85,0,0);
	epaisseurDeTrait(1);
	rectangle((9*largeurFenetre()/10),(20*hauteurFenetre()/40),(largeurFenetre()),(23*hauteurFenetre()/40));
	
	couleurCourante(0,85,0);
	epaisseurDeTrait(1);
	rectangle((9*largeurFenetre()/10),(23*hauteurFenetre()/40),(largeurFenetre()),(26*hauteurFenetre()/40));
	
	couleurCourante(0,0,85);
	epaisseurDeTrait(1);
	rectangle((9*largeurFenetre()/10),(26*hauteurFenetre()/40),(largeurFenetre()),(29*hauteurFenetre()/40));
	
	couleurCourante(200,200,200);
	epaisseurDeTrait(1);
	rectangle((9*largeurFenetre()/10),(29*hauteurFenetre()/40),(largeurFenetre()),(32*hauteurFenetre()/40));
}

void afficheZoneTrace (int etat)
{
	if (etat==1)
	{
		couleurCourante(0,0,0);
		epaisseurDeTrait(1);
		rectangle((largeurFenetre()/20),(hauteurFenetre()/5),(15*largeurFenetre()/20),(4*hauteurFenetre()/5));
	}
	else if (etat==2)
	{
		couleurCourante(255,255,255);
		epaisseurDeTrait(1);
		rectangle((largeurFenetre()/20),(hauteurFenetre()/5),(15*largeurFenetre()/20),(4*hauteurFenetre()/5));
	}
}


void afficheAxes (float xmax, float xmin, float ymax, float ymin, int etat)
{
	float posy;
	float posx;
	
	//Inversion de couleur par rapport au fond de la zone de tracé
	if (etat==1)
	{
		couleurCourante(255,255,255);
	}
	else
	{
		couleurCourante(0,0,0);
	}
	epaisseurDeTrait(3);
	
	if ((xmin<0.00) && (xmax>0.00))
	{
		//position en y de l'axe x : largeur zone tracé * valeur absolue de xmin / distance entre les bornes xmin et xmax
		// distance entre les bornes xmin et xmax ---> largeur zone tracé
		//                 valeur absolue de xmin ---> position en y=0 de l'axe x
		posy=(((14*largeurFenetre()/20)*fabs(xmin))/((xmax)+fabs(xmin)));
		ligne((posy+(largeurFenetre()/20)),(hauteurFenetre()/5),(posy+(largeurFenetre()/20)),(4*hauteurFenetre()/5));
	}
	else
	{
		//printf("Axe des Y en dehors de la zone de tracé\n");
		
	}
	
	if ((ymin<0.00) && (ymax>0.00))
	{
		//position en x de l'axe y : hauteur zone tracé * valeur absolue de ymin / distance entre les bornes ymin et ymax
		// distance entre les bornes ymin et ymax ---> largeur zone tracé
		//                 valeur absolue de ymin ---> position en x=0 de l'axe y
		posx=(((3*hauteurFenetre()/5)*fabs(ymin))/((ymax)+fabs(ymin)));
		ligne((largeurFenetre()/20),(posx+(hauteurFenetre()/5)),(15*largeurFenetre()/20),(posx+(hauteurFenetre()/5)));
	}
	else
	{
		//printf("Axe des X en dehors de la zone de tracé\n");
		
	}
}


void affichePoint (int NbPoint, float xmax, float xmin, float ymax, float ymin, float cptA, float cptB, float cptC, float cptD, int ep, int coul1, int coul2, int coul3, int format)
{
	float posPointX;
	float posPointY;
	float posPointX_Prec;
	float posPointY_Prec;
	float y;
	float x = xmin;
	int i;
	float posPointX_Limite;
	float Pas=calculPasX(xmax,xmin,NbPoint);

	for(i=0;i<NbPoint;i++)
	{
		//Récupérer valeurs x et y du point calculé précédement pour tracer la ligne (posPointX_Prec,posPointY_Prec) - (posPointX,posPointY)
		if (i>0)
		{
			posPointX_Prec = posPointX;
			posPointY_Prec = posPointY;
		}
		y=calculFonctionF(cptA,cptB,cptC,cptD,x);			
		//Utilisation de la même formule que celle pour les axes
		posPointX=(((14.0*(largeurFenetre())/20.0)*(x-xmin))/((xmax)+fabs(xmin)));
		posPointY=(((3.0*(hauteurFenetre())/5.0)*(y-ymin))/((ymax)+fabs(ymin)));
		
		couleurCourante(coul1,coul2,coul3);
		epaisseurDeTrait(ep);
		//Trace le point que s'il se trouve entre les bornes ymin et ymax
		//Pas de test pour x car la boucle commence en xmin et se termine en xmax
		//Décalage largeur et hauteur pour placer les points dans la zone de tracé
		if ((y>=ymin) && (y<=ymax))
		{
			point(((posPointX+(largeurFenetre()/20))),(posPointY+(hauteurFenetre()/5)));
		}
		//Trace la ligne au bout de la seconde itération, car la première nous permet d'obtenir un premier point afin de tracer la ligne
		if ((i>0) && (format==2))
		{
			//Si les 2 points se trouvent dans les bornes
			if ((posPointY<=(3*hauteurFenetre()/5)) && (posPointY_Prec<=(3*hauteurFenetre()/5)) && (posPointY_Prec>=0) && (posPointY>=0))
			{
				ligne(((posPointX_Prec+(largeurFenetre()/20))),(posPointY_Prec+(hauteurFenetre()/5)),((posPointX+(largeurFenetre()/20))),(posPointY+(hauteurFenetre()/5)));
			}
			//Point précédent --> en-dessous de la zone de tracé
			//Point courant --> dans la zone de tracé
			else if ((posPointY_Prec<0) && (posPointY>=0) && (posPointY<=(3*hauteurFenetre()/5)))
			{				
				posPointX_Limite=posPointX_Prec+(posPointX-posPointX_Prec)*((0-posPointY_Prec)/(posPointY-posPointY_Prec));
				ligne(posPointX_Limite+(largeurFenetre()/20),(hauteurFenetre()/5),((posPointX+(largeurFenetre()/20))),(posPointY+(hauteurFenetre()/5)));
			}
			//Point précédent --> dans la zone de tracé
			//Point courant --> en-dessous de la zone de tracé
			else if ((posPointY_Prec>=0) && (posPointY<0) && (posPointY_Prec<=(3*hauteurFenetre()/5)))
			{
				posPointX_Limite=posPointX_Prec+(posPointX-posPointX_Prec)*((0-posPointY_Prec)/(posPointY-posPointY_Prec));
				ligne(posPointX_Limite+(largeurFenetre()/20),(hauteurFenetre()/5),((posPointX_Prec+(largeurFenetre()/20))),(posPointY_Prec+(hauteurFenetre()/5)));
			}
			//Point précédent --> dans la zone de tracé
			//Point courant --> au-dessus de la zone de tracé
			else if ((posPointY_Prec>=0) && (posPointY>(3*hauteurFenetre()/5)) && (posPointY_Prec<=(3*hauteurFenetre()/5)))
			{
				posPointX_Limite=posPointX_Prec+(posPointX-posPointX_Prec)*(((3*hauteurFenetre()/5)-posPointY_Prec)/(posPointY-posPointY_Prec));
				ligne(posPointX_Limite+(largeurFenetre()/20),4*(hauteurFenetre()/5),((posPointX_Prec+(largeurFenetre()/20))),(posPointY_Prec+(hauteurFenetre()/5)));
			}
			//Point précédent --> au-dessus de la zone de tracé
			//Point courant --> dans la zone de tracé
			else if ((posPointY>=0) && (posPointY_Prec>(3*hauteurFenetre()/5)) && (posPointY<=(3*hauteurFenetre()/5)))
			{
				posPointX_Limite=posPointX_Prec+(posPointX-posPointX_Prec)*(((3*hauteurFenetre()/5)-posPointY_Prec)/(posPointY-posPointY_Prec));
				ligne(posPointX_Limite+(largeurFenetre()/20),4*(hauteurFenetre()/5),((posPointX+(largeurFenetre()/20))),(posPointY+(hauteurFenetre()/5)));
			}
			//Point précédent --> au-dessus de la zone de tracé
			//Point courant --> en-dessous de la zone de tracé
			else if ((posPointY_Prec>(3*hauteurFenetre()/5)) && (posPointY<0))
			{
				float posPointX_LimiteHaut=posPointX_Prec+(posPointX-posPointX_Prec)*(((3*hauteurFenetre()/5)-posPointY_Prec)/(posPointY-posPointY_Prec));
				float posPointX_LimiteBas=posPointX_Prec+(posPointX-posPointX_Prec)*((0-posPointY_Prec)/(posPointY-posPointY_Prec));
				ligne(posPointX_LimiteHaut+(largeurFenetre()/20),4*(hauteurFenetre()/5),posPointX_LimiteBas+(largeurFenetre()/20),(hauteurFenetre()/5));
			}
			//Point précédent --> en-dessous de la zone de tracé
			//Point courant --> au-dessus de la zone de tracé
			else if ((posPointY>(3*hauteurFenetre()/5)) && (posPointY_Prec<0))
			{
				float posPointX_LimiteBas=posPointX_Prec+(posPointX-posPointX_Prec)*((0-posPointY_Prec)/(posPointY-posPointY_Prec));
				float posPointX_LimiteHaut=posPointX_Prec+(posPointX-posPointX_Prec)*(((3*hauteurFenetre()/5)-posPointY_Prec)/(posPointY-posPointY_Prec));
				ligne(posPointX_LimiteHaut+(largeurFenetre()/20),4*(hauteurFenetre()/5),posPointX_LimiteBas+(largeurFenetre()/20),(hauteurFenetre()/5));
			}
		}
		x=x+Pas;
	}
	
}


void afficheBoutonQuit (void)
{
	couleurCourante(244,102,27);
	epaisseurDeTrait(1);
	rectangle((17*largeurFenetre()/20),(3*hauteurFenetre()/40),(19*largeurFenetre()/20),(5*hauteurFenetre()/40));
	
	couleurCourante(0,0,0);
	epaisseurDeTrait(1);
	afficheChaine("Quitter",12,(35*largeurFenetre()/40),(2*hauteurFenetre()/20));
}


void afficheBoutonEp (void)
{
	couleurCourante(244,102,27);
	epaisseurDeTrait(1);
	rectangle((13*largeurFenetre()/20),(5*hauteurFenetre()/40),(15*largeurFenetre()/20),(7*hauteurFenetre()/40));
	
	couleurCourante(0,0,0);
	epaisseurDeTrait(1);
	afficheChaine("Epaisseur",12,(27*largeurFenetre()/40),(3*hauteurFenetre()/20));
}


void afficheBoutonFond (void)
{
	couleurCourante(244,102,27);
	epaisseurDeTrait(1);
	rectangle((13*largeurFenetre()/20),(hauteurFenetre()/40),(15*largeurFenetre()/20),(3*hauteurFenetre()/40));
	
	couleurCourante(0,0,0);
	epaisseurDeTrait(1);
	afficheChaine("Fond",12,(27*largeurFenetre()/40),(hauteurFenetre()/20));
}


void afficheBoutonPointTrait (int format)
{
	couleurCourante(244,102,27);
	epaisseurDeTrait(1);
	rectangle((2*largeurFenetre()/40),(17*hauteurFenetre()/20),(3*largeurFenetre()/20),(18*hauteurFenetre()/20));
	
	couleurCourante(0,0,0);
	epaisseurDeTrait(1);
	
	if (format==1)
	{
		afficheChaine("Point",12,(5*largeurFenetre()/80),(35*hauteurFenetre()/40));
	}
	else
	{
		afficheChaine("Trait",12,(5*largeurFenetre()/80),(35*hauteurFenetre()/40));
	}
}


void afficheBoutonNbPoint (void)
{
	couleurCourante(244,102,27);
	epaisseurDeTrait(1);
	rectangle((1*largeurFenetre()/20),(3*hauteurFenetre()/40),(4*largeurFenetre()/20),(5*hauteurFenetre()/40));
	
	couleurCourante(0,0,0);
	epaisseurDeTrait(1);
	afficheChaine("Nombre de point",12,(9*largeurFenetre()/160),(2*hauteurFenetre()/20));
}


void afficheBoutonXmax (void)
{
	couleurCourante(244,102,27);
	epaisseurDeTrait(1);
	rectangle((5*largeurFenetre()/20),(5*hauteurFenetre()/40),(7*largeurFenetre()/20),(7*hauteurFenetre()/40));
	
	couleurCourante(0,0,0);
	epaisseurDeTrait(1);
	afficheChaine("Xmax",12,(12*largeurFenetre()/40),(3*hauteurFenetre()/20));
}


void afficheValeurXmax (float xmax)
{
	couleurCourante(0,0,0);
	epaisseurDeTrait(1);
	char nouv[10];
	sprintf(nouv,"%.2f",xmax);
	afficheChaine(nouv,12,(121*largeurFenetre()/160),(14*hauteurFenetre()/80));
}


void afficheBoutonXmin (void)
{
	couleurCourante(244,102,27);
	epaisseurDeTrait(1);
	rectangle((5*largeurFenetre()/20),(hauteurFenetre()/40),(7*largeurFenetre()/20),(3*hauteurFenetre()/40));
	
	couleurCourante(0,0,0);
	epaisseurDeTrait(1);
	afficheChaine("Xmin",12,(12*largeurFenetre()/40),(hauteurFenetre()/20));
}


void afficheValeurXmin (float xmin)
{
	couleurCourante(0,0,0);
	epaisseurDeTrait(1);
	char nouv[10];
	sprintf(nouv,"%.2f",xmin);
	afficheChaine(nouv,12,(10*largeurFenetre()/160),(14*hauteurFenetre()/80));
}


void afficheBoutonYmax (void)
{
	couleurCourante(244,102,27);
	epaisseurDeTrait(1);
	rectangle((9*largeurFenetre()/20),(5*hauteurFenetre()/40),(11*largeurFenetre()/20),(7*hauteurFenetre()/40));
	
	couleurCourante(0,0,0);
	epaisseurDeTrait(1);
	afficheChaine("Ymax",12,(20*largeurFenetre()/40),(3*hauteurFenetre()/20));
}


void afficheValeurYmax (float ymax)
{
	couleurCourante(0,0,0);
	epaisseurDeTrait(1);
	char nouv[10];
	sprintf(nouv,"%.2f",ymax);
	afficheChaine(nouv,12,0,(31*hauteurFenetre()/40));
}


void afficheBoutonYmin (void)
{
	couleurCourante(244,102,27);
	epaisseurDeTrait(1);
	rectangle((9*largeurFenetre()/20),(hauteurFenetre()/40),(11*largeurFenetre()/20),(3*hauteurFenetre()/40));
	
	couleurCourante(0,0,0);
	epaisseurDeTrait(1);
	afficheChaine("Ymin",12,(20*largeurFenetre()/40),(hauteurFenetre()/20));
}


void afficheValeurYmin (float ymin)
{
	couleurCourante(0,0,0);
	epaisseurDeTrait(1);
	char nouv[10];
	sprintf(nouv,"%.2f",ymin);
	afficheChaine(nouv,12,0,(hauteurFenetre()/5));
}


