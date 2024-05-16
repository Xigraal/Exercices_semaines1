
/*
 * Nom du fichier: Exercices_semaines1.c
 * Auteur: Thanisma Even Marcelin
 * Date: 2024/05/06
 * Description:Listes d'exercices de la semaine 1 pour le cours d'INF147		   
 */

#define _CRT_SECURE_NO_WARNINGS // pour ignorer les erreurs pour scanf_s
#define MAX 10
#define M_PI 3.1416
#define EPSILON 0.0001
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void Ex1_part1();
void Ex2_part1();
void Ex3_part1();
void Ex4_part1();
void Ex5_part1();
void Ex6_part1();
void Ex1_part2();
void Ex2_part2();
void Ex3_part2();
void Ex4_part2();
void Ex1_part3();
void Ex2_part3();
void Ex3_part3();
void Ex4_part3();
void Ex1_part4();
void Ex2_part4();
void Ex3_part4();
void Suppl_Ex1();
void Suppl_Ex2();
void Suppl_Ex3();
void Suppl_Ex4();

/*
*Nom de l'exercice: Exercices_semaines1.c
* main()
* Description:programme qui test les differents exercices de la semaine 1
* Paramètres: aucun
* Retour : status de la fin du programme
*/
int main() {

	int choix;

		printf("Menu des exercices de la semaine1 :\n");
		printf(" 1 => Ex1_part1\n");
		printf(" 2 => Ex2_part1\n");
		printf(" 3 => Ex3_part1\n");
		printf(" 4 => Ex4_part1\n");
		printf(" 5 => Ex5_part1\n");
		printf(" 6 => Ex6_part1\n");
		printf(" 7 => Ex1_part2\n");
		printf(" 8 => Ex2_part2\n");
		printf(" 9 => Ex3_part2\n");
		printf("10 => Ex4_part2\n");
		printf("11 => Ex1_part3\n");
		printf("12 => Ex2_part3\n");
		printf("13 => Ex3_part3\n");
		printf("14 => Ex4_part3\n");
		printf("15 => Ex1_part4\n");
		printf("16 => Ex2_part4\n");
		printf("17 => Ex3_part4\n");
		printf("18 => Suppl_Ex1\n");
		printf("19 => Suppl_Ex2\n");
		printf("20 => Suppl_Ex3\n");
		printf("21 => Suppl_Ex4\n");
		printf("22 => Pour mettre fin au programme.\n");


		do {
			printf("\n\nVeuillez entrez votre choix: ");
			scanf(" %d", &choix);

			switch (choix) {
		case 1:
			printf("\nCe programe permet d'afficher “Bonjour tout le monde” à l’écran => \n\n");
			Ex1_part1();
			break;
		case 2:
			printf("Ce programe permet d'afficher l'Horaire des repas a l’écran => \n\n");
			Ex2_part1();
			break;
		case 3:
			printf("\nCe programe permet d'afficher le nombre insere multiplie par deux => \n\n");
			Ex3_part1();
			break;
		case 4:
			printf("\nCe programe permet d'afficher le nombre insere au carre => \n\n");
			Ex4_part1();
			break;
		case 5:
			printf("\nCe programe permet de calculer le prix a payer en plus des taxes => \n\n");
			Ex5_part1();
			break;
		case 6:
			printf("\nCe programe permet d'afficher le nombre pi avec differente precision => \n\n");
			Ex6_part1();
			break;
		case 7:
			printf("\nCe programe permet d'indiquer si l’entier insere est positif, négatif ou nulle (égal à zéro) => \n\n");
			Ex1_part2();
			break;
		case 8:
			printf("\nCe programe permet de calculer l’indice de masse corporelle de l’usager => \n\n");
			Ex2_part2();
			break;
		case 9:
			printf("\nCe programe permet de calculer le salaire hebdomadaire d’un employer => \n\n");
			Ex3_part2();
			break;
		case 10:
			printf("\nCe programe permet de trouver le nombre le plus petit parmi l'insertion \net d'indiquer s'il ya egalite dessus => \n\n");
			Ex4_part2();
			break;
		case 11:
			printf("\nCe programe permet de compter le nombre totale d'iterations => \n\n");
			Ex1_part3();
			break;
		case 12:
			printf("\nCe programe permet d'afficher le nombre des bons de 2 d'iterations \nselon la limite inserer par l'usager => \n\n");
			Ex2_part3();
			break;
		case 13:
			printf("\nCe programe permet d'afficher des valeurs impairs entre 1 et 10 => \n\n");
			Ex3_part3();
			break;
		case 14:
			printf("\nCe programe permet d'afficher des valeurs entre \nun minimum et un maximum inserer par l'usager selon l'intervalle demander => \n\n");
			Ex4_part3();
			break;
		case 15:
			printf("\nCe programe permet d'afficher le nombre de lancer qui a été nécessaire \npour arriver a obtenir la valeur 6 20 fois d'un de a 6 faces. => \n\n");
			Ex1_part4();
			break;
		case 16:
			printf("\nCe programe permet d'afficher l’identité de la valeur qui a été obtenue le plus souvent d'une somme de deux des lancers. => \n\n");
			Ex2_part4();
			break;
		case 17:
			printf("\nCe programe permet de compter tous les nombres pairs entre un minimum et un maximum => \n\n");
			Ex3_part4();
			break;
		case 18:
			printf("\nCe programe permet de calculer le diametre, l'aire et le volume => \n\n");
			Suppl_Ex1();
			break;
		case 19:
			printf("\nCe programe permet d'echanger deux valeurs en memoire => \n\n");
			Suppl_Ex2();
			break;
		case 20:
			printf("\nCe programe permet de calculer le diametre, l'aire et le volume d'une sphere ou l'aire d'un anneau=> \n\n");
			Suppl_Ex3();
			break;
		case 21:
			printf("\nCe programe permet de calculer la racine carree d'un nombre a par la methode de Newton => \n\n");
			Suppl_Ex4();
			break;	
		case 22:
			printf("Fin du programme.\n");
			break;
		default:
			printf("Choix invalide. Veuillez réessayer.\n");
		}
		
	} while (choix != 22);

	// garde la console ouverte
	system("pause");
	return EXIT_SUCCESS;
}

 /*
  * Nom de l'exercice: Ex1_part1
  * Ex1_part1()
  * Description:programme qui affiche “Bonjour tout le monde” à l’écran
  * Paramètres: aucun
  * Retour: status de la fin du programme
  */
 
