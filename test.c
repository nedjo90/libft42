/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:57:13 by nhan              #+#    #+#             */
/*   Updated: 2023/10/09 16:20:50 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

void    ft_write(char *str, char *path);
int     ft_strlen(char *str);
char*   ft_itoa(int n);
void    ft_web();

int main(int argc, char **argv){
    int i;
    char* strn;

    i = 1;
    while (i < argc){
        ft_write(argv[i], "log.txt");
        ft_write("\n", "log.txt");
        ft_write("strlen ===>  ", "log.txt");
        strn = ft_itoa(strlen(argv[i]));
        ft_write(strn, "log.txt");
        ft_write("\n", "log.txt");
        ft_write("ft_strlen ===>  ", "log.txt");
        strn = ft_itoa(ft_strlen(argv[i]));
        ft_write(strn, "log.txt");
        ft_write("\n", "log.txt");
        i++;
    }
    ft_web();
    ft_write("</body></html>", "web/index.html");
    return (0);
}

void ft_write(char *str, char *path)
{
    int fichier;

    fichier = open(path, O_WRONLY | O_CREAT | O_APPEND, 0644);
    if(fichier == -1){
        char erreur_fichier[] = "erreur lors de l'ouverture du fichier";  
        write(1, erreur_fichier, strlen(erreur_fichier));
        close(fichier);
    }
    int ecrit = write(fichier, str, strlen(str));
    if (ecrit == -1){
        char erreur_ecriture[] = "erreur lors de l'écriture";
        write(1, erreur_ecriture, strlen(erreur_ecriture));
    }
    close(fichier);
}


int ft_strlen(char *str){
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}
char* ft_itoa(int n){
    char    *str;
    char    *temp;
    int     size;
    int     i;

    if(n == 0)
        return ("0");
    size = 0;
    temp = (char *)malloc(11 * sizeof(char));
    while(n > 0){
        temp[size] = n % 10 + 48;
        n /= 10;
        size++;
    }
    str = (char *) malloc((size + 1) * sizeof(char));
    i = 0;
    size--;
    while(size >= 0){
        str[i] = temp[size];
        i++;
        size--;
    }
    str[i] = '\0';
    free(temp);
    return (str);
}

void ft_web(){
    char    buffer;
    int     position;
    int     lu;
    int     ecrit;
    int     log;
    int     web;

    log = open("./log.txt", O_RDONLY);
    web = open("./web/index.html", O_RDWR);
    if(log == -1){
        write(1, "erreur log", 10);
    }
    if(web == -1){
        write(1, "erreur html", 11);
    }
    position = 0;
    while((lu = read(web, &buffer, 1)) > 0){
        position++;
        if(buffer == '$')
                break;
    }
    lseek(web, position - 1, SEEK_SET);
    while((ecrit = read(log, &buffer, 1)) > 0){
        write(web, &buffer, 1);
    }
    if(ecrit == -1){
        write(1, "erreur d'écriture", 17);
    }
    close(web);
    close(log);
}
