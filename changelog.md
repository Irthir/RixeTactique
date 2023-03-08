## [0.0.4] - 2023-03-08
### Ajout
-Mise en place de l'affichage du texte.

## [0.0.3] - 2023-03-07
### Ajout
-Affichage des PV.
-Rangement dans le widget d'interface.
-Mise en place de panels différents si on est en combat ou non.

## [0.0.3] - 2023-03-06
### Ajout
-Mise en place des images pour les 6 personnages jouables.
-Mise en place des images pour 5 ennemis possibles.

## [0.0.3] - 2023-03-05
### Ajout
-Travail sur l'affichage des personnages en combat.

## [0.0.3] - 2023-03-03
### Ajout
-Mise en place des attaques ennemies.
-Affichage des conditions de fin de combat.
-Finalisation du système de soin.
### Modification
-Correction des attaques sur des ennemis ou joueurs déjà morts.
-Correction des soins sur des joueurs déjà morts.

## [0.0.3] - 2023-03-02
### Modification
-Correction du système de soins.
### Ajout
-Début des attaques ennemies.

## [0.0.3] - 2023-02-08
### Modification
-Corrections mineurs sur le système de combat.
-Ajout de la notion de PV Max dans la structure des figurines.

## [0.0.3] - 2023-02-07
### Ajout
-Création d'une structure de donnée pour les figurines.
-Création des types énumérés pour les six figurines joueurs.
-Ajout dans ce type énuméré de quatre types d'ennemis.
-Création d'un type énuméré pour les effets des figurines.
-Remplissage de la structure pour la vie, les dégats et les soins des figurines.
-Création du tableau de donnée avec les données des figurines joueur.
-Ajout des données d'un ennemi "gobelin" pour passer au système de combat.
-Ajout de la gestion des trois figurines actuelles du joueur.
-Création de la structure d'un tour de combat avec ses conditions de fin, sans le combat.
-Avancées sur le système de combat, mais il y a toujours des bugs sur le système de choix des cibles.

## [0.0.3] - 2023-02-06
### Ajout
-Création d'un widget blueprint d'interface pour les combats.
-Mise en place d'un système pour faire apparaitre et disparaitre le système d'interface.
-Construction de la logique d'exécution du code pour le combat dans l'interface.
-Validation de tous ces systèmes.

## [0.0.2] - 2023-01-27
### Ajout
-Ajout d'une vérification des portes sur les salles.
-Ajout du joueur.
-Mise en place de la possession du pion du joueur en solo.
-Mise en place du déplacement du joueur.
-Gestion des mouvements de la caméra en cas de mouvement.
-Bloquage des mouvements quand un mur l'empêche.
-Bloquage des mouvements sur une limitation d'action abstraite pour l'instant.
-Affichage des évènements des salles dans lesquelles on arrive.
-Création d'un widget blueprint pour gérer le combat, vide pour l'instant.
-Tentatives avec le multijoueur.
-Synchro valide avec le multijoueur, mais la possession des pawns ne l'est pas.

## [0.0.2] - 2023-01-26
### Ajout
-Correction des données du donjon pour qu'il convienne au concept d'origine.
-Ajout d'un modèle pour le guerrier.
-Ajout d'un modèle pour un ennemi guerrier squelette.

## [0.0.2] - 2023-01-14
### Ajout
-Correction du placement des salles.
-Correction du placement des murs et des pilliers dans les salles.
-Correction de la lecture des voisins.
-Corrections du placement des portes dans les salles.
-Sauvegarde des éléments des salles sous la forme d'une chaine de caractère.

## [0.0.2] - 2023-01-13
### Ajout
-Création d'un level design pour la carte.
-Transformation du level design papier en fichier excel, puis en csv.
-Création de la structure de données d'une salle pour son utilisation en tant que DataTable.
-Validation de la sauvegarde de la structure de données complète sur Unreal.
-Test des données sauvegardées.
-Découverte d'une inversion de l'est et de l'ouest, et correction de celle-ci.
-Création des portes valide avec l'exception d'un bug pour la porte du joueur 2 qui inverse le nurd et le sud.

## [0.0.2] - 2023-01-12
### Ajout
-Import d'un pack d'asset un peu lourd pour github.
-Création des murs des salles.
-Liaison des salles par cardinal.
-Mise en place d'une caméra fixe.
-Changement des murs en portes et inversement sur un clique.

## [0.0.2] - 2023-01-10
### Ajout
-Création de la classe Blueprint DonjonManager dérivé de Actor.
-Création de la classe Blueprint DonjonSalle dérivé de Actor.
-Mise en place du système d'apparition des salles pour le donjon.

## [0.0.1] - 2023-01-04
### Ajout
-Lancement du projet.