void Ex1_part1() {

	printf("Bonjour tout le monde.\n");
} 

/*
  * Nom de l'exercice: Ex2_part1
  * Ex2_part1()
  * Description:programme qui affiche l'heure du dejeuner, diner et souper à l’écran
  * Retour: status de la fin du programme
  */
 
void Ex2_part1() {

	printf("Horaire:\n");
	printf("7h00 - dejeuner\n");
	printf("12h00 - diner \n");
	printf("17h00 - souper\n");

}

/*
  * Nom de l'exercice: Ex3_part1
  * Ex3_part1()
  * Description:programme qui demande à l’usager d’entrer un entier,
  *             le programme affiche le nombre multiplié par deux
  * Paramètres: aucun
  * Retour: status de la fin du programme
  */
  
void Ex3_part1() {

	int val=0; //valeure entiere a inserer

	printf("Veuillez entrer un nombre entier:\t");
	scanf(" %d",&val);

	val *= 2; //valeure entiere multipliee par 2

	printf("la valeur entiere inserer multipliee par 2 est: %d\n", val);

}

/*
  * Nom de l'exercice: Ex4_part1
  * Ex4_part1()
  * Description:programme qui demande à l’usager d’entrer un double, 
  *             le programme affiche ensuite le nombre au carré, en 
  *             utilisant la fonction pow() de la librairie math.h
  * Paramètres: aucun
  * Retour: status de la fin du programme
  */
  
void Ex4_part1() {

	double val=0; // valeure decimale a inserer

	printf("Veuillez entrer une valeure decimale:\t");
	scanf(" %lf",&val);

	val = pow(val,2); // valeure decimale au carre

	printf("la valeur decimale inserer au carree est: %lf\n", val);

}

/*
  * Nom de l'exercice: Ex5_part1
  * Ex5_part1()
  * Description:programme qui calcule le prix à payer en plus des taxes.
  *             Il demande à l’usager le nombre d’articles achetés (entier),
  *			    le prix d’un article (double), puis il affiche le prix total 
  *			    (double) avec une précision de 2 décimaux, en comptant 14.97% 
  *			    de taxe de vente.
  * Paramètres: aucun
  * Retour: status de la fin du programme
  */
  
