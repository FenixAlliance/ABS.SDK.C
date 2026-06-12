/*
 * transformation_node.h
 *
 * 
 */

#ifndef _transformation_node_H_
#define _transformation_node_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transformation_node_t transformation_node_t;


// Enum KIND for transformation_node

typedef enum  { blockchainsservice_transformation_node_KIND_NULL = 0, blockchainsservice_transformation_node_KIND_Aggregate, blockchainsservice_transformation_node_KIND_GroupBy, blockchainsservice_transformation_node_KIND_Filter, blockchainsservice_transformation_node_KIND_Compute, blockchainsservice_transformation_node_KIND_Expand } blockchainsservice_transformation_node_KIND_e;

char* transformation_node_kind_ToString(blockchainsservice_transformation_node_KIND_e kind);

blockchainsservice_transformation_node_KIND_e transformation_node_kind_FromString(char* kind);



typedef struct transformation_node_t {
    blockchainsservice_transformation_node_KIND_e kind; //enum

} transformation_node_t;

transformation_node_t *transformation_node_create(
    blockchainsservice_transformation_node_KIND_e kind
);

void transformation_node_free(transformation_node_t *transformation_node);

transformation_node_t *transformation_node_parseFromJSON(cJSON *transformation_nodeJSON);

cJSON *transformation_node_convertToJSON(transformation_node_t *transformation_node);

#endif /* _transformation_node_H_ */

