/*
** EPITECH PROJECT, 2026
** panoramix
** File description:
** panoramix
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef PANO_H
    #define PANO_H

typedef struct panoramix_s {
    int nb_villagers;
    int pot_size;
    int nb_fights;
    int nb_refills;
    int servings;
} panoramix_t;

typedef struct parse_s {
    int nb_arg;
    char *name;
} parse_t;

panoramix_t *parse_arg(char **argv, panoramix_t *stock);
void print_usage(void);
#endif