void Ex5_part1() {

	const double taxe = 0.1497; // taxe de vente
	int nb = 0; // variable qui contiendra le nombre d'articles achetés
	double prix = 0.0; // variable qui contiendra le prix d’un article
	double total_s = 0.0; // variable qui contiendra le prix total sans taxe
    double total_a = 0.0; // variable qui contiendra le prix total avec taxe

	printf("Veuillez entrer le nombre d'articles achetes :\t");
	scanf(" %d", &nb);

	printf("Veuillez entrer le prix d’un article :\t");
	scanf(" %lf", &prix);

	total_s = nb * prix;
	total_a = total_s + (total_s * taxe);

	printf("le prix total sans taxe est: %.2lf\n", total_s);
	printf("le prix total avec taxe est: %.2lf\n", total_a);

}

/*
  * Nom de l'exercice: Ex6_part1
  * Ex6_part1()
  * Description:programme qui affiche le nombre pi avec différente précision
  * Paramètres: aucun
  * Retour: status de la fin du programme
  */
 
void Ex6_part1() {

	const double pi = 3.1415926536; // variable qui contient le nombre pi

	printf("le nombre pi avec 2 chiffres apres la virgule est:  %.2lf\n", pi);
	printf("le nombre pi avec 6 chiffres apres la virgule est:  %.6lf\n", pi);
	printf("le nombre pi avec 10 chiffres apres la virgule est: %.10lf\n", pi);

} 

/*
  * Nom de l'exercice: Ex1_part2
  Ex1_part2()
  * Description:programme qui demande à l’usager d’entrer un entier. 
  *              Le programme doit afficher si l’entier est positif, 
  *              négatif ou nulle (égal à zéro)
  * Retour: status de la fin du programme
  */
  
void Ex1_part2() {

	int nb = 0; // variable qui contiendra l'entier inserer

	printf("Veuillez entrer une valeure entiere : ");
	scanf(" %d",&nb);

	// Condition pour vérifier si le nombre est positif, négatif ou nul
	if (nb > 0) {
		printf("L'entier %d est positif.\n", nb);
	}
	else if (nb < 0) {
		printf("L'entier %d est négatif.\n", nb);
	}
	else {
		printf("L'entier est nul.\n");
	}

} 

/*
  * Nom de l'exercice: Ex2_part2
  * Ex2_part2()
  * Description:programme qui demande à un usager d’entrer son poids (en kg) 
  *             et sa taille (en m), tous deux des doubles. 
  *			    Le programme doit en ensuite calculer l’indice de masse corporelle
  *				de l’usager en utilisant la fonction suivante:
  *             IMC = poids/pow(taille, 2)
  * Le programme doit ensuite indiquer à l’usager dans quelle catégorie il se trouve:
  * Si plus petit que 18.5, l’usager est maigre
  * Si plus grand ou égal à 18.5 et plus petite que 25, l’usager est de corpulence normale
  * Si plus grand ou égal à 25, l’usager est obèse
  * Paramètres: aucun
  * Retour: status de la fin du programme
  */
  
void Ex2_part2() {

	double poids = 0.0; // variable qui contiendra le poids (en kg)
	double taille = 0.0; // variable qui contiendra la taille (en m)
	double IMC = 0.0; // variable qui contiendra le calcul de l’indice de masse corporelle de l’usager

	printf("Veuillez entrer votre poids (en kg) : ");
	scanf(" %lf", &poids);

	printf("Veuillez entrer votre taille (en m) : ");
	scanf(" %lf", &taille);

	IMC = poids / pow(taille, 2);

	// Condition pour vérifier si l'usager est maigre, de corpulence normale ou obèse
	if (IMC < 18.5) {
		printf("vous etes maigre\n");
	}
	else if (IMC >= 18.5 && IMC < 25) {
		printf("vous etes de corpulence normale\n");
	}
	else {
		printf("vous etes obese\n");
	}
	
}

/*
*Nom de l'exercice: Ex3_part2
* Ex3_part2()
* Description:programme qui calcule le salaire hebdomadaire d’un employer. 
*             Celui-ci est payé 23$/heure, mais si le nombre d’heures travaillé 
*			  dépasse 40 heures, chaque heures supplémentaire est payé au taux de 1.5 fois.
* Paramètres: aucun
* Retour : status de la fin du programme
*/

