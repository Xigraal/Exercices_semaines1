
/*
 * Nom du fichier: Exercices_semaines1.c
 * Auteur: Thanisma Even Marcelin
 * Date: 2024/05/06
 * Description:Listes d'exercices de la semaine 1 pour le cours d'INF147		   
 */

#define _CRT_SECURE_NO_WARNINGS // pour ignorer les erreurs pour scanf_s
#define MAX 10
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
* Param�tres: aucun
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
			printf("\nCe programe permet d'afficher �Bonjour tout le monde� � l��cran => \n\n");
			Ex1_part1();
			break;
		case 2:
			printf("Ce programe permet d'afficher l'Horaire des repas a l��cran => \n\n");
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
			printf("\nCe programe permet d'indiquer si l�entier insere est positif, n�gatif ou nulle (�gal � z�ro) => \n\n");
			Ex1_part2();
			break;
		case 8:
			printf("\nCe programe permet de calculer l�indice de masse corporelle de l�usager => \n\n");
			Ex2_part2();
			break;
		case 9:
			printf("\nCe programe permet de calculer le salaire hebdomadaire d�un employer => \n\n");
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
			printf("\nCe programe permet d'afficher le nombre de lancer qui a �t� n�cessaire \npour arriver a obtenir la valeur 6 20 fois d'un de a 6 faces. => \n\n");
			Ex1_part4();
			break;
		case 16:
			printf("\nCe programe permet d'afficher l�identit� de la valeur qui a �t� obtenue le plus souvent d'une somme de deux des lancers. => \n\n");
			Ex2_part4();
			break;
		case 17:
			printf("\nCe programe permet de compter tous les nombres pairs entre un minimum et un maximum => \n\n");
			Ex3_part4();
			break;
		/*case 18:
			Suppl_Ex1();
			break;
		case 19:
			Suppl_Ex2();
			break;
		case 20:
			Suppl_Ex3();
			break;
		case 21:
			Suppl_Ex4();
			break; */	
		case 22:
			printf("Fin du programme.\n");
			break;
		default:
			printf("Choix invalide. Veuillez r�essayer.\n");
		}
		
	} while (choix != 22);

	// garde la console ouverte
	system("pause");
	return EXIT_SUCCESS;
}

 /*
  * Nom de l'exercice: Ex1_part1
  * Ex1_part1()
  * Description:programme qui affiche �Bonjour tout le monde� � l��cran
  * Param�tres: aucun
  * Retour: status de la fin du programme
  */
 
void Ex1_part1() {

	printf("Bonjour tout le monde.\n");
} 

/*
  * Nom de l'exercice: Ex2_part1
  * Ex2_part1()
  * Description:programme qui affiche l'heure du dejeuner, diner et souper � l��cran
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
  * Description:programme qui demande � l�usager d�entrer un entier,
  *             le programme affiche le nombre multipli� par deux
  * Param�tres: aucun
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
  * Description:programme qui demande � l�usager d�entrer un double, 
  *             le programme affiche ensuite le nombre au carr�, en 
  *             utilisant la fonction pow() de la librairie math.h
  * Param�tres: aucun
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
  * Description:programme qui calcule le prix � payer en plus des taxes.
  *             Il demande � l�usager le nombre d�articles achet�s (entier),
  *			    le prix d�un article (double), puis il affiche le prix total 
  *			    (double) avec une pr�cision de 2 d�cimaux, en comptant 14.97% 
  *			    de taxe de vente.
  * Param�tres: aucun
  * Retour: status de la fin du programme
  */
  
void Ex5_part1() {

	const double taxe = 0.1497; // taxe de vente
	int nb = 0; // variable qui contiendra le nombre d'articles achet�s
	double prix = 0.0; // variable qui contiendra le prix d�un article
	double total_s = 0.0; // variable qui contiendra le prix total sans taxe
    double total_a = 0.0; // variable qui contiendra le prix total avec taxe

	printf("Veuillez entrer le nombre d'articles achetes :\t");
	scanf(" %d", &nb);

	printf("Veuillez entrer le prix d�un article :\t");
	scanf(" %lf", &prix);

	total_s = nb * prix;
	total_a = total_s + (total_s * taxe);

	printf("le prix total sans taxe est: %.2lf\n", total_s);
	printf("le prix total avec taxe est: %.2lf\n", total_a);

}

