#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "exchange_rate.h"



exchange_rate_t *exchange_rate_create(
    money_t *source,
    money_t *target,
    money_t *rate
    ) {
    exchange_rate_t *exchange_rate_local_var = malloc(sizeof(exchange_rate_t));
    if (!exchange_rate_local_var) {
        return NULL;
    }
    exchange_rate_local_var->source = source;
    exchange_rate_local_var->target = target;
    exchange_rate_local_var->rate = rate;

    return exchange_rate_local_var;
}


void exchange_rate_free(exchange_rate_t *exchange_rate) {
    if(NULL == exchange_rate){
        return ;
    }
    listEntry_t *listEntry;
    if (exchange_rate->source) {
        money_free(exchange_rate->source);
        exchange_rate->source = NULL;
    }
    if (exchange_rate->target) {
        money_free(exchange_rate->target);
        exchange_rate->target = NULL;
    }
    if (exchange_rate->rate) {
        money_free(exchange_rate->rate);
        exchange_rate->rate = NULL;
    }
    free(exchange_rate);
}

cJSON *exchange_rate_convertToJSON(exchange_rate_t *exchange_rate) {
    cJSON *item = cJSON_CreateObject();

    // exchange_rate->source
    if(exchange_rate->source) {
    cJSON *source_local_JSON = money_convertToJSON(exchange_rate->source);
    if(source_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "source", source_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // exchange_rate->target
    if(exchange_rate->target) {
    cJSON *target_local_JSON = money_convertToJSON(exchange_rate->target);
    if(target_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "target", target_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // exchange_rate->rate
    if(exchange_rate->rate) {
    cJSON *rate_local_JSON = money_convertToJSON(exchange_rate->rate);
    if(rate_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "rate", rate_local_JSON);
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

exchange_rate_t *exchange_rate_parseFromJSON(cJSON *exchange_rateJSON){

    exchange_rate_t *exchange_rate_local_var = NULL;

    // define the local variable for exchange_rate->source
    money_t *source_local_nonprim = NULL;

    // define the local variable for exchange_rate->target
    money_t *target_local_nonprim = NULL;

    // define the local variable for exchange_rate->rate
    money_t *rate_local_nonprim = NULL;

    // exchange_rate->source
    cJSON *source = cJSON_GetObjectItemCaseSensitive(exchange_rateJSON, "source");
    if (source) { 
    source_local_nonprim = money_parseFromJSON(source); //nonprimitive
    }

    // exchange_rate->target
    cJSON *target = cJSON_GetObjectItemCaseSensitive(exchange_rateJSON, "target");
    if (target) { 
    target_local_nonprim = money_parseFromJSON(target); //nonprimitive
    }

    // exchange_rate->rate
    cJSON *rate = cJSON_GetObjectItemCaseSensitive(exchange_rateJSON, "rate");
    if (rate) { 
    rate_local_nonprim = money_parseFromJSON(rate); //nonprimitive
    }


    exchange_rate_local_var = exchange_rate_create (
        source ? source_local_nonprim : NULL,
        target ? target_local_nonprim : NULL,
        rate ? rate_local_nonprim : NULL
        );

    return exchange_rate_local_var;
end:
    if (source_local_nonprim) {
        money_free(source_local_nonprim);
        source_local_nonprim = NULL;
    }
    if (target_local_nonprim) {
        money_free(target_local_nonprim);
        target_local_nonprim = NULL;
    }
    if (rate_local_nonprim) {
        money_free(rate_local_nonprim);
        rate_local_nonprim = NULL;
    }
    return NULL;

}
