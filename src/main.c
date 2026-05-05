/*
** EPITECH PROJECT, 2026
** main
** File description:
** main
*/

#include "panoramix.h"

void print_usage(void)
{
    printf("USAGE: ./panoramix <nb_villagers> <pot_size> ");
    printf("<nb_fights> <nb_refills>\n");
}

int main(int argc, char **argv)
{
    panoramix_t *pano = NULL;

    if (argc != 5) {
        print_usage();
        return 84;
    }
    pano = parse_arg(argv, pano);
    if (!pano)
        return 84;
    return 0;
}
