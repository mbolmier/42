# École 42 Lyon : mes premiers projets en C

> **EN.** My first C projects at École 42 Lyon (2023-2024): a rewrite of part of the C standard library (libft), my own `printf` (ft_printf) and a line-by-line file reader (get_next_line). No standard library functions allowed beyond `read`, `write`, `malloc` and `free`, strict compiler flags, and a strict coding style (the 42 Norm).

À l'École 42, on apprend la programmation sans cours ni professeurs : chaque projet est un cahier des charges, et le code est validé par des tests automatiques et par la correction d'autres étudiants. Ce dépôt regroupe les trois premiers projets du tronc commun. Ils obligent à comprendre ce que font vraiment les fonctions de base du C : gestion de la mémoire, pointeurs, chaînes de caractères, fonctions variadiques, lecture de fichiers.

## Les projets

### libft : réécrire une partie de la bibliothèque standard

Une bibliothèque statique (`libft.a`) de 34 fonctions, réutilisée dans les projets suivants.

- **Fonctions de la libc réécrites** : mémoire (`ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_calloc`…), chaînes (`ft_strlen`, `ft_strlcpy`, `ft_strnstr`, `ft_strdup`…), caractères (`ft_isalpha`, `ft_toupper`…) et conversion (`ft_atoi`).
- **Fonctions supplémentaires** : `ft_split` (découper une chaîne selon un séparateur), `ft_strjoin`, `ft_strtrim`, `ft_substr`, `ft_itoa`, `ft_strmapi`, `ft_striteri` et des fonctions d'écriture sur un descripteur de fichier (`ft_putstr_fd`, `ft_putnbr_fd`…).

### ft_printf : recoder printf

Une fonction variadique `ft_printf` qui gère les conversions `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X` et `%%`. Elle renvoie le nombre de caractères écrits, ou -1 en cas d'erreur d'écriture, comme `printf`. Le fichier `printfmain.c` compare son résultat à celui de `printf` sur une série de cas (chaînes `NULL`, entiers limites, pointeurs…).

### get_next_line : lire un fichier ligne par ligne

`get_next_line(fd)` renvoie la ligne suivante d'un fichier à chaque appel, quelle que soit la taille du tampon de lecture (`BUFFER_SIZE`, fixée à la compilation). Le reste de la lecture est conservé entre deux appels dans une variable statique. La version bonus suit plusieurs descripteurs de fichier en même temps.

## Compiler

```bash
make -C libft          # produit libft/libft.a
make -C ft_printf      # produit ft_printf/libftprintf.a
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 -I get_next_line \
   main.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c
```

Tous les fichiers compilent avec `-Wall -Wextra -Werror`. Les projets ont été écrits et corrigés sur les machines Linux de l'école.

## Ce que j'en retiens

- Penser la mémoire : chaque `malloc` a son `free`, et chaque cas d'erreur doit libérer ce qui a déjà été alloué.
- Lire précisément une spécification et traiter les cas limites (chaîne vide, `NULL`, `INT_MIN`, fin de fichier sans retour à la ligne).
- Écrire des Makefiles et travailler avec Git dès le premier jour.

## Remerciements

Merci à Vincent Domaschio ([vdomasch](https://github.com/vdomasch)), qui a contribué aux corrections de ft_printf, à la version bonus de get_next_line et au fichier de tests `printfmain.c`.

---

Martin Bolmier · aujourd'hui en BUT Science des données · [LinkedIn](https://www.linkedin.com/in/martin-bolmier-501b92301/)