void Ex3_part2() {

	const double salaire = 23.0; //  // Taux horaire de base (en $)
	const double salaire_sup = 34.5; // // Taux horaire pour les heures supplémentaires (en $)
	double nb_heures = 0.0; // variable qui contiendra le nombre d’heures travaillé par l'employer
	double salaire_hebd = 0.0; // variable qui contiendra le calcul du salaire hebdomadaire d’un employer

	printf("Veuillez inserer votre nombre d'heures de travail de la semaine : ");
	scanf(" %lf", &nb_heures);


	// Condition pour vérifier si le nombre d’heures travaillé dépasse 40 heures
	if (nb_heures > 40) {
		salaire_hebd = 40 * salaire + ((nb_heures - 40) * salaire_sup);
		printf("Votre salaire hebdomadaire est: %lf \n", salaire_hebd);
	}
	else {
		salaire_hebd = nb_heures * salaire;
		printf("Votre salaire hebdomadaire est: %lf \n", salaire_hebd);
	}

}

/*
*Nom de l'exercice: Ex4_part2
* Ex4_part2()
* Description:programme qui demande à l’usager d’entrer trois entiers. 
*             Le programme doit trouver quel nombre est le plus petit 
*			  et l’afficher. S’il y a égalité sur le plus petit nombre,
*			  le cas doit être détecté et indiqué à l’utilisateur.
* Paramètres: aucun
* Retour : status de la fin du programme
*/

void Ex4_part2() {

	int nb1, nb2, nb3; // les variables qui contiendront les entiers a evaluer

	printf("Veuillez entrer trois entiers : ");
	scanf(" %d %d %d", &nb1, &nb2, &nb3);

	int min = nb1; // Initialisation de min afin de trouver le plus petit nombre

	// Condition pour trouver le plus petit nombre
	if (nb2 < min) {
		min = nb2;
	}
	if (nb3 < min) {
		min = nb3;
	}

	// Condition qui verifie s'il y a égalité sur le plus petit nombre
	if ((min == nb1 && min == nb2) || (min == nb2 && min == nb3) || (min == nb1 && min == nb3)) {
		printf("il y a egalite sur le plus petit nombre qui est %d.\n", min);
	}
	else {
		printf("Le plus petit nombre est %d.\n", min);
	}

}

/*
*Nom de l'exercice: Ex1_part3
* Ex1_part3()
* Description:programme qui crée une variable “compteur” avec une valeur égal à 0.
*             La fonction s'incremente de 1 à chaque itération et s’arrête quand 
*			  la variable à atteint 10. Le script doit afficher la valeur finale 
*			  de la variable.
* Paramètres: aucun
* Retour : status de la fin du programme
*/

void Ex1_part3() {

	int compteur = 0; // variable qui contiendra le nombre d'iterations totales

	// Boucle d'iterations
	while (compteur < MAX) {
		compteur ++;
	}
	
		printf("Le nombre d'iterations totales est %d.\n", compteur);

	
}

/*
*Nom de l'exercice: Ex2_part3
* Ex2_part3()
* Description:programme qui demande à l’usager d’entrer un entier. 
*             Le programme initialise une variable “compteur” à 0,
*			  y additionne 2 à chaque itération et affiche le résultat.
*			  Le programme ne doit s’arrêter qu'au moment ou le nombre entré
*			  par l’usager est dépassé, mais ne pas afficher le nombre, 
*			  s’il est plus grand que l’entrée de l’usager.
* Paramètres: aucun
* Retour : status de la fin du programme
*/

void Ex2_part3() {

	int Borne_max = 0; // variable qui contiendra la valeur limite
	int compteur = 0; // variable qui contiendra la valeur iteree

	printf("Veuillez entrer un entier comme limite: ");
	scanf(" %d", &Borne_max);

	// Boucle qui s'incremente de 2 et s'arrête avant que compteur ne dépasse la limite
	while (compteur <= Borne_max) {
		printf("%d ", compteur);
		compteur += 2;
	}

}

/*
*Nom de l'exercice: Ex3_part3
* Ex3_part3()
* Description:programme qui initialise une variable “compteur” à 1 et 
*             y additionne 1 à chaque itération. Le programme s’arrête 
*			  quand la variable atteint 10. Bien que la variable prend 
*			  toutes les valeurs entre 1 et 10, le programme ne doit 
*			  afficher que les valeurs impairs.
* Paramètres: aucun
* Retour : status de la fin du programme
*/

void Ex3_part3() {

	int compteur = 1; // variable qui contiendra la valeur iteree

	printf("les valeurs impairs sont: ");
	// Boucle qui s'incremente de 1 et s'arrête avant que compteur la valeur maximale
	while (compteur < MAX) {
		compteur ++;
		if (compteur % 2 !=0)
		{
			printf(" %d ", compteur);
		}
	}

}

