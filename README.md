# emplois_du_temps_tblx_cpp
Afficher l'emploi du temps des enseignants sur une semaine. L'affichage de ces emplois du temps se fait dans la console

Le dossier est composé de deux fichiers notamment emplois.cpp qui contient le programme 
et le Makefile et il contient un sous-dossier contenant les fichiers où sont stockés les 
jours et l’emplois du temps des professeurs.

Le programme est simple car j’ai utilisé la lecture de fichiers pour générer les information 
sur le terminal. En faisant un make dans le terminal, instructions ci-dessous apparaîtront 
dans le terminal pour montrer qu’un exécutable a bien été créé . 

g++  -I. -std=c++14  -c -o emplois.o emplois.cpp g++ emplois.o  -o emplois

En faisant ./emplois pour lancer l’exécutable, les instructions suivantes apparaîtront pour 
demander à l’utilisateur de faire un choix de jour. 

Emplois du Temps 
Entrez le jour que vous voulez ou sinon le mot clé professeur >> 
Donc, l’utilisateur devra entrer un jour valide de cour ou sinon entrer le mot clé « professeurs » 
pour accéder à la table des emplois du temps des professeurs.



