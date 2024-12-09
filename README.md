# Get Next Line

## 📝 Description  
**Get_next_line** est une fonction capable de lire une ligne complète à partir d’un fichier ou de l’entrée standard, quel que soit le nombre d’appels nécessaires à `read()`. Elle utilise un tampon dynamique pour gérer efficacement les lectures.

---

## 🎯 Objectif du projet  
- Comprendre les mécanismes bas-niveau liés à l’entrée/sortie (fichiers, descripteurs).  
- Apprendre à gérer efficacement la mémoire dynamique.  
- Implémenter un fonctionnement robuste pour traiter des lectures tamponnées et fragmentées.  

---

## 🛠️ Compétences clés  
- **Manipulation des fichiers** : lecture via des descripteurs de fichier avec `open` et `read`.  
- **Gestion des tampons dynamiques** : stockage des données non lues pour des appels ultérieurs.  
- **Manipulation des chaînes de caractères** : gestion de leur allocation et de leur concaténation.  
- **Gestion de la mémoire** : allocations (`malloc`) et libérations (`free`) en évitant les fuites de mémoire.

---

## 🚀 Usage  
La fonction se comporte comme suit :  
```c
char *get_next_line(int fd);
```

- **fd** : descripteur du fichier à lire.  
- **Retourne** :  
  - Une ligne complète (y compris le caractère de fin de ligne `\n` si présent).  
  - `NULL` lorsque la fin du fichier est atteinte ou en cas d’erreur.

###	🖨️ main.c
```c
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	char	*line;
	int		fd;

	fd = open("get_next_line.c", O_RDONLY);
	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
}
```
---

## 📚 Ressources utilisées  
- `read(2)`, `malloc(3)`, `free(3)`, `open(2)`, `close(2)`.  
- Pas de fonctions standard de manipulation de chaînes autorisées, tout doit être écrit à la main.  

---

## 🌟 Ce que j’ai appris  
Ce projet m’a permis de comprendre :  
- Les bases des fichiers en C (descripteurs, lectures séquentielles).  
- La manière d’écrire des fonctions modulaires et robustes.  
- Une gestion propre de la mémoire dynamique dans des projets complexes.

---