/*
*Nom de l'exercice: Ex4_part3
* Ex4_part3()
* Description:programme qui demande à un usager d’entrer un entier minimum,
*             un entier maximum et un interval (entier). Le programme doit
*			  afficher tous les nombres entre le nombre minimum et maximum
*			  inclusivement en sautant de l’interval donné.
* Paramètres: aucun
* Retour : status de la fin du programme
*/

void Ex4_part3() {

	int Borne_max = 0;  // Valeur de la borne supérieure
	int Borne_min = 0;  // Valeur de la borne inférieure
	int interval = 0;   // Interval donné
	int nb;             // iterations

	printf("Veuillez entrer un entier comme borne inferieure: ");
	scanf("%d", &Borne_min);

	printf("Veuillez entrer un entier comme borne superieure: ");
	scanf("%d", &Borne_max);

	printf("Veuillez entrer un entier comme interval: ");
	scanf("%d", &interval);

	nb = Borne_min;

	// Boucle qui s'incremente de 2 et s'arrête avant que compteur ne dépasse la limite
	while (nb >= Borne_min && nb <= Borne_max) {
		printf("%d ", nb);
		nb += interval;

	}

}

/*
*Nom de l'exercice: Ex1_part4
* Ex1_part4()
* Description: programme qui lance un dé aléatoire à 6 faces,
*              à l’aide de la fonction rand(), tant que le 6 
*			   n’ait pas sorti 20 fois. Il doit compter le nombre 
*			   de lancer qui a été nécessaire pour y arriver.
* Paramètres: aucun
* Retour : status de la fin du programme
*/

void Ex1_part4() {

	// Initialise le générateur 
	srand(time(NULL));

	// Initialise les variables
	int compte_total = 0; // Nombre de lancers
	int nb_alea; // Valeur aléatoire obtenue
	int compte_6 = 0; // Nombre de fois que 6 a été perçu

	// Continue de lancer le dé jusqu'à ce que le 6 soit sorti 20 fois
	while (compte_6 < 20) {
		nb_alea = rand() % 6 + 1;  // Génère un nombre entre 1 et 6

		if (nb_alea == 6) {
			compte_6++;
		}

		// Ajoute au compte total
		compte_total++;

		// Affiche le résultat du lancer
		printf("%d\n", nb_alea);
	}

	// Affiche le nombre total de lancers nécessaires
	printf("Nombre de lancers necessaires \npour obtenir vingt fois le chiffre 6 : %d\n", compte_total);
}

/*
*Nom de l'exercice: Ex2_part4
* Ex1_part4()
* Description: programme qui lance deux dés aléatoire à 3 faces 
*              à l’aide de la fonction rand(). Il fait ensuite la somme 
*			   des deux, puis compte combien d’occurence de chacune 
*			   des valeurs possible: 2 à 6. Les dé sont lancé 
*			   jusqu’à ce que l’une des valeurs est été lancé 100 fois.
*			   Le programme affiche ensuite l’identité de la valeur 
*			   qui a été obtenue le plus souvent.
* Paramètres: aucun
* Retour : status de la fin du programme
*/

void Ex2_part4() {
	// Initialise le générateur
	srand(time(NULL));

	// Tableau pour compter les occurrences de chaque somme possible (2 à 6)
	int occurrences[5] = { 0 };  // Index 0 pour somme 2,..., index 4 pour somme 6

	int nb_alea_de1, nb_alea_de2; // Valeurs aléatoires obtenues des dés
	int somme_des; // somme obtenues des dés
	int lancer_total = 0; // total des lancers obtenus des dés
	int max_occurrence = 0; // le maximum d'occurence obtenus d'une somme
	int valeur_max = 2; // La plus petite somme possible est 2

	// Continue de lancer les dés jusqu'à ce qu'une des valeurs soit lancée 100 fois
	while (max_occurrence < 100) {
		nb_alea_de1 = rand() % 3 + 1;  // Génère un nombre entre 1 et 3 pour le premier dé
		nb_alea_de2 = rand() % 3 + 1;  // Génère un nombre entre 1 et 3 pour le deuxième dé
		somme_des = nb_alea_de1 + nb_alea_de2;

		// Incrémente l'occurrence de la somme obtenue
		occurrences[somme_des - 2]++;
		if (occurrences[somme_des - 2] > max_occurrence) {
			max_occurrence = occurrences[somme_des - 2];
			valeur_max = somme_des;
		}

		lancer_total++;

		// Affiche le résultat du lancer
		printf("%d %d\n", nb_alea_de1, nb_alea_de2);
	}

	// Affiche le nombre total de lancers et la valeur obtenue le plus souvent
	printf("Nombre de lancers total : %d\n", lancer_total);
	printf("La valeur qui a ete obtenue le plus souvent est : %d\n", valeur_max);
}

