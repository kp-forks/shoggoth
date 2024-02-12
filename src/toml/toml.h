/**** toml.h ****
 *
 *  Copyright (c) 2023 ShogAI - https://shog.ai
 *
 * Part of the Shoggoth project, under the MIT License.
 * See LICENSE file for license information.
 * SPDX-License-Identifier: MIT
 *
 ****/

#ifndef SHOG_TOML
#define SHOG_TOML

// client_config_t toml_string_to_client_config(char *config_str);

result_t toml_string_to_node_config(char *config_str);

#endif
