Le dossier est compos� de deux fichiers notamment emplois.cpp qui contient le programme et le Makefile et il contient un sous-dossier contenant les fichiers o� sont stock�s les jours et l�emplois du temps des professeurs.

Le programme est simple car j�ai utilis� la lecture de fichiers pour g�n�rer les information sur le terminal. En faisant un make dans le terminal, instructions ci-dessous appara�tront dans le terminal pour montrer qu�un ex�cutable a bien �t� cr�� . 

g++  -I. -std=c++14  -c -o emplois.o emplois.cpp g++ emplois.o  -o emplois

En faisant ./emplois pour lancer l�ex�cutable, les instructions suivantes appara�tront pour demander � l�utilisateur de faire un choix de jour. 

Emplois du Temps 
Entrez le jour que vous voulez ou sinon le mot cl� << professeur >> 
Donc, l�utilisateur devra entrer un jour valide de cour ou sinon entrer le mot cl� � professeurs � pour acc�der � la table des emplois du temps des professeurs.

