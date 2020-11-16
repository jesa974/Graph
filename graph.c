#include <stdlib.h> // Pour pouvoir utiliser exit()
#include <stdio.h> // Pour pouvoir utiliser printf()
#include <math.h> // Pour pouvoir utiliser sin() et cos()
#include "GfxLib.h" // Seul cet include est necessaire pour faire du graphique
#include "BmpLib.h" // Cet include permet de manipuler des fichiers BMP
#include "ESLib.h" // Pour utiliser valeurAleatoire()
#include "affichage.h"
#include "gereClic.h"
#include "calcul.h"

// Largeur et hauteur par defaut d'une image correspondant a nos criteres
#define LargeurFenetre 800
#define HauteurFenetre 600

// Fonction de trace de cercle
void cercle(float centreX, float centreY, float rayon);
/* La fonction de gestion des evenements, appelee automatiquement par le systeme
des qu'une evenement survient */
void gestionEvenement(EvenementGfx evenement);



int main(int argc, char **argv)
{
	initialiseGfx(argc, argv);
	
	prepareFenetreGraphique("GfxLib", LargeurFenetre, HauteurFenetre);
	
	/* Lance la boucle qui aiguille les evenements sur la fonction gestionEvenement ci-apres,
		qui elle-meme utilise fonctionAffichage ci-dessous */
	lanceBoucleEvenements();
	
	return 0;
}


