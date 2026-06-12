#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "single_value_node.h"


char* single_value_node_kind_ToString(blockchainsservice_single_value_node_KIND_e kind) {
    char* kindArray[] =  { "NULL", "None", "Constant", "Convert", "NonResourceRangeVariableReference", "BinaryOperator", "UnaryOperator", "SingleValuePropertyAccess", "CollectionPropertyAccess", "SingleValueFunctionCall", "Any", "CollectionNavigationNode", "SingleNavigationNode", "SingleValueOpenPropertyAccess", "SingleResourceCast", "All", "CollectionResourceCast", "ResourceRangeVariableReference", "SingleResourceFunctionCall", "CollectionFunctionCall", "CollectionResourceFunctionCall", "NamedFunctionParameter", "ParameterAlias", "EntitySet", "KeyLookup", "SearchTerm", "CollectionOpenPropertyAccess", "CollectionComplexNode", "SingleComplexNode", "Count", "SingleValueCast", "CollectionPropertyNode", "AggregatedCollectionPropertyNode", "In", "CollectionConstant", "RootPath", "CustomQueryOption" };
    return kindArray[kind];
}

blockchainsservice_single_value_node_KIND_e single_value_node_kind_FromString(char* kind){
    int stringToReturn = 0;
    char *kindArray[] =  { "NULL", "None", "Constant", "Convert", "NonResourceRangeVariableReference", "BinaryOperator", "UnaryOperator", "SingleValuePropertyAccess", "CollectionPropertyAccess", "SingleValueFunctionCall", "Any", "CollectionNavigationNode", "SingleNavigationNode", "SingleValueOpenPropertyAccess", "SingleResourceCast", "All", "CollectionResourceCast", "ResourceRangeVariableReference", "SingleResourceFunctionCall", "CollectionFunctionCall", "CollectionResourceFunctionCall", "NamedFunctionParameter", "ParameterAlias", "EntitySet", "KeyLookup", "SearchTerm", "CollectionOpenPropertyAccess", "CollectionComplexNode", "SingleComplexNode", "Count", "SingleValueCast", "CollectionPropertyNode", "AggregatedCollectionPropertyNode", "In", "CollectionConstant", "RootPath", "CustomQueryOption" };
    size_t sizeofArray = sizeof(kindArray) / sizeof(kindArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(kind, kindArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

single_value_node_t *single_value_node_create(
    i_edm_type_reference_t *type_reference,
    blockchainsservice_single_value_node_KIND_e kind
    ) {
    single_value_node_t *single_value_node_local_var = malloc(sizeof(single_value_node_t));
    if (!single_value_node_local_var) {
        return NULL;
    }
    single_value_node_local_var->type_reference = type_reference;
    single_value_node_local_var->kind = kind;

    return single_value_node_local_var;
}


void single_value_node_free(single_value_node_t *single_value_node) {
    if(NULL == single_value_node){
        return ;
    }
    listEntry_t *listEntry;
    if (single_value_node->type_reference) {
        i_edm_type_reference_free(single_value_node->type_reference);
        single_value_node->type_reference = NULL;
    }
    free(single_value_node);
}

cJSON *single_value_node_convertToJSON(single_value_node_t *single_value_node) {
    cJSON *item = cJSON_CreateObject();

    // single_value_node->type_reference
    if(single_value_node->type_reference) {
    cJSON *type_reference_local_JSON = i_edm_type_reference_convertToJSON(single_value_node->type_reference);
    if(type_reference_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "typeReference", type_reference_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // single_value_node->kind
    if(single_value_node->kind != blockchainsservice_single_value_node_KIND_NULL) {
    if(cJSON_AddStringToObject(item, "kind", kindsingle_value_node_ToString(single_value_node->kind)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

single_value_node_t *single_value_node_parseFromJSON(cJSON *single_value_nodeJSON){

    single_value_node_t *single_value_node_local_var = NULL;

    // define the local variable for single_value_node->type_reference
    i_edm_type_reference_t *type_reference_local_nonprim = NULL;

    // single_value_node->type_reference
    cJSON *type_reference = cJSON_GetObjectItemCaseSensitive(single_value_nodeJSON, "typeReference");
    if (type_reference) { 
    type_reference_local_nonprim = i_edm_type_reference_parseFromJSON(type_reference); //nonprimitive
    }

    // single_value_node->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(single_value_nodeJSON, "kind");
    blockchainsservice_single_value_node_KIND_e kindVariable;
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //Enum
    }
    kindVariable = single_value_node_kind_FromString(kind->valuestring);
    }


    single_value_node_local_var = single_value_node_create (
        type_reference ? type_reference_local_nonprim : NULL,
        kind ? kindVariable : blockchainsservice_single_value_node_KIND_NULL
        );

    return single_value_node_local_var;
end:
    if (type_reference_local_nonprim) {
        i_edm_type_reference_free(type_reference_local_nonprim);
        type_reference_local_nonprim = NULL;
    }
    return NULL;

}
