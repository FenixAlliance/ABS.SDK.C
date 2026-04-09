#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "money.h"



money_t *money_create(
    double amount,
    currency_id_t *currency
    ) {
    money_t *money_local_var = malloc(sizeof(money_t));
    if (!money_local_var) {
        return NULL;
    }
    money_local_var->amount = amount;
    money_local_var->currency = currency;

    return money_local_var;
}


void money_free(money_t *money) {
    if(NULL == money){
        return ;
    }
    listEntry_t *listEntry;
    if (money->currency) {
        currency_id_free(money->currency);
        money->currency = NULL;
    }
    free(money);
}

cJSON *money_convertToJSON(money_t *money) {
    cJSON *item = cJSON_CreateObject();

    // money->amount
    if(money->amount) {
    if(cJSON_AddNumberToObject(item, "amount", money->amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // money->currency
    if(money->currency) {
    cJSON *currency_local_JSON = currency_id_convertToJSON(money->currency);
    if(currency_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "currency", currency_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

money_t *money_parseFromJSON(cJSON *moneyJSON){

    money_t *money_local_var = NULL;

    // define the local variable for money->currency
    currency_id_t *currency_local_nonprim = NULL;

    // money->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(moneyJSON, "amount");
    if (amount) { 
    if(!cJSON_IsNumber(amount))
    {
    goto end; //Numeric
    }
    }

    // money->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(moneyJSON, "currency");
    if (currency) { 
    currency_local_nonprim = currency_id_parseFromJSON(currency); //nonprimitive
    }


    money_local_var = money_create (
        amount ? amount->valuedouble : 0,
        currency ? currency_local_nonprim : NULL
        );

    return money_local_var;
end:
    if (currency_local_nonprim) {
        currency_id_free(currency_local_nonprim);
        currency_local_nonprim = NULL;
    }
    return NULL;

}
