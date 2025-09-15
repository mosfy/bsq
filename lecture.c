/* recupere le contenue du fichier en une chaine de
    caractere (pour travailler plus facilement 
    dessus et eviter les apelle repetitif au read* 
*/
char    *ft_file_content(char *path)
{
    char        *map;
    int            size;
    int            file;
    int            i;
    char        element;

    size = ft_size_file(path);
    map = (char *)malloc((size + 1) * sizeof(char));
    if (!(map))
        return (NULL);
    file = open(path, O_RDONLY);
    i = 0;
    if (file == -1)
        return (0);
    while (read(file, &element, 1) > 0)
    {
        map[i] = element;
        i++;
    }
    map[i] = '\0';
    return (map);
}