/*
*Nom de l'exercice: Ex2_part4
* Ex1_part4()
* Description: programme qui demande à l’usager un entier minium et un entier
*              maximum. Le programme doit compter tous les nombres pairs entre 
*			   ces deux nombres.
* Paramètres: aucun
* Retour : status de la fin du programme
*/

void Ex3_part4() {

	int Borne_max = 0;  // Valeur de la borne supérieure
	int Borne_min = 0;  // Valeur de la borne inférieure
	int nb;             // iterations

	printf("Veuillez entrer un entier comme borne inferieure: ");
	scanf("%d", &Borne_min);

	printf("Veuillez entrer un entier comme borne superieure: ");
	scanf("%d", &Borne_max);

	nb = Borne_min;

	// Boucle qui s'incremente de 2 et s'arrête avant que compteur ne dépasse la limite
	while (nb >= Borne_min && nb <= Borne_max) {

		if(nb % 2 == 0){
			printf("%d ", nb);
		}
		nb++;
	}

}
/*-----------------------------------------------------------------------------------*/
void Suppl_Ex1() {

	double Rayon = 0.0;  // Valeur du rayon de la sphere
	double Diametre = 0.0;  // Valeur du diametre de la sphere
	double Aire = 0.0;          // aire de la sphere
	double Volume = 0.0;

	printf("Veuillez entrer le rayon de la sphere: ");
	scanf("%d", &Rayon);

	Diametre = 2 * Rayon;
	Aire = (4 * M_PI)* pow(Rayon, 2);
	Volume = (4 * M_PI)/(3 * pow(Rayon, 3));

	printf("Le diametre de la sphere est: %lf", Diametre);
	printf("L'aire de la sphere est: %lf", Aire);
	printf("Le Volume de la sphere est: %lf", Volume);
	
}

/*-----------------------------------------------------------------------------------*/
void Suppl_Ex2() {

	int x = 15;  // Variable qui contient la premiere Valeur
        int y = 30;  // Variable qui contient la deuxieme valeur
	int Z = 0;          // Valeur temporaire

	z = x;
	x = y;
	y = z;

	printf("La nouvelle valeur de x est: %d", x);
	printf("La nouvelle valeur de y est: %d", y);
	
}
/*-----------------------------------------------------------------------------------*/
void Suppl_Ex3() {
      char choix;

		printf("Menu des choix :\n");
		printf(" 1 => Sphere\n");
		printf(" 2 => Anneau spherique\n");
	        printf(" 3 => Pour terminer le programme\n");

	do {
			printf("\n\nVeuillez entrez votre choix: ");
			scanf(" %d", &choix);

			switch (choix) {
		case 'a':
			Suppl_Ex1();
			break;
		case 'b':
			double Rayon = 0.0;  // Valeur du rayon de l'annaeu
			double Aire = 0.0;   // aire de l'annaeu
			double Hauteur = 0.0; // Hauteur de l'anneau

				printf("Veuillez entrer le rayon de la sphere: ");
				scanf("%d", &Rayon);

			        printf("Veuillez entrer la hauteur de l'anneau: ");
				scanf("%d", &Hauteur);

			Aire = (2 * M_PI)* Rayon * Hauteur;
			
			printf("L'aire de la sphere est: %lf", Aire);
			
			break;
	        case 'c':
			printf("\n\ C'est la fin du programme : ");
			break;
	        default:
			printf("Choix invalide. Veuillez réessayer.\n");
		}
		
	} while (choix != 'c');
}
/*-----------------------------------------------------------------------------------*/
void Suppl_Ex4() {

	double a = 0.0;  // Valeur inserer par l'utilisateur
	double x;  // Variable a initialiser

	printf("Veuillez entrer une valeur decimale: ");
	scanf("%d", &a);
	
	x = a;

	While ((pow(x,2) - a) > EPSILON) {
	x = ((x/2) + (a /(2*x)));
	}

	printf("La valeur de a: %lf", a);
	printf("La racine carree de a est: %lf", x);
	
}