/*
  * Nom de l'exercice: Ex6_part1
  * Ex6_part1()
  * Description:programme qui affiche le nombre pi avec diff�rente pr�cision
  * Param�tres: aucun
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
  * Description:programme qui demande � l�usager d�entrer un entier. 
  *              Le programme doit afficher si l�entier est positif, 
  *              n�gatif ou nulle (�gal � z�ro)
  * Retour: status de la fin du programme
  */
  
void Ex1_part2() {

	int nb = 0; // variable qui contiendra l'entier inserer

	printf("Veuillez entrer une valeure entiere : ");
	scanf(" %d",&nb);

	// Condition pour v�rifier si le nombre est positif, n�gatif ou nul
	if (nb > 0) {
		printf("L'entier %d est positif.\n", nb);
	}
	else if (nb < 0) {
		printf("L'entier %d est n�gatif.\n", nb);
	}
	else {
		printf("L'entier est nul.\n");
	}

} 

/*
  * Nom de l'exercice: Ex2_part2
  * Ex2_part2()
  * Description:programme qui demande � un usager d�entrer son poids (en kg) 
  *             et sa taille (en m), tous deux des doubles. 
  *			    Le programme doit en ensuite calculer l�indice de masse corporelle
  *				de l�usager en utilisant la fonction suivante:
  *             IMC = poids/pow(taille, 2)
  * Le programme doit ensuite indiquer � l�usager dans quelle cat�gorie il se trouve:
  * Si plus petit que 18.5, l�usager est maigre
  * Si plus grand ou �gal � 18.5 et plus petite que 25, l�usager est de corpulence normale
  * Si plus grand ou �gal � 25, l�usager est ob�se
  * Param�tres: aucun
  * Retour: status de la fin du programme
  */
  
