/**** templating.h ****
 *
 *  Copyright (c) 2023 ShogAI - https://shog.ai
 *
 * Part of the Shoggoth project, under the MIT License.
 * See LICENSE file for license information.
 * SPDX-License-Identifier: MIT
 *
 ****/

#ifndef SHOG_TEMPLATES
#define SHOG_TEMPLATES

#include <netlibc.h>
#include <netlibc/error.h>

typedef struct {
  char *template_string;
  char *template_data;

  struct PARTIAL_TEMPLATE *partials;
  u64 partials_count;
} template_t;

typedef struct PARTIAL_TEMPLATE {
  char *partial_name;
  template_t *partial_template;
} template_partial_t;

result_t template_add_partial(template_t *parent, char *partial_name,
                              template_t *partial_template);

template_t *create_template(char *template_string, char *template_data);

void free_template(template_t *template_object);

result_t cook_template(template_t *template_object);

result_t cook_block_template(template_t *template_object, char *template_string,
                             void *parent_data, void *block_data, u64 depth);

#endif
