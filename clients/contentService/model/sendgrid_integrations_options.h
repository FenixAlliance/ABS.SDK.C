/*
 * sendgrid_integrations_options.h
 *
 * 
 */

#ifndef _sendgrid_integrations_options_H_
#define _sendgrid_integrations_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sendgrid_integrations_options_t sendgrid_integrations_options_t;




typedef struct sendgrid_integrations_options_t {
    int enable; //boolean
    char *api_key; // string

} sendgrid_integrations_options_t;

sendgrid_integrations_options_t *sendgrid_integrations_options_create(
    int enable,
    char *api_key
);

void sendgrid_integrations_options_free(sendgrid_integrations_options_t *sendgrid_integrations_options);

sendgrid_integrations_options_t *sendgrid_integrations_options_parseFromJSON(cJSON *sendgrid_integrations_optionsJSON);

cJSON *sendgrid_integrations_options_convertToJSON(sendgrid_integrations_options_t *sendgrid_integrations_options);

#endif /* _sendgrid_integrations_options_H_ */

