/*
 * catalog_item_create_dto.h
 *
 * 
 */

#ifndef _catalog_item_create_dto_H_
#define _catalog_item_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct catalog_item_create_dto_t catalog_item_create_dto_t;




typedef struct catalog_item_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *sku; // string
    char *upc; // string
    char *ean; // string
    char *mpn; // string
    char *isbn; // string
    char *asin; // string
    char *gtin; // string
    char *sk_us; // string
    char *up_cs; // string
    char *ea_ns; // string
    char *part; // string
    char *name; // string
    char *type; // string
    char *mp_ns; // string
    char *isb_ns; // string
    char *asi_ns; // string
    char *gti_ns; // string
    char *model; // string
    char *title; // string
    char *color; // string
    char *unspsc; // string
    char *unit_id; // string
    char *series; // string
    char *barcode; // string
    char *unsps_cs; // string
    char *summary; // string
    char *brand_id; // string
    char *pattern; // string
    char *features; // string
    char *material; // string
    char *permalink; // string
    char *brand_name; // string
    char *variations; // string
    char *categories; // string
    char *language_id; // string
    char *item_type_id; // string
    char *category_id; // string
    char *currency_id; // string
    char *unit_group_id; // string
    char *description; // string
    char *ingredients; // string
    char *supplier_code; // string
    char *ships_to_rules; // string
    char *parent_item_id; // string
    char *purchase_note; // string
    char *tariff_heading; // string
    char *mozaic_cover_url; // string
    char *youtube_video_id; // string
    char *nutrition_facts; // string
    char *package_content; // string
    char *primary_image_url; // string
    char *google_categories; // string
    char *short_description; // string
    char *supplier_profile_id; // string
    char *shipping_country_id; // string
    char *system_requirements; // string
    char *custom_tax_description; // string
    char *page_cover_background_url; // string
    char *official_description_url; // string
    char *recently_viewed_record_id; // string
    char *primary_google_category_id; // string
    char *supported_operating_system; // string
    char *primary_google_category_name; // string
    int hot; //boolean
    int on_sale; //boolean
    int auction; //boolean
    int deleted; //boolean
    int digital; //boolean
    int pre_sale; //boolean
    int taxable; //boolean
    int in_stock; //boolean
    int trending; //boolean
    int featured; //boolean
    int low_stock; //boolean
    int published; //boolean
    int by_request; //boolean
    int on_discount; //boolean
    int is_daily_deal; //boolean
    int is_new_arrival; //boolean
    int is_weekly_deal; //boolean
    int is_best_seller; //boolean
    int is_monthly_deal; //boolean
    int has_variations; //boolean
    int is_fixed_discount; //boolean
    int manage_inventory; //boolean
    int is_dealers_choice; //boolean
    int is_official_choice; //boolean
    int valid_primary_image; //boolean
    int is_deadline_discount; //boolean
    int tax_included_in_price; //boolean
    int display_showcase_tab; //boolean
    int is_product_of_the_week; //boolean
    int is_product_of_the_month; //boolean
    int is_percentage_discount; //boolean
    int display_on_global_mozaic; //boolean
    int display_on_brands_mozaic; //boolean
    int disable_default_policies; //boolean
    int display_on_category_mozaic; //boolean
    int display_description_editor; //boolean
    int display_short_description_editor; //boolean
    int display_on_banner_marketing_rotation; //boolean
    int views_count; //numeric
    int reviews_count; //numeric
    int packaged_quantity; //numeric
    double recurrency; //numeric
    double current_stock; //numeric
    double custom_tax_value; //numeric
    double width; //numeric
    double weight; //numeric
    double length; //numeric
    double height; //numeric
    double total_tax; //numeric
    double final_price; //numeric
    double reviews_avg; //numeric
    double payment_cost; //numeric
    double regular_price; //numeric
    double discount_price; //numeric
    double discount_amount; //numeric
    double discount_percentage; //numeric
    double estimated_taxes_in_usd; //numeric
    double custom_tax_percentage; //numeric
    double estimated_profit_in_usd; //numeric
    double estimated_base_price_in_usd; //numeric
    double estimated_discounts_in_usd; //numeric
    double estimated_surcharges_in_usd; //numeric
    double estimated_payment_tax_in_usd; //numeric
    double estimated_total_price_in_usd; //numeric
    double estimated_payment_cost_in_usd; //numeric
    double estimated_deal_savings_in_usd; //numeric
    double estimated_regular_price_in_usd; //numeric
    double estimated_tax_base_price_in_usd; //numeric
    double estimated_witholding_taxes_in_usd; //numeric
    double estimated_withholding_taxes_in_usd; //numeric
    double estimated_default_shipping_tax_in_usd; //numeric
    double estimated_default_shipping_cost_in_usd; //numeric
    char *auction_end; //date time
    char *release_date; //date time
    char *auction_start; //date time
    char *published_date; //date time
    char *discount_dead_line; //date time
    char *deadline_discount_due_date; //date time
    char *deadline_discount_from_date; //date time
    char *last_fixed_prices_update_date_time; //date time
    list_t *selected_tags; //primitive container
    list_t *selected_types; //primitive container
    list_t *selected_brands; //primitive container
    list_t *selected_categories; //primitive container
    list_t *selected_tax_policies; //primitive container
    list_t *selected_pricing_rules; //primitive container
    list_t *selected_refund_policies; //primitive container
    list_t *selected_return_policies; //primitive container
    list_t *selected_pricing_policies; //primitive container
    list_t *selected_warranty_policies; //primitive container
    list_t *selected_shipment_policies; //primitive container
    list_t *selected_google_categories; //primitive container
    list_t *selected_attributes_options; //primitive container
    list_t *selected_selling_margin_policies; //primitive container

} catalog_item_create_dto_t;

