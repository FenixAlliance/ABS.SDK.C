/*
 * i_edm_entity_container_element.h
 *
 * 
 */

#ifndef _i_edm_entity_container_element_H_
#define _i_edm_entity_container_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_edm_entity_container_element_t i_edm_entity_container_element_t;

#include "i_edm_entity_container.h"

// Enum CONTAINERELEMENTKIND for i_edm_entity_container_element

typedef enum  { blockchainsservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_NULL = 0, blockchainsservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_None, blockchainsservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_EntitySet, blockchainsservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_ActionImport, blockchainsservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_FunctionImport, blockchainsservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_Singleton } blockchainsservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_e;

char* i_edm_entity_container_element_container_element_kind_ToString(blockchainsservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_e container_element_kind);

blockchainsservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_e i_edm_entity_container_element_container_element_kind_FromString(char* container_element_kind);



typedef struct i_edm_entity_container_element_t {
    char *name; // string
    blockchainsservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_e container_element_kind; //enum
    struct i_edm_entity_container_t *container; //model

} i_edm_entity_container_element_t;

i_edm_entity_container_element_t *i_edm_entity_container_element_create(
    char *name,
    blockchainsservice_i_edm_entity_container_element_CONTAINERELEMENTKIND_e container_element_kind,
    i_edm_entity_container_t *container
);

void i_edm_entity_container_element_free(i_edm_entity_container_element_t *i_edm_entity_container_element);

i_edm_entity_container_element_t *i_edm_entity_container_element_parseFromJSON(cJSON *i_edm_entity_container_elementJSON);

cJSON *i_edm_entity_container_element_convertToJSON(i_edm_entity_container_element_t *i_edm_entity_container_element);

#endif /* _i_edm_entity_container_element_H_ */

