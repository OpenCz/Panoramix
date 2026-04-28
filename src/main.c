/*
** EPITECH PROJECT, 2026
** main
** File description:
** main
*/

#include "panoramix.h"

void print_usage(void)
{
    printf("USAGE: ./panoramix <nb_villagers>");
    printf(" <pot_size> <nb_fights> <nb_refills>\n");
}

int main(int argc, char **argv)
{
    panoramix_t *pano = NULL;

    if (argc != 5)
        return 84;
    pano = parse_arg(argv, pano);
    if (!pano)
        return 84;
    printf("%d %d %d %d\n", pano->nb_villagers, pano->pot_size, pano->nb_fights,
        pano->nb_refills);
    return 0;
}