catalog_item_create_dto_t *catalog_item_create_dto_create(
    char *id,
    char *timestamp,
    char *sku,
    char *upc,
    char *ean,
    char *mpn,
    char *isbn,
    char *asin,
    char *gtin,
    char *sk_us,
    char *up_cs,
    char *ea_ns,
    char *part,
    char *name,
    char *type,
    char *mp_ns,
    char *isb_ns,
    char *asi_ns,
    char *gti_ns,
    char *model,
    char *title,
    char *color,
    char *unspsc,
    char *unit_id,
    char *series,
    char *barcode,
    char *unsps_cs,
    char *summary,
    char *brand_id,
    char *pattern,
    char *features,
    char *material,
    char *permalink,
    char *brand_name,
    char *variations,
    char *categories,
    char *language_id,
    char *item_type_id,
    char *category_id,
    char *currency_id,
    char *unit_group_id,
    char *description,
    char *ingredients,
    char *supplier_code,
    char *ships_to_rules,
    char *parent_item_id,
    char *purchase_note,
    char *tariff_heading,
    char *mozaic_cover_url,
    char *youtube_video_id,
    char *nutrition_facts,
    char *package_content,
    char *primary_image_url,
    char *google_categories,
    char *short_description,
    char *supplier_profile_id,
    char *shipping_country_id,
    char *system_requirements,
    char *custom_tax_description,
    char *page_cover_background_url,
    char *official_description_url,
    char *recently_viewed_record_id,
    char *primary_google_category_id,
    char *supported_operating_system,
    char *primary_google_category_name,
    int hot,
    int on_sale,
    int auction,
    int deleted,
    int digital,
    int pre_sale,
    int taxable,
    int in_stock,
    int trending,
    int featured,
    int low_stock,
    int published,
    int by_request,
    int on_discount,
    int is_daily_deal,
    int is_new_arrival,
    int is_weekly_deal,
    int is_best_seller,
    int is_monthly_deal,
    int has_variations,
    int is_fixed_discount,
    int manage_inventory,
    int is_dealers_choice,
    int is_official_choice,
    int valid_primary_image,
    int is_deadline_discount,
    int tax_included_in_price,
    int display_showcase_tab,
    int is_product_of_the_week,
    int is_product_of_the_month,
    int is_percentage_discount,
    int display_on_global_mozaic,
    int display_on_brands_mozaic,
    int disable_default_policies,
    int display_on_category_mozaic,
    int display_description_editor,
    int display_short_description_editor,
    int display_on_banner_marketing_rotation,
    int views_count,
    int reviews_count,
    int packaged_quantity,
    double recurrency,
    double current_stock,
    double custom_tax_value,
    double width,
    double weight,
    double length,
    double height,
    double total_tax,
    double final_price,
    double reviews_avg,
    double payment_cost,
    double regular_price,
    double discount_price,
    double discount_amount,
    double discount_percentage,
    double estimated_taxes_in_usd,
    double custom_tax_percentage,
    double estimated_profit_in_usd,
    double estimated_base_price_in_usd,
    double estimated_discounts_in_usd,
    double estimated_surcharges_in_usd,
    double estimated_payment_tax_in_usd,
    double estimated_total_price_in_usd,
    double estimated_payment_cost_in_usd,
    double estimated_deal_savings_in_usd,
    double estimated_regular_price_in_usd,
    double estimated_tax_base_price_in_usd,
    double estimated_witholding_taxes_in_usd,
    double estimated_withholding_taxes_in_usd,
    double estimated_default_shipping_tax_in_usd,
    double estimated_default_shipping_cost_in_usd,
    char *auction_end,
    char *release_date,
    char *auction_start,
    char *published_date,
    char *discount_dead_line,
    char *deadline_discount_due_date,
    char *deadline_discount_from_date,
    char *last_fixed_prices_update_date_time,
    list_t *selected_tags,
    list_t *selected_types,
    list_t *selected_brands,
    list_t *selected_categories,
    list_t *selected_tax_policies,
    list_t *selected_pricing_rules,
    list_t *selected_refund_policies,
    list_t *selected_return_policies,
    list_t *selected_pricing_policies,
    list_t *selected_warranty_policies,
    list_t *selected_shipment_policies,
    list_t *selected_google_categories,
    list_t *selected_attributes_options,
    list_t *selected_selling_margin_policies
);

void catalog_item_create_dto_free(catalog_item_create_dto_t *catalog_item_create_dto);

catalog_item_create_dto_t *catalog_item_create_dto_parseFromJSON(cJSON *catalog_item_create_dtoJSON);

cJSON *catalog_item_create_dto_convertToJSON(catalog_item_create_dto_t *catalog_item_create_dto);

#endif /* _catalog_item_create_dto_H_ */

