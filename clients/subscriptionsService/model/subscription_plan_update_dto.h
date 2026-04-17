/*
 * subscription_plan_update_dto.h
 *
 * 
 */

#ifndef _subscription_plan_update_dto_H_
#define _subscription_plan_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subscription_plan_update_dto_t subscription_plan_update_dto_t;




typedef struct subscription_plan_update_dto_t {
    int hot; //boolean
    char *sku; // string
    char *upc; // string
    char *ean; // string
    char *mpn; // string
    char *sk_us; // string
    char *isbn; // string
    char *up_cs; // string
    char *ea_ns; // string
    char *asin; // string
    char *gtin; // string
    char *mp_ns; // string
    char *part; // string
    char *name; // string
    int on_sale; //boolean
    char *isb_ns; // string
    char *asi_ns; // string
    char *gti_ns; // string
    double width; //numeric
    char *model; // string
    int auction; //boolean
    char *title; // string
    char *color; // string
    int deleted; //boolean
    int digital; //boolean
    int pre_sale; //boolean
    int taxable; //boolean
    int in_stock; //boolean
    char *isb_n13; // string
    char *unspsc; // string
    double weight; //numeric
    double length; //numeric
    double height; //numeric
    char *unit_id; // string
    char *series; // string
    int featured; //boolean
    char *brands; // string
    int trending; //boolean
    int low_stock; //boolean
    char *barcode; // string
    char *unsps_cs; // string
    char *pattern; // string
    int published; //boolean
    int by_request; //boolean
    char *summary; // string
    char *brand_id; // string
    int views_count; //numeric
    char *features; // string
    char *material; // string
    int on_discount; //boolean
    double total_tax; //numeric
    char *permalink; // string
    char *brand_name; // string
    int reviews_count; //numeric
    int is_daily_deal; //boolean
    char *language_id; // string
    char *categories; // string
    double final_price; //numeric
    char *item_type_id; // string
    char *category_id; // string
    char *currency_id; // string
    double reviews_avg; //numeric
    int is_new_arrival; //boolean
    int is_weekly_deal; //boolean
    int is_best_seller; //boolean
    char *unit_group_id; // string
    char *description; // string
    char *ingredients; // string
    char *release_date; // string
    int is_monthly_deal; //boolean
    double recurrency; //numeric
    double payment_cost; //numeric
    double custom_tax_value; //numeric
    int has_variations; //boolean
    int questions_count; //numeric
    char *supplier_code; // string
    char *auction_end; //date time
    char *purchase_note; // string
    char *ships_to_rules; // string
    double regular_price; //numeric
    list_t *images; //primitive container
    double shipping_cost; //numeric
    char *parent_item_id; // string
    char *item_type_name; // string
    char *cart_record_id; // string
    list_t *variations; //primitive container
    char *tariff_heading; // string
    int packaged_quantity; //numeric
    int is_fixed_discount; //boolean
    double discount_price; //numeric
    int is_dealers_choice; //boolean
    double current_stock; //numeric
    int manage_inventory; //boolean
    char *auction_start; //date time
    char *nutrition_facts; // string
    char *mozaic_cover_url; // string
    char *package_content; // string
    double discount_amount; //numeric
    char *youtube_video_id; // string
    double in_cart_quantity; //numeric
    int is_official_choice; //boolean
    char *published_date; //date time
    char *primary_image_url; // string
    int valid_primary_image; //boolean
    double custom_tax_amount; //numeric
    char *long_description; // string
    char *compare_record_id; // string
    char *measurement_unit; // string
    char *short_description; // string
    char *google_categories; // string
    int is_deadline_discount; //boolean
    int display_showcase_tab; //boolean
    int tax_included_in_price; //boolean
    int is_product_of_the_week; //boolean
    char *supplier_profile_id; // string
    char *shipping_country_id; // string
    int is_product_of_the_month; //boolean
    char *system_requirements; // string
    int is_porcentual_discount; //boolean
    double discount_percentage; //numeric
    char *discount_dead_line; //date time
    int display_on_global_mozaic; //boolean
    int display_on_brands_mozaic; //boolean
    double custom_tax_percentage; //numeric
    double estimated_taxes_in_usd; //numeric
    char *custom_tax_description; // string
    int disable_default_policies; //boolean
    double estimated_profit_in_usd; //numeric
    int display_on_category_mozaic; //boolean
    char *official_description_url; // string
    char *energy_efficiency_rating; // string
    char *page_cover_background_url; // string
    double estimated_base_price_in_usd; //numeric
    double estimated_discounts_in_usd; //numeric
    char *operating_system_supported; // string
    double estimated_surcharges_in_usd; //numeric
    char *deadline_discount_due_date; //date time
    char *deadline_discount_from_date; //date time
    double estimated_regular_price_in_usd; //numeric
    double estimated_tax_base_price_in_usd; //numeric
    int display_on_banner_marketing_rotation; //boolean
    char *last_fixed_prices_update_date_time; //date time
    double estimated_witholding_taxes_in_usd; //numeric
    double estimated_payment_cost_in_usd; //numeric
    double estimated_payment_tax_in_usd; //numeric
    double estimated_default_shipping_cost_in_usd; //numeric
    double estimated_default_shipping_tax_in_usd; //numeric
    double estimated_total_price_in_usd; //numeric
    char *recently_viewed_record_id; // string
    int display_description_editor; //boolean
    char *primary_google_category_id; // string
    char *supported_operating_system; // string
    double estimated_deal_savings_in_usd; //numeric
    char *primary_google_category_name; // string
    int display_short_description_editor; //boolean
    double estimated_withholding_taxes_in_usd; //numeric
    list_t *selected_tags; //primitive container
    list_t *selected_types; //primitive container
    list_t *selected_brands; //primitive container
    list_t *selected_categories; //primitive container
    list_t *selected_tax_policies; //primitive container
    list_t *selected_pricing_rules; //primitive container
    list_t *selected_refund_policies; //primitive container
    list_t *selected_return_policies; //primitive container
    list_t *selected_pricing_policies; //primitive container
    list_t *selected_google_categories; //primitive container
    list_t *selected_warranty_policies; //primitive container
    list_t *selected_shipment_policies; //primitive container
    list_t *selected_attributes_options; //primitive container
    list_t *selected_selling_margin_policies; //primitive container
    int allow_subscription_trials; //boolean
    int is_perpetual_subscription; //boolean
    int trial_subscription_relative_expiration_in_days; //numeric
    int standard_subscription_relative_expiration_in_days; //numeric
    char *subscriptions_certificate_id; // string

} subscription_plan_update_dto_t;

