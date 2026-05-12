# Projet ClueLau \- Jeu d'enquête en terminal

## 1. Analyse des besoins

### **1\.1\. Identifier les contraintes du projet**

* Le projet doit être codé en langage C

* Basé sur Cluedo (mécaniques \+ règles)

* Jouable sous terminal (pas d'interface graphique)

* Code disponible sur GitHub

* README d'installation et d'utilisation

* Documentation du code et des tests

* Présentation PowerPoint

### **1\.2\. Identifier les parties prenantes** 

| Partie prenante | Client (ClueLau) | Joueurs | Équipe projet |
| :---- | :---: | :---: | :---: |
| **Attentes et rôles** | Jeu d'enquête respectant les conditions données | Expérience claire, fluide, équilibrée contre l'IA | Conçoit, développe, teste, documente et présente le projet. |
| **Niveau d'Implication** | Très forte (décide du projet) | Moyenne (audience post finalisation du projet) | Forte (conception et réalisation du projet) |

Le client est donc notre interlocuteur principal car il valide les fonctionnalités et arbitre en cas de doute. Les joueurs sont la cible réelle du produit, mais ne seront accessibles qu'une fois le projet fini. Leurs attentes sont représentées par le client. L'équipe projet (nous) est plus présente mais se doit de suivre les attentes du client.

### **1\.3\. Catégorisation des besoins**

| Besoins fonctionnels | Besoins non fonctionnels | Besoins opérationnels | Besoins stratégiques |
| :---- | :---- | :---- | :---- |
| Le système doit permettre de démarrer une nouvelle partie en configurant le nombre et le type de joueurs (humain, IA simple, IA avancée). | Robustesse : l'application ne doit pas planter sur une entrée utilisateur invalide, toute saisie incorrecte est rejetée avec un message clair. | Le projet doit être livré avec un README expliquant l'installation et l'utilisation. | Le projet doit proposer au moins un élément d'innovation par rapport à un Cluedo classique (thème, mécanique, IA bluffeuse, règles, etc..). |
| Le système doit générer aléatoirement une combinaison secrète au début de chaque partie. | Performance : les actions du joueur et de l'IA doivent s’afficher de manière lisible à un rythme faisable (sleep entre chaque action de l'ia) | Le projet doit être compilable via une commande simple (Makefile). | Un niveau d'originalité/innovation justifiant l'utilisation de ce jeu face à une alternative. |
| Le système doit distribuer les éléments restants (cartes / indices) aux joueurs de manière équitable et réaliste. | Lisibilité du code : structuration en modules (logique de jeu, IA, interface, utilitaires), nommage explicite, commentaires aux endroits clés. | Le code et les tests doivent être documentés. | Respect des contraintes du projet |
| Le système doit faire jouer les joueurs à tour de rôle et prendre en compte les tours des IA. | Testabilité : la logique de jeu (génération de la solution, réfutation, victoire) doit être couverte par des tests unitaires. | Le code et les commits doivent être accessible sur GitHub |  |
| Un joueur doit pouvoir formuler une hypothèse (suggestion) à son tour. | Portabilité : compilation et exécution sur un environnement Linux standard (gcc \+ Makefile). | Une présentation PowerPoint pour présenter le projet. |  |
| Les autres joueurs doivent pouvoir réfuter une hypothèse en révélant en privé une carte correspondante, selon les règles. | Ergonomie terminale : affichage clair (sections distinctes, éventuellement couleurs ANSI), instructions toujours visibles. |  |  |
| Un joueur doit pouvoir formuler une accusation finale. | Sécurité de base : gestion saine de la mémoire (pas de fuite, pas de débordement de buffer), validation des longueurs de saisie. |  |  |
| Le système doit comparer l'accusation à la combinaison secrète et déterminer la victoire ou la défaite. | Reproductibilité : possibilité (optionnelle) de fixer une graine aléatoire pour rejouer la même partie, utile en démo et en test. |  |  |
| Le système doit gérer une fin de partie (un joueur a gagné, ou plus personne ne peut accuser) et proposer de rejouer avec les mêmes conditions |  |  |  |
| Le système doit fournir une interface terminale claire pour le joueur humain (état du jeu, main, historique). |  |  |  |
| Le système doit permettre au joueur humain de saisir ses actions via le clavier, avec validation des entrées. |  |  |  |
| Le système doit implémenter une IA simple, jouant de manière basique et peu optimisée (suggestions et accusations quasi-aléatoires, sans mémoire élaborée). |  |  |  |
| Le système doit implémenter une IA avancée, capable de mémoriser ce qui s'est passé pendant la partie (suggestions, réfutations observées). |  |  |  |
| L'IA avancée doit utiliser ses informations pour adopter une stratégie plus subtile, calculer les probabilités du meilleur choix à faire et si possible parfois trompeuse (suggestions destinées à piéger plutôt qu'à confirmer) |  |  |  |
| Le système doit afficher, en fin de partie, un récapitulatif (gagnant, combinaison secrète, déroulé). |  |  |  |

