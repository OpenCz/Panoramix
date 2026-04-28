/*
** EPITECH PROJECT, 2026
** args
** File description:
** args
*/

#include "panoramix.h"

const parse_t parse_place[] = {
    {1, "nb_villagers"},
    {2, "pot_size"},
    {3, "nb_fights"},
    {4, "nb_refills"}
};

static int parse_value(char *arg, char *name)
{
    int val = atoi(arg);

    (void)name;
    if (val <= 0) {
        print_usage();
        write(2, "Values must be >0\n", 18);
        return -1;
    }
    return val;
}

panoramix_t *parse_arg(char **argv, panoramix_t *stock)
{
    int values[4];
    int len = sizeof(parse_place) / sizeof(parse_place[0]);

    stock = malloc(sizeof(panoramix_t));
    if (!stock)
        return NULL;
    for (int i = 0; i < len; i++) {
        values[i] = parse_value(argv[parse_place[i].nb_arg],
            parse_place[i].name);
        if (values[i] == -1) {
            free(stock);
            return NULL;
        }
    }
    stock->nb_villagers = values[0];
    stock->pot_size = values[1];
    stock->nb_fights = values[2];
    stock->nb_refills = values[3];
    return stock;
}