subscription_plan_update_dto_t *subscription_plan_update_dto_create(
    int hot,
    char *sku,
    char *upc,
    char *ean,
    char *mpn,
    char *sk_us,
    char *isbn,
    char *up_cs,
    char *ea_ns,
    char *asin,
    char *gtin,
    char *mp_ns,
    char *part,
    char *name,
    int on_sale,
    char *isb_ns,
    char *asi_ns,
    char *gti_ns,
    double width,
    char *model,
    int auction,
    char *title,
    char *color,
    int deleted,
    int digital,
    int pre_sale,
    int taxable,
    int in_stock,
    char *isb_n13,
    char *unspsc,
    double weight,
    double length,
    double height,
    char *unit_id,
    char *series,
    int featured,
    char *brands,
    int trending,
    int low_stock,
    char *barcode,
    char *unsps_cs,
    char *pattern,
    int published,
    int by_request,
    char *summary,
    char *brand_id,
    int views_count,
    char *features,
    char *material,
    int on_discount,
    double total_tax,
    char *permalink,
    char *brand_name,
    int reviews_count,
    int is_daily_deal,
    char *language_id,
    char *categories,
    double final_price,
    char *item_type_id,
    char *category_id,
    char *currency_id,
    double reviews_avg,
    int is_new_arrival,
    int is_weekly_deal,
    int is_best_seller,
    char *unit_group_id,
    char *description,
    char *ingredients,
    char *release_date,
    int is_monthly_deal,
    double recurrency,
    double payment_cost,
    double custom_tax_value,
    int has_variations,
    int questions_count,
    char *supplier_code,
    char *auction_end,
    char *purchase_note,
    char *ships_to_rules,
    double regular_price,
    list_t *images,
    double shipping_cost,
    char *parent_item_id,
    char *item_type_name,
    char *cart_record_id,
    list_t *variations,
    char *tariff_heading,
    int packaged_quantity,
    int is_fixed_discount,
    double discount_price,
    int is_dealers_choice,
    double current_stock,
    int manage_inventory,
    char *auction_start,
    char *nutrition_facts,
    char *mozaic_cover_url,
    char *package_content,
    double discount_amount,
    char *youtube_video_id,
    double in_cart_quantity,
    int is_official_choice,
    char *published_date,
    char *primary_image_url,
    int valid_primary_image,
    double custom_tax_amount,
    char *long_description,
    char *compare_record_id,
    char *measurement_unit,
    char *short_description,
    char *google_categories,
    int is_deadline_discount,
    int display_showcase_tab,
    int tax_included_in_price,
    int is_product_of_the_week,
    char *supplier_profile_id,
    char *shipping_country_id,
    int is_product_of_the_month,
    char *system_requirements,
    int is_porcentual_discount,
    double discount_percentage,
    char *discount_dead_line,
    int display_on_global_mozaic,
    int display_on_brands_mozaic,
    double custom_tax_percentage,
    double estimated_taxes_in_usd,
    char *custom_tax_description,
    int disable_default_policies,
    double estimated_profit_in_usd,
    int display_on_category_mozaic,
    char *official_description_url,
    char *energy_efficiency_rating,
    char *page_cover_background_url,
    double estimated_base_price_in_usd,
    double estimated_discounts_in_usd,
    char *operating_system_supported,
    double estimated_surcharges_in_usd,
    char *deadline_discount_due_date,
    char *deadline_discount_from_date,
    double estimated_regular_price_in_usd,
    double estimated_tax_base_price_in_usd,
    int display_on_banner_marketing_rotation,
    char *last_fixed_prices_update_date_time,
    double estimated_witholding_taxes_in_usd,
    double estimated_payment_cost_in_usd,
    double estimated_payment_tax_in_usd,
    double estimated_default_shipping_cost_in_usd,
    double estimated_default_shipping_tax_in_usd,
    double estimated_total_price_in_usd,
    char *recently_viewed_record_id,
    int display_description_editor,
    char *primary_google_category_id,
    char *supported_operating_system,
    double estimated_deal_savings_in_usd,
    char *primary_google_category_name,
    int display_short_description_editor,
    double estimated_withholding_taxes_in_usd,
    list_t *selected_tags,
    list_t *selected_types,
    list_t *selected_brands,
    list_t *selected_categories,
    list_t *selected_tax_policies,
    list_t *selected_pricing_rules,
    list_t *selected_refund_policies,
    list_t *selected_return_policies,
    list_t *selected_pricing_policies,
    list_t *selected_google_categories,
    list_t *selected_warranty_policies,
    list_t *selected_shipment_policies,
    list_t *selected_attributes_options,
    list_t *selected_selling_margin_policies,
    int allow_subscription_trials,
    int is_perpetual_subscription,
    int trial_subscription_relative_expiration_in_days,
    int standard_subscription_relative_expiration_in_days,
    char *subscriptions_certificate_id
);

void subscription_plan_update_dto_free(subscription_plan_update_dto_t *subscription_plan_update_dto);

subscription_plan_update_dto_t *subscription_plan_update_dto_parseFromJSON(cJSON *subscription_plan_update_dtoJSON);

cJSON *subscription_plan_update_dto_convertToJSON(subscription_plan_update_dto_t *subscription_plan_update_dto);

#endif /* _subscription_plan_update_dto_H_ */