void Ex2_part2() {

	double poids = 0.0; // variable qui contiendra le poids (en kg)
	double taille = 0.0; // variable qui contiendra la taille (en m)
	double IMC = 0.0; // variable qui contiendra le calcul de l�indice de masse corporelle de l�usager

	printf("Veuillez entrer votre poids (en kg) : ");
	scanf(" %lf", &poids);

	printf("Veuillez entrer votre taille (en m) : ");
	scanf(" %lf", &taille);

	IMC = poids / pow(taille, 2);

	// Condition pour v�rifier si l'usager est maigre, de corpulence normale ou ob�se
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
* Description:programme qui calcule le salaire hebdomadaire d�un employer. 
*             Celui-ci est pay� 23$/heure, mais si le nombre d�heures travaill� 
*			  d�passe 40 heures, chaque heures suppl�mentaire est pay� au taux de 1.5 fois.
* Param�tres: aucun
* Retour : status de la fin du programme
*/

void Ex3_part2() {

	const double salaire = 23.0; //  // Taux horaire de base (en $)
	const double salaire_sup = 34.5; // // Taux horaire pour les heures suppl�mentaires (en $)
	double nb_heures = 0.0; // variable qui contiendra le nombre d�heures travaill� par l'employer
	double salaire_hebd = 0.0; // variable qui contiendra le calcul du salaire hebdomadaire d�un employer

	printf("Veuillez inserer votre nombre d'heures de travail de la semaine : ");
	scanf(" %lf", &nb_heures);


	// Condition pour v�rifier si le nombre d�heures travaill� d�passe 40 heures
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
* Description:programme qui demande � l�usager d�entrer trois entiers. 
*             Le programme doit trouver quel nombre est le plus petit 
*			  et l�afficher. S�il y a �galit� sur le plus petit nombre,
*			  le cas doit �tre d�tect� et indiqu� � l�utilisateur.
* Param�tres: aucun
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

	// Condition qui verifie s'il y a �galit� sur le plus petit nombre
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
* Description:programme qui cr�e une variable �compteur� avec une valeur �gal � 0.
*             La fonction s'incremente de 1 � chaque it�ration et s�arr�te quand 
*			  la variable � atteint 10. Le script doit afficher la valeur finale 
*			  de la variable.
* Param�tres: aucun
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
* Description:programme qui demande � l�usager d�entrer un entier. 
*             Le programme initialise une variable �compteur� � 0,
*			  y additionne 2 � chaque it�ration et affiche le r�sultat.
*			  Le programme ne doit s�arr�ter qu'au moment ou le nombre entr�
*			  par l�usager est d�pass�, mais ne pas afficher le nombre, 
*			  s�il est plus grand que l�entr�e de l�usager.
* Param�tres: aucun
* Retour : status de la fin du programme
*/

void Ex2_part3() {

	int Borne_max = 0; // variable qui contiendra la valeur limite
	int compteur = 0; // variable qui contiendra la valeur iteree

	printf("Veuillez entrer un entier comme limite: ");
	scanf(" %d", &Borne_max);

	// Boucle qui s'incremente de 2 et s'arr�te avant que compteur ne d�passe la limite
	while (compteur <= Borne_max) {
		printf("%d ", compteur);
		compteur += 2;
	}

}

/*
*Nom de l'exercice: Ex3_part3
* Ex3_part3()
* Description:programme qui initialise une variable �compteur� � 1 et 
*             y additionne 1 � chaque it�ration. Le programme s�arr�te 
*			  quand la variable atteint 10. Bien que la variable prend 
*			  toutes les valeurs entre 1 et 10, le programme ne doit 
*			  afficher que les valeurs impairs.
* Param�tres: aucun
* Retour : status de la fin du programme
*/

void Ex3_part3() {

	int compteur = 1; // variable qui contiendra la valeur iteree

	printf("les valeurs impairs sont: ");
	// Boucle qui s'incremente de 1 et s'arr�te avant que compteur la valeur maximale
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
* Description:programme qui demande � un usager d�entrer un entier minimum,
*             un entier maximum et un interval (entier). Le programme doit
*			  afficher tous les nombres entre le nombre minimum et maximum
*			  inclusivement en sautant de l�interval donn�.
* Param�tres: aucun
* Retour : status de la fin du programme
*/

void Ex4_part3() {

	int Borne_max = 0;  // Valeur de la borne sup�rieure
	int Borne_min = 0;  // Valeur de la borne inf�rieure
	int interval = 0;   // Interval donn�
	int nb;             // iterations

	printf("Veuillez entrer un entier comme borne inferieure: ");
	scanf("%d", &Borne_min);

	printf("Veuillez entrer un entier comme borne superieure: ");
	scanf("%d", &Borne_max);

	printf("Veuillez entrer un entier comme interval: ");
	scanf("%d", &interval);

	nb = Borne_min;

	// Boucle qui s'incremente de 2 et s'arr�te avant que compteur ne d�passe la limite
	while (nb >= Borne_min && nb <= Borne_max) {
		printf("%d ", nb);
		nb += interval;

	}

}

/*
*Nom de l'exercice: Ex1_part4
* Ex1_part4()
* Description: programme qui lance un d� al�atoire � 6 faces,
*              � l�aide de la fonction rand(), tant que le 6 
*			   n�ait pas sorti 20 fois. Il doit compter le nombre 
*			   de lancer qui a �t� n�cessaire pour y arriver.
* Param�tres: aucun
* Retour : status de la fin du programme
*/

void Ex1_part4() {

	// Initialise le g�n�rateur 
	srand(time(NULL));

	// Initialise les variables
	int compte_total = 0; // Nombre de lancers
	int nb_alea; // Valeur al�atoire obtenue
	int compte_6 = 0; // Nombre de fois que 6 a �t� per�u

	// Continue de lancer le d� jusqu'� ce que le 6 soit sorti 20 fois
	while (compte_6 < 20) {
		nb_alea = rand() % 6 + 1;  // G�n�re un nombre entre 1 et 6

		if (nb_alea == 6) {
			compte_6++;
		}

		// Ajoute au compte total
		compte_total++;

		// Affiche le r�sultat du lancer
		printf("%d\n", nb_alea);
	}

	// Affiche le nombre total de lancers n�cessaires
	printf("Nombre de lancers necessaires \npour obtenir vingt fois le chiffre 6 : %d\n", compte_total);
}

/*
*Nom de l'exercice: Ex2_part4
* Ex1_part4()
* Description: programme qui lance deux d�s al�atoire � 3 faces 
*              � l�aide de la fonction rand(). Il fait ensuite la somme 
*			   des deux, puis compte combien d�occurence de chacune 
*			   des valeurs possible: 2 � 6. Les d� sont lanc� 
*			   jusqu�� ce que l�une des valeurs est �t� lanc� 100 fois.
*			   Le programme affiche ensuite l�identit� de la valeur 
*			   qui a �t� obtenue le plus souvent.
* Param�tres: aucun
* Retour : status de la fin du programme
*/

void Ex2_part4() {
	// Initialise le g�n�rateur
	srand(time(NULL));

	// Tableau pour compter les occurrences de chaque somme possible (2 � 6)
	int occurrences[5] = { 0 };  // Index 0 pour somme 2,..., index 4 pour somme 6

	int nb_alea_de1, nb_alea_de2; // Valeurs al�atoires obtenues des d�s
	int somme_des; // somme obtenues des d�s
	int lancer_total = 0; // total des lancers obtenus des d�s
	int max_occurrence = 0; // le maximum d'occurence obtenus d'une somme
	int valeur_max = 2; // La plus petite somme possible est 2

	// Continue de lancer les d�s jusqu'� ce qu'une des valeurs soit lanc�e 100 fois
	while (max_occurrence < 100) {
		nb_alea_de1 = rand() % 3 + 1;  // G�n�re un nombre entre 1 et 3 pour le premier d�
		nb_alea_de2 = rand() % 3 + 1;  // G�n�re un nombre entre 1 et 3 pour le deuxi�me d�
		somme_des = nb_alea_de1 + nb_alea_de2;

		// Incr�mente l'occurrence de la somme obtenue
		occurrences[somme_des - 2]++;
		if (occurrences[somme_des - 2] > max_occurrence) {
			max_occurrence = occurrences[somme_des - 2];
			valeur_max = somme_des;
		}

		lancer_total++;

		// Affiche le r�sultat du lancer
		printf("%d %d\n", nb_alea_de1, nb_alea_de2);
	}

	// Affiche le nombre total de lancers et la valeur obtenue le plus souvent
	printf("Nombre de lancers total : %d\n", lancer_total);
	printf("La valeur qui a ete obtenue le plus souvent est : %d\n", valeur_max);
}

/*
*Nom de l'exercice: Ex2_part4
* Ex1_part4()
* Description: programme qui demande � l�usager un entier minium et un entier
*              maximum. Le programme doit compter tous les nombres pairs entre 
*			   ces deux nombres.
* Param�tres: aucun
* Retour : status de la fin du programme
*/

void Ex3_part4() {

	int Borne_max = 0;  // Valeur de la borne sup�rieure
	int Borne_min = 0;  // Valeur de la borne inf�rieure
	int nb;             // iterations

	printf("Veuillez entrer un entier comme borne inferieure: ");
	scanf("%d", &Borne_min);

	printf("Veuillez entrer un entier comme borne superieure: ");
	scanf("%d", &Borne_max);

	nb = Borne_min;

	// Boucle qui s'incremente de 2 et s'arr�te avant que compteur ne d�passe la limite
	while (nb >= Borne_min && nb <= Borne_max) {

		if(nb % 2 == 0){
			printf("%d ", nb);
		}
		nb++;
	}

}