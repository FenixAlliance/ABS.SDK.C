#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "trial_balance_dto.h"



trial_balance_dto_t *trial_balance_dto_create(
    char *fiscal_period_id,
    char *financial_book_id,
    char *currency_id,
    list_t *rows,
    double total_debit,
    double total_credit,
    int is_balanced
    ) {
    trial_balance_dto_t *trial_balance_dto_local_var = malloc(sizeof(trial_balance_dto_t));
    if (!trial_balance_dto_local_var) {
        return NULL;
    }
    trial_balance_dto_local_var->fiscal_period_id = fiscal_period_id;
    trial_balance_dto_local_var->financial_book_id = financial_book_id;
    trial_balance_dto_local_var->currency_id = currency_id;
    trial_balance_dto_local_var->rows = rows;
    trial_balance_dto_local_var->total_debit = total_debit;
    trial_balance_dto_local_var->total_credit = total_credit;
    trial_balance_dto_local_var->is_balanced = is_balanced;

    return trial_balance_dto_local_var;
}


void trial_balance_dto_free(trial_balance_dto_t *trial_balance_dto) {
    if(NULL == trial_balance_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (trial_balance_dto->fiscal_period_id) {
        free(trial_balance_dto->fiscal_period_id);
        trial_balance_dto->fiscal_period_id = NULL;
    }
    if (trial_balance_dto->financial_book_id) {
        free(trial_balance_dto->financial_book_id);
        trial_balance_dto->financial_book_id = NULL;
    }
    if (trial_balance_dto->currency_id) {
        free(trial_balance_dto->currency_id);
        trial_balance_dto->currency_id = NULL;
    }
    if (trial_balance_dto->rows) {
        list_ForEach(listEntry, trial_balance_dto->rows) {
            trial_balance_row_dto_free(listEntry->data);
        }
        list_freeList(trial_balance_dto->rows);
        trial_balance_dto->rows = NULL;
    }
    free(trial_balance_dto);
}

cJSON *trial_balance_dto_convertToJSON(trial_balance_dto_t *trial_balance_dto) {
    cJSON *item = cJSON_CreateObject();

    // trial_balance_dto->fiscal_period_id
    if(trial_balance_dto->fiscal_period_id) {
    if(cJSON_AddStringToObject(item, "fiscalPeriodId", trial_balance_dto->fiscal_period_id) == NULL) {
    goto fail; //String
    }
    }


    // trial_balance_dto->financial_book_id
    if(trial_balance_dto->financial_book_id) {
    if(cJSON_AddStringToObject(item, "financialBookId", trial_balance_dto->financial_book_id) == NULL) {
    goto fail; //String
    }
    }


    // trial_balance_dto->currency_id
    if(trial_balance_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", trial_balance_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // trial_balance_dto->rows
    if(trial_balance_dto->rows) {
    cJSON *rows = cJSON_AddArrayToObject(item, "rows");
    if(rows == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rowsListEntry;
    if (trial_balance_dto->rows) {
    list_ForEach(rowsListEntry, trial_balance_dto->rows) {
    cJSON *itemLocal = trial_balance_row_dto_convertToJSON(rowsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(rows, itemLocal);
    }
    }
    }


    // trial_balance_dto->total_debit
    if(trial_balance_dto->total_debit) {
    if(cJSON_AddNumberToObject(item, "totalDebit", trial_balance_dto->total_debit) == NULL) {
    goto fail; //Numeric
    }
    }


    // trial_balance_dto->total_credit
    if(trial_balance_dto->total_credit) {
    if(cJSON_AddNumberToObject(item, "totalCredit", trial_balance_dto->total_credit) == NULL) {
    goto fail; //Numeric
    }
    }


    // trial_balance_dto->is_balanced
    if(trial_balance_dto->is_balanced) {
    if(cJSON_AddBoolToObject(item, "isBalanced", trial_balance_dto->is_balanced) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

trial_balance_dto_t *trial_balance_dto_parseFromJSON(cJSON *trial_balance_dtoJSON){

    trial_balance_dto_t *trial_balance_dto_local_var = NULL;

    // define the local list for trial_balance_dto->rows
    list_t *rowsList = NULL;

    // trial_balance_dto->fiscal_period_id
    cJSON *fiscal_period_id = cJSON_GetObjectItemCaseSensitive(trial_balance_dtoJSON, "fiscalPeriodId");
    if (fiscal_period_id) { 
    if(!cJSON_IsString(fiscal_period_id) && !cJSON_IsNull(fiscal_period_id))
    {
    goto end; //String
    }
    }

    // trial_balance_dto->financial_book_id
    cJSON *financial_book_id = cJSON_GetObjectItemCaseSensitive(trial_balance_dtoJSON, "financialBookId");
    if (financial_book_id) { 
    if(!cJSON_IsString(financial_book_id) && !cJSON_IsNull(financial_book_id))
    {
    goto end; //String
    }
    }

    // trial_balance_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(trial_balance_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // trial_balance_dto->rows
    cJSON *rows = cJSON_GetObjectItemCaseSensitive(trial_balance_dtoJSON, "rows");
    if (rows) { 
    cJSON *rows_local_nonprimitive = NULL;
    if(!cJSON_IsArray(rows)){
        goto end; //nonprimitive container
    }

    rowsList = list_createList();

    cJSON_ArrayForEach(rows_local_nonprimitive,rows )
    {
        if(!cJSON_IsObject(rows_local_nonprimitive)){
            goto end;
        }
        trial_balance_row_dto_t *rowsItem = trial_balance_row_dto_parseFromJSON(rows_local_nonprimitive);

        list_addElement(rowsList, rowsItem);
    }
    }

    // trial_balance_dto->total_debit
    cJSON *total_debit = cJSON_GetObjectItemCaseSensitive(trial_balance_dtoJSON, "totalDebit");
    if (total_debit) { 
    if(!cJSON_IsNumber(total_debit))
    {
    goto end; //Numeric
    }
    }

    // trial_balance_dto->total_credit
    cJSON *total_credit = cJSON_GetObjectItemCaseSensitive(trial_balance_dtoJSON, "totalCredit");
    if (total_credit) { 
    if(!cJSON_IsNumber(total_credit))
    {
    goto end; //Numeric
    }
    }

    // trial_balance_dto->is_balanced
    cJSON *is_balanced = cJSON_GetObjectItemCaseSensitive(trial_balance_dtoJSON, "isBalanced");
    if (is_balanced) { 
    if(!cJSON_IsBool(is_balanced))
    {
    goto end; //Bool
    }
    }


    trial_balance_dto_local_var = trial_balance_dto_create (
        fiscal_period_id && !cJSON_IsNull(fiscal_period_id) ? strdup(fiscal_period_id->valuestring) : NULL,
        financial_book_id && !cJSON_IsNull(financial_book_id) ? strdup(financial_book_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        rows ? rowsList : NULL,
        total_debit ? total_debit->valuedouble : 0,
        total_credit ? total_credit->valuedouble : 0,
        is_balanced ? is_balanced->valueint : 0
        );

    return trial_balance_dto_local_var;
end:
    if (rowsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rowsList) {
            trial_balance_row_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rowsList);
        rowsList = NULL;
    }
    return NULL;

}
