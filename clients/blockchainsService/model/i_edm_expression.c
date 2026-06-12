#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_edm_expression.h"


char* i_edm_expression_expression_kind_ToString(blockchainsservice_i_edm_expression_EXPRESSIONKIND_e expression_kind) {
    char* expression_kindArray[] =  { "NULL", "None", "BinaryConstant", "BooleanConstant", "DateTimeOffsetConstant", "DecimalConstant", "FloatingConstant", "GuidConstant", "IntegerConstant", "StringConstant", "DurationConstant", "", "Record", "Collection", "Path", "If", "Cast", "IsOf", "FunctionApplication", "LabeledExpressionReference", "Labeled", "PropertyPath", "NavigationPropertyPath", "DateConstant", "TimeOfDayConstant", "EnumMember", "AnnotationPath" };
    return expression_kindArray[expression_kind];
}

blockchainsservice_i_edm_expression_EXPRESSIONKIND_e i_edm_expression_expression_kind_FromString(char* expression_kind){
    int stringToReturn = 0;
    char *expression_kindArray[] =  { "NULL", "None", "BinaryConstant", "BooleanConstant", "DateTimeOffsetConstant", "DecimalConstant", "FloatingConstant", "GuidConstant", "IntegerConstant", "StringConstant", "DurationConstant", "", "Record", "Collection", "Path", "If", "Cast", "IsOf", "FunctionApplication", "LabeledExpressionReference", "Labeled", "PropertyPath", "NavigationPropertyPath", "DateConstant", "TimeOfDayConstant", "EnumMember", "AnnotationPath" };
    size_t sizeofArray = sizeof(expression_kindArray) / sizeof(expression_kindArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(expression_kind, expression_kindArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

i_edm_expression_t *i_edm_expression_create(
    blockchainsservice_i_edm_expression_EXPRESSIONKIND_e expression_kind
    ) {
    i_edm_expression_t *i_edm_expression_local_var = malloc(sizeof(i_edm_expression_t));
    if (!i_edm_expression_local_var) {
        return NULL;
    }
    i_edm_expression_local_var->expression_kind = expression_kind;

    return i_edm_expression_local_var;
}


void i_edm_expression_free(i_edm_expression_t *i_edm_expression) {
    if(NULL == i_edm_expression){
        return ;
    }
    listEntry_t *listEntry;
    free(i_edm_expression);
}

cJSON *i_edm_expression_convertToJSON(i_edm_expression_t *i_edm_expression) {
    cJSON *item = cJSON_CreateObject();

    // i_edm_expression->expression_kind
    if(i_edm_expression->expression_kind != blockchainsservice_i_edm_expression_EXPRESSIONKIND_NULL) {
    if(cJSON_AddStringToObject(item, "expressionKind", expression_kindi_edm_expression_ToString(i_edm_expression->expression_kind)) == NULL)
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

i_edm_expression_t *i_edm_expression_parseFromJSON(cJSON *i_edm_expressionJSON){

    i_edm_expression_t *i_edm_expression_local_var = NULL;

    // i_edm_expression->expression_kind
    cJSON *expression_kind = cJSON_GetObjectItemCaseSensitive(i_edm_expressionJSON, "expressionKind");
    blockchainsservice_i_edm_expression_EXPRESSIONKIND_e expression_kindVariable;
    if (expression_kind) { 
    if(!cJSON_IsString(expression_kind))
    {
    goto end; //Enum
    }
    expression_kindVariable = i_edm_expression_expression_kind_FromString(expression_kind->valuestring);
    }


    i_edm_expression_local_var = i_edm_expression_create (
        expression_kind ? expression_kindVariable : blockchainsservice_i_edm_expression_EXPRESSIONKIND_NULL
        );

    return i_edm_expression_local_var;
end:
    return NULL;

}