/* La fonction de gestion des evenements, appelee automatiquement par le systeme
des qu'une evenement survient */
void gestionEvenement(EvenementGfx evenement)
{
	static bool pleinEcran = false; // Pour savoir si on est en mode plein ecran ou pas

	static int etat=1;
	static int format=1;
	static int NbPoint=10;
	static float xmax=5.0;
	static float xmin=-5.0;
	static float ymax=5.0;
	static float ymin=-5.0;
	static float PasX=0.0;
	static float cptA=0.0;
	static float cptB=0.0;
	static float cptC=0.0;
	static float cptD=0.0;
	static int ep=5;
	static int coul1=170;
	static int coul2=0;
	static int coul3=170;
	
	switch (evenement)
	{
		case Initialisation:
			// Configure le systeme pour generer un message Temporisation
			// toutes les 20 millisecondes
			demandeTemporisation(20);
			break;
		
		case Temporisation:
			
			// il faut redessiner la fenetre :
			rafraichisFenetre();
			break;
			
		case Affichage:
			
			// On part d'un fond d'ecran gris moyen
			effaceFenetre (125, 125, 125);
			afficheFonctionF();
			afficheBoutonPointTrait(format);
			afficheBoutonA(cptA);
			afficheBoutonB(cptB);
			afficheBoutonC(cptC);
			afficheBoutonD(cptD);
			afficheZoneTrace(etat);
			afficheAxes(xmax,xmin,ymax,ymin, etat);
			afficheValeurXmax(xmax);
			afficheValeurXmin(xmin);
			afficheValeurYmax(ymax);
			afficheValeurYmin(ymin);
			affichePoint(NbPoint, xmax, xmin, ymax, ymin, cptA, cptB, cptC, cptD, ep, coul1, coul2, coul3, format);
			affichePaletteCouleur();
			afficheBoutonNbPoint();
			afficheBoutonEp();
			afficheBoutonFond();
			afficheBoutonQuit();
			afficheBoutonXmax();
			afficheBoutonXmin();
			afficheBoutonYmax();
			afficheBoutonYmin();
			break;
			
			
		case Clavier:
			printf("%c : ASCII %d\n", caractereClavier(), caractereClavier());

			switch (caractereClavier())
			{
				
				case 'Q': /* Pour sortir proprement du programme */
				case 'q':
					termineBoucleEvenements();
					break;

				case 'c': /* Affiche les valeurs de la fonction dans la console */
				case 'C':
					afficheFonctionFConsole(NbPoint, cptA, cptB, cptC, cptD, PasX, xmax, xmin);
					break ;

				case 'F':
				case 'f':
					pleinEcran = !pleinEcran; // Changement de mode plein ecran
					if (pleinEcran)
						modePleinEcran();
					else
						redimensionneFenetre(LargeurFenetre, HauteurFenetre);
					break;

				case 'R':
				case 'r':
					// Configure le systeme pour generer un message Temporisation
					// toutes les 20 millisecondes (rapide)
					demandeTemporisation(20);
					break;

				case 'L':
				case 'l':
					// Configure le systeme pour generer un message Temporisation
					// toutes les 100 millisecondes (lent)
					demandeTemporisation(100);
					break;

				case 'S':
				case 's':
					// Configure le systeme pour ne plus generer de message Temporisation
					demandeTemporisation(-1);
					break;
			}
			break;
			
		case ClavierSpecial:
			printf("ASCII %d\n", toucheClavier());
			break;

		case BoutonSouris:
			if (etatBoutonSouris() == GaucheAppuye)
			{
				printf("Bouton gauche appuye en : (%d, %d)\n", abscisseSouris(), ordonneeSouris());
			}
			else if (etatBoutonSouris() == GaucheRelache)
			{
				etat = gereClicBoutonFond(etat);
				format=gereClicBoutonPointTrait(format);
				NbPoint=gereClicNbPointGauche(NbPoint);
				xmax=gereClicXmaxGauche(xmax, xmin);
				xmin=gereClicXminGauche(xmin);
				ymax=gereClicYmaxGauche(ymax, ymin);
				ymin=gereClicYminGauche(ymin);
				cptA=gereClicBoutonGaucheA(cptA);
				cptB=gereClicBoutonGaucheB(cptB);
				cptC=gereClicBoutonGaucheC(cptC);
				cptD=gereClicBoutonGaucheD(cptD);
				coul1=gerePaletteCouleur1(coul1);
				coul2=gerePaletteCouleur2(coul2);
				coul3=gerePaletteCouleur3(coul3);
				ep=gereClicBoutonEpGauche(ep);
				gereClicBoutonQuit();
				printf("Nb point %d\n",NbPoint);
				printf("xmax %.2f\n",xmax);
				printf("xmin %.2f\n",xmin);
				printf("ymax %.2f\n",ymax);
				printf("ymin %.2f\n",ymin);
				printf("etat %d\n",etat);
				printf("couleur (%d,%d,%d)\n",coul1,coul2,coul3);
				printf("epaisseur %d\n",ep);
				printf("Bouton gauche relache en : (%d, %d)\n", abscisseSouris(), ordonneeSouris());
				
			}
			else if (etatBoutonSouris() == DroiteRelache)
			{
				NbPoint=gereClicNbPointDroit(NbPoint);
				xmax=gereClicXmaxDroit(xmax);
				xmin=gereClicXminDroit(xmax, xmin);
				ymax=gereClicYmaxDroit(ymax);
				ymin=gereClicYminDroit(ymax, ymin);
				cptA=gereClicBoutonDroitA(cptA);
				cptB=gereClicBoutonDroitB(cptB);
				cptC=gereClicBoutonDroitC(cptC);
				cptD=gereClicBoutonDroitD(cptD);
				ep=gereClicBoutonEpDroit(ep);
				printf("Nb point %d\n",NbPoint);
				printf("xmax %.2f\n",xmax);
				printf("xmin %.2f\n",xmin);
				printf("ymax %.2f\n",ymax);
				printf("ymin %.2f\n",ymin);
				printf("epaisseur %d\n",ep);
				printf("Bouton droit relache en : (%d, %d)\n", abscisseSouris(), ordonneeSouris());
			}
			
			break;
		
		case Souris: // Si la souris est deplacee
			break;
		
		case Inactivite: // Quand aucun message n'est disponible
			break;
		
		case Redimensionnement: // La taille de la fenetre a ete modifie ou on est passe en plein ecran
			// Donc le systeme nous en informe
			printf("Largeur : %d\t", largeurFenetre());
			printf("Hauteur : %d\n", hauteurFenetre());
			break;
	}
}
