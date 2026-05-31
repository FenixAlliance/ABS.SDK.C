#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_edm_path_expression.h"


char* i_edm_path_expression_expression_kind_ToString(contentservice_i_edm_path_expression_EXPRESSIONKIND_e expression_kind) {
    char* expression_kindArray[] =  { "NULL", "None", "BinaryConstant", "BooleanConstant", "DateTimeOffsetConstant", "DecimalConstant", "FloatingConstant", "GuidConstant", "IntegerConstant", "StringConstant", "DurationConstant", "", "Record", "Collection", "Path", "If", "Cast", "IsOf", "FunctionApplication", "LabeledExpressionReference", "Labeled", "PropertyPath", "NavigationPropertyPath", "DateConstant", "TimeOfDayConstant", "EnumMember", "AnnotationPath" };
    return expression_kindArray[expression_kind];
}

contentservice_i_edm_path_expression_EXPRESSIONKIND_e i_edm_path_expression_expression_kind_FromString(char* expression_kind){
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

i_edm_path_expression_t *i_edm_path_expression_create(
    contentservice_i_edm_path_expression_EXPRESSIONKIND_e expression_kind,
    list_t *path_segments,
    char *path
    ) {
    i_edm_path_expression_t *i_edm_path_expression_local_var = malloc(sizeof(i_edm_path_expression_t));
    if (!i_edm_path_expression_local_var) {
        return NULL;
    }
    i_edm_path_expression_local_var->expression_kind = expression_kind;
    i_edm_path_expression_local_var->path_segments = path_segments;
    i_edm_path_expression_local_var->path = path;

    return i_edm_path_expression_local_var;
}


void i_edm_path_expression_free(i_edm_path_expression_t *i_edm_path_expression) {
    if(NULL == i_edm_path_expression){
        return ;
    }
    listEntry_t *listEntry;
    if (i_edm_path_expression->path_segments) {
        list_ForEach(listEntry, i_edm_path_expression->path_segments) {
            free(listEntry->data);
        }
        list_freeList(i_edm_path_expression->path_segments);
        i_edm_path_expression->path_segments = NULL;
    }
    if (i_edm_path_expression->path) {
        free(i_edm_path_expression->path);
        i_edm_path_expression->path = NULL;
    }
    free(i_edm_path_expression);
}

cJSON *i_edm_path_expression_convertToJSON(i_edm_path_expression_t *i_edm_path_expression) {
    cJSON *item = cJSON_CreateObject();

    // i_edm_path_expression->expression_kind
    if(i_edm_path_expression->expression_kind != contentservice_i_edm_path_expression_EXPRESSIONKIND_NULL) {
    if(cJSON_AddStringToObject(item, "expressionKind", expression_kindi_edm_path_expression_ToString(i_edm_path_expression->expression_kind)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // i_edm_path_expression->path_segments
    if(i_edm_path_expression->path_segments) {
    cJSON *path_segments = cJSON_AddArrayToObject(item, "pathSegments");
    if(path_segments == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *path_segmentsListEntry;
    list_ForEach(path_segmentsListEntry, i_edm_path_expression->path_segments) {
    if(cJSON_AddStringToObject(path_segments, "", (char*)path_segmentsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // i_edm_path_expression->path
    if(i_edm_path_expression->path) {
    if(cJSON_AddStringToObject(item, "path", i_edm_path_expression->path) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

i_edm_path_expression_t *i_edm_path_expression_parseFromJSON(cJSON *i_edm_path_expressionJSON){

    i_edm_path_expression_t *i_edm_path_expression_local_var = NULL;

    // define the local list for i_edm_path_expression->path_segments
    list_t *path_segmentsList = NULL;

    // i_edm_path_expression->expression_kind
    cJSON *expression_kind = cJSON_GetObjectItemCaseSensitive(i_edm_path_expressionJSON, "expressionKind");
    contentservice_i_edm_path_expression_EXPRESSIONKIND_e expression_kindVariable;
    if (expression_kind) { 
    if(!cJSON_IsString(expression_kind))
    {
    goto end; //Enum
    }
    expression_kindVariable = i_edm_path_expression_expression_kind_FromString(expression_kind->valuestring);
    }

    // i_edm_path_expression->path_segments
    cJSON *path_segments = cJSON_GetObjectItemCaseSensitive(i_edm_path_expressionJSON, "pathSegments");
    if (path_segments) { 
    cJSON *path_segments_local = NULL;
    if(!cJSON_IsArray(path_segments)) {
        goto end;//primitive container
    }
    path_segmentsList = list_createList();

    cJSON_ArrayForEach(path_segments_local, path_segments)
    {
        if(!cJSON_IsString(path_segments_local))
        {
            goto end;
        }
        list_addElement(path_segmentsList , strdup(path_segments_local->valuestring));
    }
    }

    // i_edm_path_expression->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(i_edm_path_expressionJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path) && !cJSON_IsNull(path))
    {
    goto end; //String
    }
    }


    i_edm_path_expression_local_var = i_edm_path_expression_create (
        expression_kind ? expression_kindVariable : contentservice_i_edm_path_expression_EXPRESSIONKIND_NULL,
        path_segments ? path_segmentsList : NULL,
        path && !cJSON_IsNull(path) ? strdup(path->valuestring) : NULL
        );

    return i_edm_path_expression_local_var;
end:
    if (path_segmentsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, path_segmentsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(path_segmentsList);
        path_segmentsList = NULL;
    }
    return NULL;

}
