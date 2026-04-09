/*
 * service_level_dto.h
 *
 * 
 */

#ifndef _service_level_dto_H_
#define _service_level_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct service_level_dto_t service_level_dto_t;




typedef struct service_level_dto_t {
    char *id; // string
    char *timestamp; //date time
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
    char *isb_ns; // string
    char *asi_ns; // string
    char *gti_ns; // string
    char *model; // string
    char *title; // string
    char *color; // string
    char *isb_n13; // string
    char *unspsc; // string
    char *unit_id; // string
    char *series; // string
    char *barcode; // string
    char *unsps_cs; // string
    char *pattern; // string
    char *summary; // string
    char *brand_id; // string
    char *features; // string
    char *material; // string
    char *tenant_id; // string
    char *permalink; // string
    char *brand_name; // string
    char *language_id; // string
    char *item_type_id; // string
    char *category_id; // string
    char *currency_id; // string
    char *unit_group_id; // string
    char *description; // string
    char *ingredients; // string
    char *release_date; // string
    char *enrollment_id; // string
    char *supplier_code; // string
    char *ships_to_rules; // string
    char *purchase_note; // string
    char *parent_item_id; // string
    char *item_type_name; // string
    char *discriminator; // string
    char *tariff_heading; // string
    char *nutrition_facts; // string
    char *mozaic_cover_url; // string
    char *package_content; // string
    char *youtube_video_id; // string
    char *primary_image_url; // string
    char *long_description; // string
    char *measurement_unit; // string
    char *short_description; // string
    char *google_categories; // string
    char *supplier_profile_id; // string
    char *shipping_country_id; // string
    char *system_requirements; // string
    char *custom_tax_description; // string
    char *official_description_url; // string
    char *energy_efficiency_rating; // string
    char *page_cover_background_url; // string
    char *primary_google_category_id; // string
    char *operating_system_supported; // string
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
    int featured; //boolean
    int trending; //boolean
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
    int is_dealers_choice; //boolean
    int manage_inventory; //boolean
    int is_official_choice; //boolean
    int valid_primary_image; //boolean
    int is_deadline_discount; //boolean
    int display_showcase_tab; //boolean
    int tax_included_in_price; //boolean
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
    char *auction_end; //date time
    char *auction_start; //date time
    char *published_date; //date time
    char *deadline_discount_from_date; //date time
    char *deadline_discount_due_date; //date time
    char *last_fixed_prices_update_date_time; //date time
    list_t *images; //primitive container
    int views_count; //numeric
    int reviews_count; //numeric
    int questions_count; //numeric
    int packaged_quantity; //numeric
    double reviews_avg; //numeric
    double recurrency; //numeric
    double current_stock; //numeric
    double width; //numeric
    double weight; //numeric
    double length; //numeric
    double height; //numeric
    double regular_price; //numeric
    double discount_price; //numeric
    double custom_tax_value; //numeric
    double discount_amount; //numeric
    double in_cart_quantity; //numeric
    double custom_tax_amount; //numeric
    double discount_percentage; //numeric
    double custom_tax_percentage; //numeric
    double estimated_taxes_in_usd; //numeric
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
    double estimated_withholding_taxes_in_usd; //numeric
    double estimated_default_shipping_tax_in_usd; //numeric
    double estimated_default_shipping_cost_in_usd; //numeric
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
    char *service_id; // string

} service_level_dto_t;

service_level_dto_t *service_level_dto_create(
    char *id,
    char *timestamp,
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
    char *isb_ns,
    char *asi_ns,
    char *gti_ns,
    char *model,
    char *title,
    char *color,
    char *isb_n13,
    char *unspsc,
    char *unit_id,
    char *series,
    char *barcode,
    char *unsps_cs,
    char *pattern,
    char *summary,
    char *brand_id,
    char *features,
    char *material,
    char *tenant_id,
    char *permalink,
    char *brand_name,
    char *language_id,
    char *item_type_id,
    char *category_id,
    char *currency_id,
    char *unit_group_id,
    char *description,
    char *ingredients,
    char *release_date,
    char *enrollment_id,
    char *supplier_code,
    char *ships_to_rules,
    char *purchase_note,
    char *parent_item_id,
    char *item_type_name,
    char *discriminator,
    char *tariff_heading,
    char *nutrition_facts,
    char *mozaic_cover_url,
    char *package_content,
    char *youtube_video_id,
    char *primary_image_url,
    char *long_description,
    char *measurement_unit,
    char *short_description,
    char *google_categories,
    char *supplier_profile_id,
    char *shipping_country_id,
    char *system_requirements,
    char *custom_tax_description,
    char *official_description_url,
    char *energy_efficiency_rating,
    char *page_cover_background_url,
    char *primary_google_category_id,
    char *operating_system_supported,
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
    int featured,
    int trending,
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
    int is_dealers_choice,
    int manage_inventory,
    int is_official_choice,
    int valid_primary_image,
    int is_deadline_discount,
    int display_showcase_tab,
    int tax_included_in_price,
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
    char *auction_end,
    char *auction_start,
    char *published_date,
    char *deadline_discount_from_date,
    char *deadline_discount_due_date,
    char *last_fixed_prices_update_date_time,
    list_t *images,
    int views_count,
    int reviews_count,
    int questions_count,
    int packaged_quantity,
    double reviews_avg,
    double recurrency,
    double current_stock,
    double width,
    double weight,
    double length,
    double height,
    double regular_price,
    double discount_price,
    double custom_tax_value,
    double discount_amount,
    double in_cart_quantity,
    double custom_tax_amount,
    double discount_percentage,
    double custom_tax_percentage,
    double estimated_taxes_in_usd,
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
    double estimated_withholding_taxes_in_usd,
    double estimated_default_shipping_tax_in_usd,
    double estimated_default_shipping_cost_in_usd,
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
    char *service_id
);

void service_level_dto_free(service_level_dto_t *service_level_dto);

service_level_dto_t *service_level_dto_parseFromJSON(cJSON *service_level_dtoJSON);

cJSON *service_level_dto_convertToJSON(service_level_dto_t *service_level_dto);

#endif /* _service_level_dto_H_ */

