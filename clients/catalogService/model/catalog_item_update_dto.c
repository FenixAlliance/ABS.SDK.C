#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "catalog_item_update_dto.h"



catalog_item_update_dto_t *catalog_item_update_dto_create(
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
    char *tenant_id,
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
    char *enrollment_id,
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
    list_t *selected_selling_margin_policies
    ) {
    catalog_item_update_dto_t *catalog_item_update_dto_local_var = malloc(sizeof(catalog_item_update_dto_t));
    if (!catalog_item_update_dto_local_var) {
        return NULL;
    }
    catalog_item_update_dto_local_var->hot = hot;
    catalog_item_update_dto_local_var->sku = sku;
    catalog_item_update_dto_local_var->upc = upc;
    catalog_item_update_dto_local_var->ean = ean;
    catalog_item_update_dto_local_var->mpn = mpn;
    catalog_item_update_dto_local_var->sk_us = sk_us;
    catalog_item_update_dto_local_var->isbn = isbn;
    catalog_item_update_dto_local_var->up_cs = up_cs;
    catalog_item_update_dto_local_var->ea_ns = ea_ns;
    catalog_item_update_dto_local_var->asin = asin;
    catalog_item_update_dto_local_var->gtin = gtin;
    catalog_item_update_dto_local_var->mp_ns = mp_ns;
    catalog_item_update_dto_local_var->part = part;
    catalog_item_update_dto_local_var->name = name;
    catalog_item_update_dto_local_var->on_sale = on_sale;
    catalog_item_update_dto_local_var->isb_ns = isb_ns;
    catalog_item_update_dto_local_var->asi_ns = asi_ns;
    catalog_item_update_dto_local_var->gti_ns = gti_ns;
    catalog_item_update_dto_local_var->width = width;
    catalog_item_update_dto_local_var->model = model;
    catalog_item_update_dto_local_var->auction = auction;
    catalog_item_update_dto_local_var->title = title;
    catalog_item_update_dto_local_var->color = color;
    catalog_item_update_dto_local_var->deleted = deleted;
    catalog_item_update_dto_local_var->digital = digital;
    catalog_item_update_dto_local_var->pre_sale = pre_sale;
    catalog_item_update_dto_local_var->taxable = taxable;
    catalog_item_update_dto_local_var->in_stock = in_stock;
    catalog_item_update_dto_local_var->isb_n13 = isb_n13;
    catalog_item_update_dto_local_var->unspsc = unspsc;
    catalog_item_update_dto_local_var->weight = weight;
    catalog_item_update_dto_local_var->length = length;
    catalog_item_update_dto_local_var->height = height;
    catalog_item_update_dto_local_var->unit_id = unit_id;
    catalog_item_update_dto_local_var->series = series;
    catalog_item_update_dto_local_var->featured = featured;
    catalog_item_update_dto_local_var->brands = brands;
    catalog_item_update_dto_local_var->trending = trending;
    catalog_item_update_dto_local_var->low_stock = low_stock;
    catalog_item_update_dto_local_var->barcode = barcode;
    catalog_item_update_dto_local_var->unsps_cs = unsps_cs;
    catalog_item_update_dto_local_var->pattern = pattern;
    catalog_item_update_dto_local_var->published = published;
    catalog_item_update_dto_local_var->by_request = by_request;
    catalog_item_update_dto_local_var->summary = summary;
    catalog_item_update_dto_local_var->brand_id = brand_id;
    catalog_item_update_dto_local_var->views_count = views_count;
    catalog_item_update_dto_local_var->features = features;
    catalog_item_update_dto_local_var->material = material;
    catalog_item_update_dto_local_var->on_discount = on_discount;
    catalog_item_update_dto_local_var->total_tax = total_tax;
    catalog_item_update_dto_local_var->tenant_id = tenant_id;
    catalog_item_update_dto_local_var->permalink = permalink;
    catalog_item_update_dto_local_var->brand_name = brand_name;
    catalog_item_update_dto_local_var->reviews_count = reviews_count;
    catalog_item_update_dto_local_var->is_daily_deal = is_daily_deal;
    catalog_item_update_dto_local_var->language_id = language_id;
    catalog_item_update_dto_local_var->categories = categories;
    catalog_item_update_dto_local_var->final_price = final_price;
    catalog_item_update_dto_local_var->item_type_id = item_type_id;
    catalog_item_update_dto_local_var->category_id = category_id;
    catalog_item_update_dto_local_var->currency_id = currency_id;
    catalog_item_update_dto_local_var->reviews_avg = reviews_avg;
    catalog_item_update_dto_local_var->is_new_arrival = is_new_arrival;
    catalog_item_update_dto_local_var->is_weekly_deal = is_weekly_deal;
    catalog_item_update_dto_local_var->is_best_seller = is_best_seller;
    catalog_item_update_dto_local_var->unit_group_id = unit_group_id;
    catalog_item_update_dto_local_var->description = description;
    catalog_item_update_dto_local_var->ingredients = ingredients;
    catalog_item_update_dto_local_var->release_date = release_date;
    catalog_item_update_dto_local_var->is_monthly_deal = is_monthly_deal;
    catalog_item_update_dto_local_var->recurrency = recurrency;
    catalog_item_update_dto_local_var->payment_cost = payment_cost;
    catalog_item_update_dto_local_var->custom_tax_value = custom_tax_value;
    catalog_item_update_dto_local_var->has_variations = has_variations;
    catalog_item_update_dto_local_var->questions_count = questions_count;
    catalog_item_update_dto_local_var->enrollment_id = enrollment_id;
    catalog_item_update_dto_local_var->supplier_code = supplier_code;
    catalog_item_update_dto_local_var->auction_end = auction_end;
    catalog_item_update_dto_local_var->purchase_note = purchase_note;
    catalog_item_update_dto_local_var->ships_to_rules = ships_to_rules;
    catalog_item_update_dto_local_var->regular_price = regular_price;
    catalog_item_update_dto_local_var->images = images;
    catalog_item_update_dto_local_var->shipping_cost = shipping_cost;
    catalog_item_update_dto_local_var->parent_item_id = parent_item_id;
    catalog_item_update_dto_local_var->item_type_name = item_type_name;
    catalog_item_update_dto_local_var->cart_record_id = cart_record_id;
    catalog_item_update_dto_local_var->variations = variations;
    catalog_item_update_dto_local_var->tariff_heading = tariff_heading;
    catalog_item_update_dto_local_var->packaged_quantity = packaged_quantity;
    catalog_item_update_dto_local_var->is_fixed_discount = is_fixed_discount;
    catalog_item_update_dto_local_var->discount_price = discount_price;
    catalog_item_update_dto_local_var->is_dealers_choice = is_dealers_choice;
    catalog_item_update_dto_local_var->current_stock = current_stock;
    catalog_item_update_dto_local_var->manage_inventory = manage_inventory;
    catalog_item_update_dto_local_var->auction_start = auction_start;
    catalog_item_update_dto_local_var->nutrition_facts = nutrition_facts;
    catalog_item_update_dto_local_var->mozaic_cover_url = mozaic_cover_url;
    catalog_item_update_dto_local_var->package_content = package_content;
    catalog_item_update_dto_local_var->discount_amount = discount_amount;
    catalog_item_update_dto_local_var->youtube_video_id = youtube_video_id;
    catalog_item_update_dto_local_var->in_cart_quantity = in_cart_quantity;
    catalog_item_update_dto_local_var->is_official_choice = is_official_choice;
    catalog_item_update_dto_local_var->published_date = published_date;
    catalog_item_update_dto_local_var->primary_image_url = primary_image_url;
    catalog_item_update_dto_local_var->valid_primary_image = valid_primary_image;
    catalog_item_update_dto_local_var->custom_tax_amount = custom_tax_amount;
    catalog_item_update_dto_local_var->long_description = long_description;
    catalog_item_update_dto_local_var->compare_record_id = compare_record_id;
    catalog_item_update_dto_local_var->measurement_unit = measurement_unit;
    catalog_item_update_dto_local_var->short_description = short_description;
    catalog_item_update_dto_local_var->google_categories = google_categories;
    catalog_item_update_dto_local_var->is_deadline_discount = is_deadline_discount;
    catalog_item_update_dto_local_var->display_showcase_tab = display_showcase_tab;
    catalog_item_update_dto_local_var->tax_included_in_price = tax_included_in_price;
    catalog_item_update_dto_local_var->is_product_of_the_week = is_product_of_the_week;
    catalog_item_update_dto_local_var->supplier_profile_id = supplier_profile_id;
    catalog_item_update_dto_local_var->shipping_country_id = shipping_country_id;
    catalog_item_update_dto_local_var->is_product_of_the_month = is_product_of_the_month;
    catalog_item_update_dto_local_var->system_requirements = system_requirements;
    catalog_item_update_dto_local_var->is_porcentual_discount = is_porcentual_discount;
    catalog_item_update_dto_local_var->discount_percentage = discount_percentage;
    catalog_item_update_dto_local_var->discount_dead_line = discount_dead_line;
    catalog_item_update_dto_local_var->display_on_global_mozaic = display_on_global_mozaic;
    catalog_item_update_dto_local_var->display_on_brands_mozaic = display_on_brands_mozaic;
    catalog_item_update_dto_local_var->custom_tax_percentage = custom_tax_percentage;
    catalog_item_update_dto_local_var->estimated_taxes_in_usd = estimated_taxes_in_usd;
    catalog_item_update_dto_local_var->custom_tax_description = custom_tax_description;
    catalog_item_update_dto_local_var->disable_default_policies = disable_default_policies;
    catalog_item_update_dto_local_var->estimated_profit_in_usd = estimated_profit_in_usd;
    catalog_item_update_dto_local_var->display_on_category_mozaic = display_on_category_mozaic;
    catalog_item_update_dto_local_var->official_description_url = official_description_url;
    catalog_item_update_dto_local_var->energy_efficiency_rating = energy_efficiency_rating;
    catalog_item_update_dto_local_var->page_cover_background_url = page_cover_background_url;
    catalog_item_update_dto_local_var->estimated_base_price_in_usd = estimated_base_price_in_usd;
    catalog_item_update_dto_local_var->estimated_discounts_in_usd = estimated_discounts_in_usd;
    catalog_item_update_dto_local_var->operating_system_supported = operating_system_supported;
    catalog_item_update_dto_local_var->estimated_surcharges_in_usd = estimated_surcharges_in_usd;
    catalog_item_update_dto_local_var->deadline_discount_due_date = deadline_discount_due_date;
    catalog_item_update_dto_local_var->deadline_discount_from_date = deadline_discount_from_date;
    catalog_item_update_dto_local_var->estimated_regular_price_in_usd = estimated_regular_price_in_usd;
    catalog_item_update_dto_local_var->estimated_tax_base_price_in_usd = estimated_tax_base_price_in_usd;
    catalog_item_update_dto_local_var->display_on_banner_marketing_rotation = display_on_banner_marketing_rotation;
    catalog_item_update_dto_local_var->last_fixed_prices_update_date_time = last_fixed_prices_update_date_time;
    catalog_item_update_dto_local_var->estimated_witholding_taxes_in_usd = estimated_witholding_taxes_in_usd;
    catalog_item_update_dto_local_var->estimated_payment_cost_in_usd = estimated_payment_cost_in_usd;
    catalog_item_update_dto_local_var->estimated_payment_tax_in_usd = estimated_payment_tax_in_usd;
    catalog_item_update_dto_local_var->estimated_default_shipping_cost_in_usd = estimated_default_shipping_cost_in_usd;
    catalog_item_update_dto_local_var->estimated_default_shipping_tax_in_usd = estimated_default_shipping_tax_in_usd;
    catalog_item_update_dto_local_var->estimated_total_price_in_usd = estimated_total_price_in_usd;
    catalog_item_update_dto_local_var->recently_viewed_record_id = recently_viewed_record_id;
    catalog_item_update_dto_local_var->display_description_editor = display_description_editor;
    catalog_item_update_dto_local_var->primary_google_category_id = primary_google_category_id;
    catalog_item_update_dto_local_var->supported_operating_system = supported_operating_system;
    catalog_item_update_dto_local_var->estimated_deal_savings_in_usd = estimated_deal_savings_in_usd;
    catalog_item_update_dto_local_var->primary_google_category_name = primary_google_category_name;
    catalog_item_update_dto_local_var->display_short_description_editor = display_short_description_editor;
    catalog_item_update_dto_local_var->estimated_withholding_taxes_in_usd = estimated_withholding_taxes_in_usd;
    catalog_item_update_dto_local_var->selected_tags = selected_tags;
    catalog_item_update_dto_local_var->selected_types = selected_types;
    catalog_item_update_dto_local_var->selected_brands = selected_brands;
    catalog_item_update_dto_local_var->selected_categories = selected_categories;
    catalog_item_update_dto_local_var->selected_tax_policies = selected_tax_policies;
    catalog_item_update_dto_local_var->selected_pricing_rules = selected_pricing_rules;
    catalog_item_update_dto_local_var->selected_refund_policies = selected_refund_policies;
    catalog_item_update_dto_local_var->selected_return_policies = selected_return_policies;
    catalog_item_update_dto_local_var->selected_pricing_policies = selected_pricing_policies;
    catalog_item_update_dto_local_var->selected_google_categories = selected_google_categories;
    catalog_item_update_dto_local_var->selected_warranty_policies = selected_warranty_policies;
    catalog_item_update_dto_local_var->selected_shipment_policies = selected_shipment_policies;
    catalog_item_update_dto_local_var->selected_attributes_options = selected_attributes_options;
    catalog_item_update_dto_local_var->selected_selling_margin_policies = selected_selling_margin_policies;

    return catalog_item_update_dto_local_var;
}


void catalog_item_update_dto_free(catalog_item_update_dto_t *catalog_item_update_dto) {
    if(NULL == catalog_item_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (catalog_item_update_dto->sku) {
        free(catalog_item_update_dto->sku);
        catalog_item_update_dto->sku = NULL;
    }
    if (catalog_item_update_dto->upc) {
        free(catalog_item_update_dto->upc);
        catalog_item_update_dto->upc = NULL;
    }
    if (catalog_item_update_dto->ean) {
        free(catalog_item_update_dto->ean);
        catalog_item_update_dto->ean = NULL;
    }
    if (catalog_item_update_dto->mpn) {
        free(catalog_item_update_dto->mpn);
        catalog_item_update_dto->mpn = NULL;
    }
    if (catalog_item_update_dto->sk_us) {
        free(catalog_item_update_dto->sk_us);
        catalog_item_update_dto->sk_us = NULL;
    }
    if (catalog_item_update_dto->isbn) {
        free(catalog_item_update_dto->isbn);
        catalog_item_update_dto->isbn = NULL;
    }
    if (catalog_item_update_dto->up_cs) {
        free(catalog_item_update_dto->up_cs);
        catalog_item_update_dto->up_cs = NULL;
    }
    if (catalog_item_update_dto->ea_ns) {
        free(catalog_item_update_dto->ea_ns);
        catalog_item_update_dto->ea_ns = NULL;
    }
    if (catalog_item_update_dto->asin) {
        free(catalog_item_update_dto->asin);
        catalog_item_update_dto->asin = NULL;
    }
    if (catalog_item_update_dto->gtin) {
        free(catalog_item_update_dto->gtin);
        catalog_item_update_dto->gtin = NULL;
    }
    if (catalog_item_update_dto->mp_ns) {
        free(catalog_item_update_dto->mp_ns);
        catalog_item_update_dto->mp_ns = NULL;
    }
    if (catalog_item_update_dto->part) {
        free(catalog_item_update_dto->part);
        catalog_item_update_dto->part = NULL;
    }
    if (catalog_item_update_dto->name) {
        free(catalog_item_update_dto->name);
        catalog_item_update_dto->name = NULL;
    }
    if (catalog_item_update_dto->isb_ns) {
        free(catalog_item_update_dto->isb_ns);
        catalog_item_update_dto->isb_ns = NULL;
    }
    if (catalog_item_update_dto->asi_ns) {
        free(catalog_item_update_dto->asi_ns);
        catalog_item_update_dto->asi_ns = NULL;
    }
    if (catalog_item_update_dto->gti_ns) {
        free(catalog_item_update_dto->gti_ns);
        catalog_item_update_dto->gti_ns = NULL;
    }
    if (catalog_item_update_dto->model) {
        free(catalog_item_update_dto->model);
        catalog_item_update_dto->model = NULL;
    }
    if (catalog_item_update_dto->title) {
        free(catalog_item_update_dto->title);
        catalog_item_update_dto->title = NULL;
    }
    if (catalog_item_update_dto->color) {
        free(catalog_item_update_dto->color);
        catalog_item_update_dto->color = NULL;
    }
    if (catalog_item_update_dto->isb_n13) {
        free(catalog_item_update_dto->isb_n13);
        catalog_item_update_dto->isb_n13 = NULL;
    }
    if (catalog_item_update_dto->unspsc) {
        free(catalog_item_update_dto->unspsc);
        catalog_item_update_dto->unspsc = NULL;
    }
    if (catalog_item_update_dto->unit_id) {
        free(catalog_item_update_dto->unit_id);
        catalog_item_update_dto->unit_id = NULL;
    }
    if (catalog_item_update_dto->series) {
        free(catalog_item_update_dto->series);
        catalog_item_update_dto->series = NULL;
    }
    if (catalog_item_update_dto->brands) {
        free(catalog_item_update_dto->brands);
        catalog_item_update_dto->brands = NULL;
    }
    if (catalog_item_update_dto->barcode) {
        free(catalog_item_update_dto->barcode);
        catalog_item_update_dto->barcode = NULL;
    }
    if (catalog_item_update_dto->unsps_cs) {
        free(catalog_item_update_dto->unsps_cs);
        catalog_item_update_dto->unsps_cs = NULL;
    }
    if (catalog_item_update_dto->pattern) {
        free(catalog_item_update_dto->pattern);
        catalog_item_update_dto->pattern = NULL;
    }
    if (catalog_item_update_dto->summary) {
        free(catalog_item_update_dto->summary);
        catalog_item_update_dto->summary = NULL;
    }
    if (catalog_item_update_dto->brand_id) {
        free(catalog_item_update_dto->brand_id);
        catalog_item_update_dto->brand_id = NULL;
    }
    if (catalog_item_update_dto->features) {
        free(catalog_item_update_dto->features);
        catalog_item_update_dto->features = NULL;
    }
    if (catalog_item_update_dto->material) {
        free(catalog_item_update_dto->material);
        catalog_item_update_dto->material = NULL;
    }
    if (catalog_item_update_dto->tenant_id) {
        free(catalog_item_update_dto->tenant_id);
        catalog_item_update_dto->tenant_id = NULL;
    }
    if (catalog_item_update_dto->permalink) {
        free(catalog_item_update_dto->permalink);
        catalog_item_update_dto->permalink = NULL;
    }
    if (catalog_item_update_dto->brand_name) {
        free(catalog_item_update_dto->brand_name);
        catalog_item_update_dto->brand_name = NULL;
    }
    if (catalog_item_update_dto->language_id) {
        free(catalog_item_update_dto->language_id);
        catalog_item_update_dto->language_id = NULL;
    }
    if (catalog_item_update_dto->categories) {
        free(catalog_item_update_dto->categories);
        catalog_item_update_dto->categories = NULL;
    }
    if (catalog_item_update_dto->item_type_id) {
        free(catalog_item_update_dto->item_type_id);
        catalog_item_update_dto->item_type_id = NULL;
    }
    if (catalog_item_update_dto->category_id) {
        free(catalog_item_update_dto->category_id);
        catalog_item_update_dto->category_id = NULL;
    }
    if (catalog_item_update_dto->currency_id) {
        free(catalog_item_update_dto->currency_id);
        catalog_item_update_dto->currency_id = NULL;
    }
    if (catalog_item_update_dto->unit_group_id) {
        free(catalog_item_update_dto->unit_group_id);
        catalog_item_update_dto->unit_group_id = NULL;
    }
    if (catalog_item_update_dto->description) {
        free(catalog_item_update_dto->description);
        catalog_item_update_dto->description = NULL;
    }
    if (catalog_item_update_dto->ingredients) {
        free(catalog_item_update_dto->ingredients);
        catalog_item_update_dto->ingredients = NULL;
    }
    if (catalog_item_update_dto->release_date) {
        free(catalog_item_update_dto->release_date);
        catalog_item_update_dto->release_date = NULL;
    }
    if (catalog_item_update_dto->enrollment_id) {
        free(catalog_item_update_dto->enrollment_id);
        catalog_item_update_dto->enrollment_id = NULL;
    }
    if (catalog_item_update_dto->supplier_code) {
        free(catalog_item_update_dto->supplier_code);
        catalog_item_update_dto->supplier_code = NULL;
    }
    if (catalog_item_update_dto->auction_end) {
        free(catalog_item_update_dto->auction_end);
        catalog_item_update_dto->auction_end = NULL;
    }
    if (catalog_item_update_dto->purchase_note) {
        free(catalog_item_update_dto->purchase_note);
        catalog_item_update_dto->purchase_note = NULL;
    }
    if (catalog_item_update_dto->ships_to_rules) {
        free(catalog_item_update_dto->ships_to_rules);
        catalog_item_update_dto->ships_to_rules = NULL;
    }
    if (catalog_item_update_dto->images) {
        list_ForEach(listEntry, catalog_item_update_dto->images) {
            free(listEntry->data);
        }
        list_freeList(catalog_item_update_dto->images);
        catalog_item_update_dto->images = NULL;
    }
    if (catalog_item_update_dto->parent_item_id) {
        free(catalog_item_update_dto->parent_item_id);
        catalog_item_update_dto->parent_item_id = NULL;
    }
    if (catalog_item_update_dto->item_type_name) {
        free(catalog_item_update_dto->item_type_name);
        catalog_item_update_dto->item_type_name = NULL;
    }
    if (catalog_item_update_dto->cart_record_id) {
        free(catalog_item_update_dto->cart_record_id);
        catalog_item_update_dto->cart_record_id = NULL;
    }
    if (catalog_item_update_dto->variations) {
        list_ForEach(listEntry, catalog_item_update_dto->variations) {
            free(listEntry->data);
        }
        list_freeList(catalog_item_update_dto->variations);
        catalog_item_update_dto->variations = NULL;
    }
    if (catalog_item_update_dto->tariff_heading) {
        free(catalog_item_update_dto->tariff_heading);
        catalog_item_update_dto->tariff_heading = NULL;
    }
    if (catalog_item_update_dto->auction_start) {
        free(catalog_item_update_dto->auction_start);
        catalog_item_update_dto->auction_start = NULL;
    }
    if (catalog_item_update_dto->nutrition_facts) {
        free(catalog_item_update_dto->nutrition_facts);
        catalog_item_update_dto->nutrition_facts = NULL;
    }
    if (catalog_item_update_dto->mozaic_cover_url) {
        free(catalog_item_update_dto->mozaic_cover_url);
        catalog_item_update_dto->mozaic_cover_url = NULL;
    }
    if (catalog_item_update_dto->package_content) {
        free(catalog_item_update_dto->package_content);
        catalog_item_update_dto->package_content = NULL;
    }
    if (catalog_item_update_dto->youtube_video_id) {
        free(catalog_item_update_dto->youtube_video_id);
        catalog_item_update_dto->youtube_video_id = NULL;
    }
    if (catalog_item_update_dto->published_date) {
        free(catalog_item_update_dto->published_date);
        catalog_item_update_dto->published_date = NULL;
    }
    if (catalog_item_update_dto->primary_image_url) {
        free(catalog_item_update_dto->primary_image_url);
        catalog_item_update_dto->primary_image_url = NULL;
    }
    if (catalog_item_update_dto->long_description) {
        free(catalog_item_update_dto->long_description);
        catalog_item_update_dto->long_description = NULL;
    }
    if (catalog_item_update_dto->compare_record_id) {
        free(catalog_item_update_dto->compare_record_id);
        catalog_item_update_dto->compare_record_id = NULL;
    }
    if (catalog_item_update_dto->measurement_unit) {
        free(catalog_item_update_dto->measurement_unit);
        catalog_item_update_dto->measurement_unit = NULL;
    }
    if (catalog_item_update_dto->short_description) {
        free(catalog_item_update_dto->short_description);
        catalog_item_update_dto->short_description = NULL;
    }
    if (catalog_item_update_dto->google_categories) {
        free(catalog_item_update_dto->google_categories);
        catalog_item_update_dto->google_categories = NULL;
    }
    if (catalog_item_update_dto->supplier_profile_id) {
        free(catalog_item_update_dto->supplier_profile_id);
        catalog_item_update_dto->supplier_profile_id = NULL;
    }
    if (catalog_item_update_dto->shipping_country_id) {
        free(catalog_item_update_dto->shipping_country_id);
        catalog_item_update_dto->shipping_country_id = NULL;
    }
    if (catalog_item_update_dto->system_requirements) {
        free(catalog_item_update_dto->system_requirements);
        catalog_item_update_dto->system_requirements = NULL;
    }
    if (catalog_item_update_dto->discount_dead_line) {
        free(catalog_item_update_dto->discount_dead_line);
        catalog_item_update_dto->discount_dead_line = NULL;
    }
    if (catalog_item_update_dto->custom_tax_description) {
        free(catalog_item_update_dto->custom_tax_description);
        catalog_item_update_dto->custom_tax_description = NULL;
    }
    if (catalog_item_update_dto->official_description_url) {
        free(catalog_item_update_dto->official_description_url);
        catalog_item_update_dto->official_description_url = NULL;
    }
    if (catalog_item_update_dto->energy_efficiency_rating) {
        free(catalog_item_update_dto->energy_efficiency_rating);
        catalog_item_update_dto->energy_efficiency_rating = NULL;
    }
    if (catalog_item_update_dto->page_cover_background_url) {
        free(catalog_item_update_dto->page_cover_background_url);
        catalog_item_update_dto->page_cover_background_url = NULL;
    }
    if (catalog_item_update_dto->operating_system_supported) {
        free(catalog_item_update_dto->operating_system_supported);
        catalog_item_update_dto->operating_system_supported = NULL;
    }
    if (catalog_item_update_dto->deadline_discount_due_date) {
        free(catalog_item_update_dto->deadline_discount_due_date);
        catalog_item_update_dto->deadline_discount_due_date = NULL;
    }
    if (catalog_item_update_dto->deadline_discount_from_date) {
        free(catalog_item_update_dto->deadline_discount_from_date);
        catalog_item_update_dto->deadline_discount_from_date = NULL;
    }
    if (catalog_item_update_dto->last_fixed_prices_update_date_time) {
        free(catalog_item_update_dto->last_fixed_prices_update_date_time);
        catalog_item_update_dto->last_fixed_prices_update_date_time = NULL;
    }
    if (catalog_item_update_dto->recently_viewed_record_id) {
        free(catalog_item_update_dto->recently_viewed_record_id);
        catalog_item_update_dto->recently_viewed_record_id = NULL;
    }
    if (catalog_item_update_dto->primary_google_category_id) {
        free(catalog_item_update_dto->primary_google_category_id);
        catalog_item_update_dto->primary_google_category_id = NULL;
    }
    if (catalog_item_update_dto->supported_operating_system) {
        free(catalog_item_update_dto->supported_operating_system);
        catalog_item_update_dto->supported_operating_system = NULL;
    }
    if (catalog_item_update_dto->primary_google_category_name) {
        free(catalog_item_update_dto->primary_google_category_name);
        catalog_item_update_dto->primary_google_category_name = NULL;
    }
    if (catalog_item_update_dto->selected_tags) {
        list_ForEach(listEntry, catalog_item_update_dto->selected_tags) {
            free(listEntry->data);
        }
        list_freeList(catalog_item_update_dto->selected_tags);
        catalog_item_update_dto->selected_tags = NULL;
    }
    if (catalog_item_update_dto->selected_types) {
        list_ForEach(listEntry, catalog_item_update_dto->selected_types) {
            free(listEntry->data);
        }
        list_freeList(catalog_item_update_dto->selected_types);
        catalog_item_update_dto->selected_types = NULL;
    }
    if (catalog_item_update_dto->selected_brands) {
        list_ForEach(listEntry, catalog_item_update_dto->selected_brands) {
            free(listEntry->data);
        }
        list_freeList(catalog_item_update_dto->selected_brands);
        catalog_item_update_dto->selected_brands = NULL;
    }
    if (catalog_item_update_dto->selected_categories) {
        list_ForEach(listEntry, catalog_item_update_dto->selected_categories) {
            free(listEntry->data);
        }
        list_freeList(catalog_item_update_dto->selected_categories);
        catalog_item_update_dto->selected_categories = NULL;
    }
    if (catalog_item_update_dto->selected_tax_policies) {
        list_ForEach(listEntry, catalog_item_update_dto->selected_tax_policies) {
            free(listEntry->data);
        }
        list_freeList(catalog_item_update_dto->selected_tax_policies);
        catalog_item_update_dto->selected_tax_policies = NULL;
    }
    if (catalog_item_update_dto->selected_pricing_rules) {
        list_ForEach(listEntry, catalog_item_update_dto->selected_pricing_rules) {
            free(listEntry->data);
        }
        list_freeList(catalog_item_update_dto->selected_pricing_rules);
        catalog_item_update_dto->selected_pricing_rules = NULL;
    }
    if (catalog_item_update_dto->selected_refund_policies) {
        list_ForEach(listEntry, catalog_item_update_dto->selected_refund_policies) {
            free(listEntry->data);
        }
        list_freeList(catalog_item_update_dto->selected_refund_policies);
        catalog_item_update_dto->selected_refund_policies = NULL;
    }
    if (catalog_item_update_dto->selected_return_policies) {
        list_ForEach(listEntry, catalog_item_update_dto->selected_return_policies) {
            free(listEntry->data);
        }
        list_freeList(catalog_item_update_dto->selected_return_policies);
        catalog_item_update_dto->selected_return_policies = NULL;
    }
    if (catalog_item_update_dto->selected_pricing_policies) {
        list_ForEach(listEntry, catalog_item_update_dto->selected_pricing_policies) {
            free(listEntry->data);
        }
        list_freeList(catalog_item_update_dto->selected_pricing_policies);
        catalog_item_update_dto->selected_pricing_policies = NULL;
    }
    if (catalog_item_update_dto->selected_google_categories) {
        list_ForEach(listEntry, catalog_item_update_dto->selected_google_categories) {
            free(listEntry->data);
        }
        list_freeList(catalog_item_update_dto->selected_google_categories);
        catalog_item_update_dto->selected_google_categories = NULL;
    }
    if (catalog_item_update_dto->selected_warranty_policies) {
        list_ForEach(listEntry, catalog_item_update_dto->selected_warranty_policies) {
            free(listEntry->data);
        }
        list_freeList(catalog_item_update_dto->selected_warranty_policies);
        catalog_item_update_dto->selected_warranty_policies = NULL;
    }
    if (catalog_item_update_dto->selected_shipment_policies) {
        list_ForEach(listEntry, catalog_item_update_dto->selected_shipment_policies) {
            free(listEntry->data);
        }
        list_freeList(catalog_item_update_dto->selected_shipment_policies);
        catalog_item_update_dto->selected_shipment_policies = NULL;
    }
    if (catalog_item_update_dto->selected_attributes_options) {
        list_ForEach(listEntry, catalog_item_update_dto->selected_attributes_options) {
            free(listEntry->data);
        }
        list_freeList(catalog_item_update_dto->selected_attributes_options);
        catalog_item_update_dto->selected_attributes_options = NULL;
    }
    if (catalog_item_update_dto->selected_selling_margin_policies) {
        list_ForEach(listEntry, catalog_item_update_dto->selected_selling_margin_policies) {
            free(listEntry->data);
        }
        list_freeList(catalog_item_update_dto->selected_selling_margin_policies);
        catalog_item_update_dto->selected_selling_margin_policies = NULL;
    }
    free(catalog_item_update_dto);
}

cJSON *catalog_item_update_dto_convertToJSON(catalog_item_update_dto_t *catalog_item_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // catalog_item_update_dto->hot
    if(catalog_item_update_dto->hot) {
    if(cJSON_AddBoolToObject(item, "hot", catalog_item_update_dto->hot) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->sku
    if(catalog_item_update_dto->sku) {
    if(cJSON_AddStringToObject(item, "sku", catalog_item_update_dto->sku) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->upc
    if(catalog_item_update_dto->upc) {
    if(cJSON_AddStringToObject(item, "upc", catalog_item_update_dto->upc) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->ean
    if(catalog_item_update_dto->ean) {
    if(cJSON_AddStringToObject(item, "ean", catalog_item_update_dto->ean) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->mpn
    if(catalog_item_update_dto->mpn) {
    if(cJSON_AddStringToObject(item, "mpn", catalog_item_update_dto->mpn) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->sk_us
    if(catalog_item_update_dto->sk_us) {
    if(cJSON_AddStringToObject(item, "skUs", catalog_item_update_dto->sk_us) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->isbn
    if(catalog_item_update_dto->isbn) {
    if(cJSON_AddStringToObject(item, "isbn", catalog_item_update_dto->isbn) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->up_cs
    if(catalog_item_update_dto->up_cs) {
    if(cJSON_AddStringToObject(item, "upCs", catalog_item_update_dto->up_cs) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->ea_ns
    if(catalog_item_update_dto->ea_ns) {
    if(cJSON_AddStringToObject(item, "eaNs", catalog_item_update_dto->ea_ns) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->asin
    if(catalog_item_update_dto->asin) {
    if(cJSON_AddStringToObject(item, "asin", catalog_item_update_dto->asin) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->gtin
    if(catalog_item_update_dto->gtin) {
    if(cJSON_AddStringToObject(item, "gtin", catalog_item_update_dto->gtin) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->mp_ns
    if(catalog_item_update_dto->mp_ns) {
    if(cJSON_AddStringToObject(item, "mpNs", catalog_item_update_dto->mp_ns) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->part
    if(catalog_item_update_dto->part) {
    if(cJSON_AddStringToObject(item, "part", catalog_item_update_dto->part) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->name
    if(catalog_item_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", catalog_item_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->on_sale
    if(catalog_item_update_dto->on_sale) {
    if(cJSON_AddBoolToObject(item, "onSale", catalog_item_update_dto->on_sale) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->isb_ns
    if(catalog_item_update_dto->isb_ns) {
    if(cJSON_AddStringToObject(item, "isbNs", catalog_item_update_dto->isb_ns) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->asi_ns
    if(catalog_item_update_dto->asi_ns) {
    if(cJSON_AddStringToObject(item, "asiNs", catalog_item_update_dto->asi_ns) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->gti_ns
    if(catalog_item_update_dto->gti_ns) {
    if(cJSON_AddStringToObject(item, "gtiNs", catalog_item_update_dto->gti_ns) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->width
    if(catalog_item_update_dto->width) {
    if(cJSON_AddNumberToObject(item, "width", catalog_item_update_dto->width) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->model
    if(catalog_item_update_dto->model) {
    if(cJSON_AddStringToObject(item, "model", catalog_item_update_dto->model) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->auction
    if(catalog_item_update_dto->auction) {
    if(cJSON_AddBoolToObject(item, "auction", catalog_item_update_dto->auction) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->title
    if(catalog_item_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", catalog_item_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->color
    if(catalog_item_update_dto->color) {
    if(cJSON_AddStringToObject(item, "color", catalog_item_update_dto->color) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->deleted
    if(catalog_item_update_dto->deleted) {
    if(cJSON_AddBoolToObject(item, "deleted", catalog_item_update_dto->deleted) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->digital
    if(catalog_item_update_dto->digital) {
    if(cJSON_AddBoolToObject(item, "digital", catalog_item_update_dto->digital) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->pre_sale
    if(catalog_item_update_dto->pre_sale) {
    if(cJSON_AddBoolToObject(item, "preSale", catalog_item_update_dto->pre_sale) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->taxable
    if(catalog_item_update_dto->taxable) {
    if(cJSON_AddBoolToObject(item, "taxable", catalog_item_update_dto->taxable) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->in_stock
    if(catalog_item_update_dto->in_stock) {
    if(cJSON_AddBoolToObject(item, "inStock", catalog_item_update_dto->in_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->isb_n13
    if(catalog_item_update_dto->isb_n13) {
    if(cJSON_AddStringToObject(item, "isbN13", catalog_item_update_dto->isb_n13) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->unspsc
    if(catalog_item_update_dto->unspsc) {
    if(cJSON_AddStringToObject(item, "unspsc", catalog_item_update_dto->unspsc) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->weight
    if(catalog_item_update_dto->weight) {
    if(cJSON_AddNumberToObject(item, "weight", catalog_item_update_dto->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->length
    if(catalog_item_update_dto->length) {
    if(cJSON_AddNumberToObject(item, "length", catalog_item_update_dto->length) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->height
    if(catalog_item_update_dto->height) {
    if(cJSON_AddNumberToObject(item, "height", catalog_item_update_dto->height) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->unit_id
    if(catalog_item_update_dto->unit_id) {
    if(cJSON_AddStringToObject(item, "unitId", catalog_item_update_dto->unit_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->series
    if(catalog_item_update_dto->series) {
    if(cJSON_AddStringToObject(item, "series", catalog_item_update_dto->series) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->featured
    if(catalog_item_update_dto->featured) {
    if(cJSON_AddBoolToObject(item, "featured", catalog_item_update_dto->featured) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->brands
    if(catalog_item_update_dto->brands) {
    if(cJSON_AddStringToObject(item, "brands", catalog_item_update_dto->brands) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->trending
    if(catalog_item_update_dto->trending) {
    if(cJSON_AddBoolToObject(item, "trending", catalog_item_update_dto->trending) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->low_stock
    if(catalog_item_update_dto->low_stock) {
    if(cJSON_AddBoolToObject(item, "lowStock", catalog_item_update_dto->low_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->barcode
    if(catalog_item_update_dto->barcode) {
    if(cJSON_AddStringToObject(item, "barcode", catalog_item_update_dto->barcode) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->unsps_cs
    if(catalog_item_update_dto->unsps_cs) {
    if(cJSON_AddStringToObject(item, "unspsCs", catalog_item_update_dto->unsps_cs) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->pattern
    if(catalog_item_update_dto->pattern) {
    if(cJSON_AddStringToObject(item, "pattern", catalog_item_update_dto->pattern) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->published
    if(catalog_item_update_dto->published) {
    if(cJSON_AddBoolToObject(item, "published", catalog_item_update_dto->published) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->by_request
    if(catalog_item_update_dto->by_request) {
    if(cJSON_AddBoolToObject(item, "byRequest", catalog_item_update_dto->by_request) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->summary
    if(catalog_item_update_dto->summary) {
    if(cJSON_AddStringToObject(item, "summary", catalog_item_update_dto->summary) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->brand_id
    if(catalog_item_update_dto->brand_id) {
    if(cJSON_AddStringToObject(item, "brandId", catalog_item_update_dto->brand_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->views_count
    if(catalog_item_update_dto->views_count) {
    if(cJSON_AddNumberToObject(item, "viewsCount", catalog_item_update_dto->views_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->features
    if(catalog_item_update_dto->features) {
    if(cJSON_AddStringToObject(item, "features", catalog_item_update_dto->features) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->material
    if(catalog_item_update_dto->material) {
    if(cJSON_AddStringToObject(item, "material", catalog_item_update_dto->material) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->on_discount
    if(catalog_item_update_dto->on_discount) {
    if(cJSON_AddBoolToObject(item, "onDiscount", catalog_item_update_dto->on_discount) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->total_tax
    if(catalog_item_update_dto->total_tax) {
    if(cJSON_AddNumberToObject(item, "totalTax", catalog_item_update_dto->total_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->tenant_id
    if(catalog_item_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", catalog_item_update_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->permalink
    if(catalog_item_update_dto->permalink) {
    if(cJSON_AddStringToObject(item, "permalink", catalog_item_update_dto->permalink) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->brand_name
    if(catalog_item_update_dto->brand_name) {
    if(cJSON_AddStringToObject(item, "brandName", catalog_item_update_dto->brand_name) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->reviews_count
    if(catalog_item_update_dto->reviews_count) {
    if(cJSON_AddNumberToObject(item, "reviewsCount", catalog_item_update_dto->reviews_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->is_daily_deal
    if(catalog_item_update_dto->is_daily_deal) {
    if(cJSON_AddBoolToObject(item, "isDailyDeal", catalog_item_update_dto->is_daily_deal) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->language_id
    if(catalog_item_update_dto->language_id) {
    if(cJSON_AddStringToObject(item, "languageId", catalog_item_update_dto->language_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->categories
    if(catalog_item_update_dto->categories) {
    if(cJSON_AddStringToObject(item, "categories", catalog_item_update_dto->categories) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->final_price
    if(catalog_item_update_dto->final_price) {
    if(cJSON_AddNumberToObject(item, "finalPrice", catalog_item_update_dto->final_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->item_type_id
    if(catalog_item_update_dto->item_type_id) {
    if(cJSON_AddStringToObject(item, "itemTypeId", catalog_item_update_dto->item_type_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->category_id
    if(catalog_item_update_dto->category_id) {
    if(cJSON_AddStringToObject(item, "categoryId", catalog_item_update_dto->category_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->currency_id
    if(catalog_item_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", catalog_item_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->reviews_avg
    if(catalog_item_update_dto->reviews_avg) {
    if(cJSON_AddNumberToObject(item, "reviewsAvg", catalog_item_update_dto->reviews_avg) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->is_new_arrival
    if(catalog_item_update_dto->is_new_arrival) {
    if(cJSON_AddBoolToObject(item, "isNewArrival", catalog_item_update_dto->is_new_arrival) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->is_weekly_deal
    if(catalog_item_update_dto->is_weekly_deal) {
    if(cJSON_AddBoolToObject(item, "isWeeklyDeal", catalog_item_update_dto->is_weekly_deal) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->is_best_seller
    if(catalog_item_update_dto->is_best_seller) {
    if(cJSON_AddBoolToObject(item, "isBestSeller", catalog_item_update_dto->is_best_seller) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->unit_group_id
    if(catalog_item_update_dto->unit_group_id) {
    if(cJSON_AddStringToObject(item, "unitGroupId", catalog_item_update_dto->unit_group_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->description
    if(catalog_item_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", catalog_item_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->ingredients
    if(catalog_item_update_dto->ingredients) {
    if(cJSON_AddStringToObject(item, "ingredients", catalog_item_update_dto->ingredients) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->release_date
    if(catalog_item_update_dto->release_date) {
    if(cJSON_AddStringToObject(item, "releaseDate", catalog_item_update_dto->release_date) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->is_monthly_deal
    if(catalog_item_update_dto->is_monthly_deal) {
    if(cJSON_AddBoolToObject(item, "isMonthlyDeal", catalog_item_update_dto->is_monthly_deal) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->recurrency
    if(catalog_item_update_dto->recurrency) {
    if(cJSON_AddNumberToObject(item, "recurrency", catalog_item_update_dto->recurrency) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->payment_cost
    if(catalog_item_update_dto->payment_cost) {
    if(cJSON_AddNumberToObject(item, "paymentCost", catalog_item_update_dto->payment_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->custom_tax_value
    if(catalog_item_update_dto->custom_tax_value) {
    if(cJSON_AddNumberToObject(item, "customTaxValue", catalog_item_update_dto->custom_tax_value) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->has_variations
    if(catalog_item_update_dto->has_variations) {
    if(cJSON_AddBoolToObject(item, "hasVariations", catalog_item_update_dto->has_variations) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->questions_count
    if(catalog_item_update_dto->questions_count) {
    if(cJSON_AddNumberToObject(item, "questionsCount", catalog_item_update_dto->questions_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->enrollment_id
    if(catalog_item_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", catalog_item_update_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->supplier_code
    if(catalog_item_update_dto->supplier_code) {
    if(cJSON_AddStringToObject(item, "supplierCode", catalog_item_update_dto->supplier_code) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->auction_end
    if(catalog_item_update_dto->auction_end) {
    if(cJSON_AddStringToObject(item, "auctionEnd", catalog_item_update_dto->auction_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // catalog_item_update_dto->purchase_note
    if(catalog_item_update_dto->purchase_note) {
    if(cJSON_AddStringToObject(item, "purchaseNote", catalog_item_update_dto->purchase_note) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->ships_to_rules
    if(catalog_item_update_dto->ships_to_rules) {
    if(cJSON_AddStringToObject(item, "shipsToRules", catalog_item_update_dto->ships_to_rules) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->regular_price
    if(catalog_item_update_dto->regular_price) {
    if(cJSON_AddNumberToObject(item, "regularPrice", catalog_item_update_dto->regular_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->images
    if(catalog_item_update_dto->images) {
    cJSON *images = cJSON_AddArrayToObject(item, "images");
    if(images == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *imagesListEntry;
    list_ForEach(imagesListEntry, catalog_item_update_dto->images) {
    if(cJSON_AddStringToObject(images, "", (char*)imagesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // catalog_item_update_dto->shipping_cost
    if(catalog_item_update_dto->shipping_cost) {
    if(cJSON_AddNumberToObject(item, "shippingCost", catalog_item_update_dto->shipping_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->parent_item_id
    if(catalog_item_update_dto->parent_item_id) {
    if(cJSON_AddStringToObject(item, "parentItemId", catalog_item_update_dto->parent_item_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->item_type_name
    if(catalog_item_update_dto->item_type_name) {
    if(cJSON_AddStringToObject(item, "itemTypeName", catalog_item_update_dto->item_type_name) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->cart_record_id
    if(catalog_item_update_dto->cart_record_id) {
    if(cJSON_AddStringToObject(item, "cartRecordId", catalog_item_update_dto->cart_record_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->variations
    if(catalog_item_update_dto->variations) {
    cJSON *variations = cJSON_AddArrayToObject(item, "variations");
    if(variations == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *variationsListEntry;
    list_ForEach(variationsListEntry, catalog_item_update_dto->variations) {
    if(cJSON_AddStringToObject(variations, "", (char*)variationsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // catalog_item_update_dto->tariff_heading
    if(catalog_item_update_dto->tariff_heading) {
    if(cJSON_AddStringToObject(item, "tariffHeading", catalog_item_update_dto->tariff_heading) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->packaged_quantity
    if(catalog_item_update_dto->packaged_quantity) {
    if(cJSON_AddNumberToObject(item, "packagedQuantity", catalog_item_update_dto->packaged_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->is_fixed_discount
    if(catalog_item_update_dto->is_fixed_discount) {
    if(cJSON_AddBoolToObject(item, "isFixedDiscount", catalog_item_update_dto->is_fixed_discount) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->discount_price
    if(catalog_item_update_dto->discount_price) {
    if(cJSON_AddNumberToObject(item, "discountPrice", catalog_item_update_dto->discount_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->is_dealers_choice
    if(catalog_item_update_dto->is_dealers_choice) {
    if(cJSON_AddBoolToObject(item, "isDealersChoice", catalog_item_update_dto->is_dealers_choice) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->current_stock
    if(catalog_item_update_dto->current_stock) {
    if(cJSON_AddNumberToObject(item, "currentStock", catalog_item_update_dto->current_stock) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->manage_inventory
    if(catalog_item_update_dto->manage_inventory) {
    if(cJSON_AddBoolToObject(item, "manageInventory", catalog_item_update_dto->manage_inventory) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->auction_start
    if(catalog_item_update_dto->auction_start) {
    if(cJSON_AddStringToObject(item, "auctionStart", catalog_item_update_dto->auction_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // catalog_item_update_dto->nutrition_facts
    if(catalog_item_update_dto->nutrition_facts) {
    if(cJSON_AddStringToObject(item, "nutritionFacts", catalog_item_update_dto->nutrition_facts) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->mozaic_cover_url
    if(catalog_item_update_dto->mozaic_cover_url) {
    if(cJSON_AddStringToObject(item, "mozaicCoverUrl", catalog_item_update_dto->mozaic_cover_url) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->package_content
    if(catalog_item_update_dto->package_content) {
    if(cJSON_AddStringToObject(item, "packageContent", catalog_item_update_dto->package_content) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->discount_amount
    if(catalog_item_update_dto->discount_amount) {
    if(cJSON_AddNumberToObject(item, "discountAmount", catalog_item_update_dto->discount_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->youtube_video_id
    if(catalog_item_update_dto->youtube_video_id) {
    if(cJSON_AddStringToObject(item, "youtubeVideoId", catalog_item_update_dto->youtube_video_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->in_cart_quantity
    if(catalog_item_update_dto->in_cart_quantity) {
    if(cJSON_AddNumberToObject(item, "inCartQuantity", catalog_item_update_dto->in_cart_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->is_official_choice
    if(catalog_item_update_dto->is_official_choice) {
    if(cJSON_AddBoolToObject(item, "isOfficialChoice", catalog_item_update_dto->is_official_choice) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->published_date
    if(catalog_item_update_dto->published_date) {
    if(cJSON_AddStringToObject(item, "publishedDate", catalog_item_update_dto->published_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // catalog_item_update_dto->primary_image_url
    if(catalog_item_update_dto->primary_image_url) {
    if(cJSON_AddStringToObject(item, "primaryImageUrl", catalog_item_update_dto->primary_image_url) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->valid_primary_image
    if(catalog_item_update_dto->valid_primary_image) {
    if(cJSON_AddBoolToObject(item, "validPrimaryImage", catalog_item_update_dto->valid_primary_image) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->custom_tax_amount
    if(catalog_item_update_dto->custom_tax_amount) {
    if(cJSON_AddNumberToObject(item, "customTaxAmount", catalog_item_update_dto->custom_tax_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->long_description
    if(catalog_item_update_dto->long_description) {
    if(cJSON_AddStringToObject(item, "longDescription", catalog_item_update_dto->long_description) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->compare_record_id
    if(catalog_item_update_dto->compare_record_id) {
    if(cJSON_AddStringToObject(item, "compareRecordId", catalog_item_update_dto->compare_record_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->measurement_unit
    if(catalog_item_update_dto->measurement_unit) {
    if(cJSON_AddStringToObject(item, "measurementUnit", catalog_item_update_dto->measurement_unit) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->short_description
    if(catalog_item_update_dto->short_description) {
    if(cJSON_AddStringToObject(item, "shortDescription", catalog_item_update_dto->short_description) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->google_categories
    if(catalog_item_update_dto->google_categories) {
    if(cJSON_AddStringToObject(item, "googleCategories", catalog_item_update_dto->google_categories) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->is_deadline_discount
    if(catalog_item_update_dto->is_deadline_discount) {
    if(cJSON_AddBoolToObject(item, "isDeadlineDiscount", catalog_item_update_dto->is_deadline_discount) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->display_showcase_tab
    if(catalog_item_update_dto->display_showcase_tab) {
    if(cJSON_AddBoolToObject(item, "displayShowcaseTab", catalog_item_update_dto->display_showcase_tab) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->tax_included_in_price
    if(catalog_item_update_dto->tax_included_in_price) {
    if(cJSON_AddBoolToObject(item, "taxIncludedInPrice", catalog_item_update_dto->tax_included_in_price) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->is_product_of_the_week
    if(catalog_item_update_dto->is_product_of_the_week) {
    if(cJSON_AddBoolToObject(item, "isProductOfTheWeek", catalog_item_update_dto->is_product_of_the_week) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->supplier_profile_id
    if(catalog_item_update_dto->supplier_profile_id) {
    if(cJSON_AddStringToObject(item, "supplierProfileId", catalog_item_update_dto->supplier_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->shipping_country_id
    if(catalog_item_update_dto->shipping_country_id) {
    if(cJSON_AddStringToObject(item, "shippingCountryId", catalog_item_update_dto->shipping_country_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->is_product_of_the_month
    if(catalog_item_update_dto->is_product_of_the_month) {
    if(cJSON_AddBoolToObject(item, "isProductOfTheMonth", catalog_item_update_dto->is_product_of_the_month) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->system_requirements
    if(catalog_item_update_dto->system_requirements) {
    if(cJSON_AddStringToObject(item, "systemRequirements", catalog_item_update_dto->system_requirements) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->is_porcentual_discount
    if(catalog_item_update_dto->is_porcentual_discount) {
    if(cJSON_AddBoolToObject(item, "isPorcentualDiscount", catalog_item_update_dto->is_porcentual_discount) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->discount_percentage
    if(catalog_item_update_dto->discount_percentage) {
    if(cJSON_AddNumberToObject(item, "discountPercentage", catalog_item_update_dto->discount_percentage) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->discount_dead_line
    if(catalog_item_update_dto->discount_dead_line) {
    if(cJSON_AddStringToObject(item, "discountDeadLine", catalog_item_update_dto->discount_dead_line) == NULL) {
    goto fail; //Date-Time
    }
    }


    // catalog_item_update_dto->display_on_global_mozaic
    if(catalog_item_update_dto->display_on_global_mozaic) {
    if(cJSON_AddBoolToObject(item, "displayOnGlobalMozaic", catalog_item_update_dto->display_on_global_mozaic) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->display_on_brands_mozaic
    if(catalog_item_update_dto->display_on_brands_mozaic) {
    if(cJSON_AddBoolToObject(item, "displayOnBrandsMozaic", catalog_item_update_dto->display_on_brands_mozaic) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->custom_tax_percentage
    if(catalog_item_update_dto->custom_tax_percentage) {
    if(cJSON_AddNumberToObject(item, "customTaxPercentage", catalog_item_update_dto->custom_tax_percentage) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->estimated_taxes_in_usd
    if(catalog_item_update_dto->estimated_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedTaxesInUsd", catalog_item_update_dto->estimated_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->custom_tax_description
    if(catalog_item_update_dto->custom_tax_description) {
    if(cJSON_AddStringToObject(item, "customTaxDescription", catalog_item_update_dto->custom_tax_description) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->disable_default_policies
    if(catalog_item_update_dto->disable_default_policies) {
    if(cJSON_AddBoolToObject(item, "disableDefaultPolicies", catalog_item_update_dto->disable_default_policies) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->estimated_profit_in_usd
    if(catalog_item_update_dto->estimated_profit_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedProfitInUsd", catalog_item_update_dto->estimated_profit_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->display_on_category_mozaic
    if(catalog_item_update_dto->display_on_category_mozaic) {
    if(cJSON_AddBoolToObject(item, "displayOnCategoryMozaic", catalog_item_update_dto->display_on_category_mozaic) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->official_description_url
    if(catalog_item_update_dto->official_description_url) {
    if(cJSON_AddStringToObject(item, "officialDescriptionUrl", catalog_item_update_dto->official_description_url) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->energy_efficiency_rating
    if(catalog_item_update_dto->energy_efficiency_rating) {
    if(cJSON_AddStringToObject(item, "energyEfficiencyRating", catalog_item_update_dto->energy_efficiency_rating) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->page_cover_background_url
    if(catalog_item_update_dto->page_cover_background_url) {
    if(cJSON_AddStringToObject(item, "pageCoverBackgroundUrl", catalog_item_update_dto->page_cover_background_url) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->estimated_base_price_in_usd
    if(catalog_item_update_dto->estimated_base_price_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedBasePriceInUsd", catalog_item_update_dto->estimated_base_price_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->estimated_discounts_in_usd
    if(catalog_item_update_dto->estimated_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedDiscountsInUsd", catalog_item_update_dto->estimated_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->operating_system_supported
    if(catalog_item_update_dto->operating_system_supported) {
    if(cJSON_AddStringToObject(item, "operatingSystemSupported", catalog_item_update_dto->operating_system_supported) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->estimated_surcharges_in_usd
    if(catalog_item_update_dto->estimated_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedSurchargesInUsd", catalog_item_update_dto->estimated_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->deadline_discount_due_date
    if(catalog_item_update_dto->deadline_discount_due_date) {
    if(cJSON_AddStringToObject(item, "deadlineDiscountDueDate", catalog_item_update_dto->deadline_discount_due_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // catalog_item_update_dto->deadline_discount_from_date
    if(catalog_item_update_dto->deadline_discount_from_date) {
    if(cJSON_AddStringToObject(item, "deadlineDiscountFromDate", catalog_item_update_dto->deadline_discount_from_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // catalog_item_update_dto->estimated_regular_price_in_usd
    if(catalog_item_update_dto->estimated_regular_price_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedRegularPriceInUsd", catalog_item_update_dto->estimated_regular_price_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->estimated_tax_base_price_in_usd
    if(catalog_item_update_dto->estimated_tax_base_price_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedTaxBasePriceInUsd", catalog_item_update_dto->estimated_tax_base_price_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->display_on_banner_marketing_rotation
    if(catalog_item_update_dto->display_on_banner_marketing_rotation) {
    if(cJSON_AddBoolToObject(item, "displayOnBannerMarketingRotation", catalog_item_update_dto->display_on_banner_marketing_rotation) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->last_fixed_prices_update_date_time
    if(catalog_item_update_dto->last_fixed_prices_update_date_time) {
    if(cJSON_AddStringToObject(item, "lastFixedPricesUpdateDateTime", catalog_item_update_dto->last_fixed_prices_update_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // catalog_item_update_dto->estimated_witholding_taxes_in_usd
    if(catalog_item_update_dto->estimated_witholding_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedWitholdingTaxesInUsd", catalog_item_update_dto->estimated_witholding_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->estimated_payment_cost_in_usd
    if(catalog_item_update_dto->estimated_payment_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedPaymentCostInUsd", catalog_item_update_dto->estimated_payment_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->estimated_payment_tax_in_usd
    if(catalog_item_update_dto->estimated_payment_tax_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedPaymentTaxInUsd", catalog_item_update_dto->estimated_payment_tax_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->estimated_default_shipping_cost_in_usd
    if(catalog_item_update_dto->estimated_default_shipping_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedDefaultShippingCostInUsd", catalog_item_update_dto->estimated_default_shipping_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->estimated_default_shipping_tax_in_usd
    if(catalog_item_update_dto->estimated_default_shipping_tax_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedDefaultShippingTaxInUsd", catalog_item_update_dto->estimated_default_shipping_tax_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->estimated_total_price_in_usd
    if(catalog_item_update_dto->estimated_total_price_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedTotalPriceInUsd", catalog_item_update_dto->estimated_total_price_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->recently_viewed_record_id
    if(catalog_item_update_dto->recently_viewed_record_id) {
    if(cJSON_AddStringToObject(item, "recentlyViewedRecordId", catalog_item_update_dto->recently_viewed_record_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->display_description_editor
    if(catalog_item_update_dto->display_description_editor) {
    if(cJSON_AddBoolToObject(item, "displayDescriptionEditor", catalog_item_update_dto->display_description_editor) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->primary_google_category_id
    if(catalog_item_update_dto->primary_google_category_id) {
    if(cJSON_AddStringToObject(item, "primaryGoogleCategoryId", catalog_item_update_dto->primary_google_category_id) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->supported_operating_system
    if(catalog_item_update_dto->supported_operating_system) {
    if(cJSON_AddStringToObject(item, "supportedOperatingSystem", catalog_item_update_dto->supported_operating_system) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->estimated_deal_savings_in_usd
    if(catalog_item_update_dto->estimated_deal_savings_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedDealSavingsInUsd", catalog_item_update_dto->estimated_deal_savings_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->primary_google_category_name
    if(catalog_item_update_dto->primary_google_category_name) {
    if(cJSON_AddStringToObject(item, "primaryGoogleCategoryName", catalog_item_update_dto->primary_google_category_name) == NULL) {
    goto fail; //String
    }
    }


    // catalog_item_update_dto->display_short_description_editor
    if(catalog_item_update_dto->display_short_description_editor) {
    if(cJSON_AddBoolToObject(item, "displayShortDescriptionEditor", catalog_item_update_dto->display_short_description_editor) == NULL) {
    goto fail; //Bool
    }
    }


    // catalog_item_update_dto->estimated_withholding_taxes_in_usd
    if(catalog_item_update_dto->estimated_withholding_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedWithholdingTaxesInUsd", catalog_item_update_dto->estimated_withholding_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // catalog_item_update_dto->selected_tags
    if(catalog_item_update_dto->selected_tags) {
    cJSON *selected_tags = cJSON_AddArrayToObject(item, "selectedTags");
    if(selected_tags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_tagsListEntry;
    list_ForEach(selected_tagsListEntry, catalog_item_update_dto->selected_tags) {
    if(cJSON_AddStringToObject(selected_tags, "", (char*)selected_tagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // catalog_item_update_dto->selected_types
    if(catalog_item_update_dto->selected_types) {
    cJSON *selected_types = cJSON_AddArrayToObject(item, "selectedTypes");
    if(selected_types == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_typesListEntry;
    list_ForEach(selected_typesListEntry, catalog_item_update_dto->selected_types) {
    if(cJSON_AddStringToObject(selected_types, "", (char*)selected_typesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // catalog_item_update_dto->selected_brands
    if(catalog_item_update_dto->selected_brands) {
    cJSON *selected_brands = cJSON_AddArrayToObject(item, "selectedBrands");
    if(selected_brands == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_brandsListEntry;
    list_ForEach(selected_brandsListEntry, catalog_item_update_dto->selected_brands) {
    if(cJSON_AddStringToObject(selected_brands, "", (char*)selected_brandsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // catalog_item_update_dto->selected_categories
    if(catalog_item_update_dto->selected_categories) {
    cJSON *selected_categories = cJSON_AddArrayToObject(item, "selectedCategories");
    if(selected_categories == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_categoriesListEntry;
    list_ForEach(selected_categoriesListEntry, catalog_item_update_dto->selected_categories) {
    if(cJSON_AddStringToObject(selected_categories, "", (char*)selected_categoriesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // catalog_item_update_dto->selected_tax_policies
    if(catalog_item_update_dto->selected_tax_policies) {
    cJSON *selected_tax_policies = cJSON_AddArrayToObject(item, "selectedTaxPolicies");
    if(selected_tax_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_tax_policiesListEntry;
    list_ForEach(selected_tax_policiesListEntry, catalog_item_update_dto->selected_tax_policies) {
    if(cJSON_AddStringToObject(selected_tax_policies, "", (char*)selected_tax_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // catalog_item_update_dto->selected_pricing_rules
    if(catalog_item_update_dto->selected_pricing_rules) {
    cJSON *selected_pricing_rules = cJSON_AddArrayToObject(item, "selectedPricingRules");
    if(selected_pricing_rules == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_pricing_rulesListEntry;
    list_ForEach(selected_pricing_rulesListEntry, catalog_item_update_dto->selected_pricing_rules) {
    if(cJSON_AddStringToObject(selected_pricing_rules, "", (char*)selected_pricing_rulesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // catalog_item_update_dto->selected_refund_policies
    if(catalog_item_update_dto->selected_refund_policies) {
    cJSON *selected_refund_policies = cJSON_AddArrayToObject(item, "selectedRefundPolicies");
    if(selected_refund_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_refund_policiesListEntry;
    list_ForEach(selected_refund_policiesListEntry, catalog_item_update_dto->selected_refund_policies) {
    if(cJSON_AddStringToObject(selected_refund_policies, "", (char*)selected_refund_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // catalog_item_update_dto->selected_return_policies
    if(catalog_item_update_dto->selected_return_policies) {
    cJSON *selected_return_policies = cJSON_AddArrayToObject(item, "selectedReturnPolicies");
    if(selected_return_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_return_policiesListEntry;
    list_ForEach(selected_return_policiesListEntry, catalog_item_update_dto->selected_return_policies) {
    if(cJSON_AddStringToObject(selected_return_policies, "", (char*)selected_return_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // catalog_item_update_dto->selected_pricing_policies
    if(catalog_item_update_dto->selected_pricing_policies) {
    cJSON *selected_pricing_policies = cJSON_AddArrayToObject(item, "selectedPricingPolicies");
    if(selected_pricing_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_pricing_policiesListEntry;
    list_ForEach(selected_pricing_policiesListEntry, catalog_item_update_dto->selected_pricing_policies) {
    if(cJSON_AddStringToObject(selected_pricing_policies, "", (char*)selected_pricing_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // catalog_item_update_dto->selected_google_categories
    if(catalog_item_update_dto->selected_google_categories) {
    cJSON *selected_google_categories = cJSON_AddArrayToObject(item, "selectedGoogleCategories");
    if(selected_google_categories == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_google_categoriesListEntry;
    list_ForEach(selected_google_categoriesListEntry, catalog_item_update_dto->selected_google_categories) {
    if(cJSON_AddStringToObject(selected_google_categories, "", (char*)selected_google_categoriesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // catalog_item_update_dto->selected_warranty_policies
    if(catalog_item_update_dto->selected_warranty_policies) {
    cJSON *selected_warranty_policies = cJSON_AddArrayToObject(item, "selectedWarrantyPolicies");
    if(selected_warranty_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_warranty_policiesListEntry;
    list_ForEach(selected_warranty_policiesListEntry, catalog_item_update_dto->selected_warranty_policies) {
    if(cJSON_AddStringToObject(selected_warranty_policies, "", (char*)selected_warranty_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // catalog_item_update_dto->selected_shipment_policies
    if(catalog_item_update_dto->selected_shipment_policies) {
    cJSON *selected_shipment_policies = cJSON_AddArrayToObject(item, "selectedShipmentPolicies");
    if(selected_shipment_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_shipment_policiesListEntry;
    list_ForEach(selected_shipment_policiesListEntry, catalog_item_update_dto->selected_shipment_policies) {
    if(cJSON_AddStringToObject(selected_shipment_policies, "", (char*)selected_shipment_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // catalog_item_update_dto->selected_attributes_options
    if(catalog_item_update_dto->selected_attributes_options) {
    cJSON *selected_attributes_options = cJSON_AddArrayToObject(item, "selectedAttributesOptions");
    if(selected_attributes_options == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_attributes_optionsListEntry;
    list_ForEach(selected_attributes_optionsListEntry, catalog_item_update_dto->selected_attributes_options) {
    if(cJSON_AddStringToObject(selected_attributes_options, "", (char*)selected_attributes_optionsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // catalog_item_update_dto->selected_selling_margin_policies
    if(catalog_item_update_dto->selected_selling_margin_policies) {
    cJSON *selected_selling_margin_policies = cJSON_AddArrayToObject(item, "selectedSellingMarginPolicies");
    if(selected_selling_margin_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_selling_margin_policiesListEntry;
    list_ForEach(selected_selling_margin_policiesListEntry, catalog_item_update_dto->selected_selling_margin_policies) {
    if(cJSON_AddStringToObject(selected_selling_margin_policies, "", (char*)selected_selling_margin_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

catalog_item_update_dto_t *catalog_item_update_dto_parseFromJSON(cJSON *catalog_item_update_dtoJSON){

    catalog_item_update_dto_t *catalog_item_update_dto_local_var = NULL;

    // define the local list for catalog_item_update_dto->images
    list_t *imagesList = NULL;

    // define the local list for catalog_item_update_dto->variations
    list_t *variationsList = NULL;

    // define the local list for catalog_item_update_dto->selected_tags
    list_t *selected_tagsList = NULL;

    // define the local list for catalog_item_update_dto->selected_types
    list_t *selected_typesList = NULL;

    // define the local list for catalog_item_update_dto->selected_brands
    list_t *selected_brandsList = NULL;

    // define the local list for catalog_item_update_dto->selected_categories
    list_t *selected_categoriesList = NULL;

    // define the local list for catalog_item_update_dto->selected_tax_policies
    list_t *selected_tax_policiesList = NULL;

    // define the local list for catalog_item_update_dto->selected_pricing_rules
    list_t *selected_pricing_rulesList = NULL;

    // define the local list for catalog_item_update_dto->selected_refund_policies
    list_t *selected_refund_policiesList = NULL;

    // define the local list for catalog_item_update_dto->selected_return_policies
    list_t *selected_return_policiesList = NULL;

    // define the local list for catalog_item_update_dto->selected_pricing_policies
    list_t *selected_pricing_policiesList = NULL;

    // define the local list for catalog_item_update_dto->selected_google_categories
    list_t *selected_google_categoriesList = NULL;

    // define the local list for catalog_item_update_dto->selected_warranty_policies
    list_t *selected_warranty_policiesList = NULL;

    // define the local list for catalog_item_update_dto->selected_shipment_policies
    list_t *selected_shipment_policiesList = NULL;

    // define the local list for catalog_item_update_dto->selected_attributes_options
    list_t *selected_attributes_optionsList = NULL;

    // define the local list for catalog_item_update_dto->selected_selling_margin_policies
    list_t *selected_selling_margin_policiesList = NULL;

    // catalog_item_update_dto->hot
    cJSON *hot = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "hot");
    if (hot) { 
    if(!cJSON_IsBool(hot))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->sku
    cJSON *sku = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "sku");
    if (sku) { 
    if(!cJSON_IsString(sku) && !cJSON_IsNull(sku))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->upc
    cJSON *upc = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "upc");
    if (upc) { 
    if(!cJSON_IsString(upc) && !cJSON_IsNull(upc))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->ean
    cJSON *ean = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "ean");
    if (ean) { 
    if(!cJSON_IsString(ean) && !cJSON_IsNull(ean))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->mpn
    cJSON *mpn = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "mpn");
    if (mpn) { 
    if(!cJSON_IsString(mpn) && !cJSON_IsNull(mpn))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->sk_us
    cJSON *sk_us = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "skUs");
    if (sk_us) { 
    if(!cJSON_IsString(sk_us) && !cJSON_IsNull(sk_us))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->isbn
    cJSON *isbn = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "isbn");
    if (isbn) { 
    if(!cJSON_IsString(isbn) && !cJSON_IsNull(isbn))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->up_cs
    cJSON *up_cs = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "upCs");
    if (up_cs) { 
    if(!cJSON_IsString(up_cs) && !cJSON_IsNull(up_cs))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->ea_ns
    cJSON *ea_ns = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "eaNs");
    if (ea_ns) { 
    if(!cJSON_IsString(ea_ns) && !cJSON_IsNull(ea_ns))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->asin
    cJSON *asin = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "asin");
    if (asin) { 
    if(!cJSON_IsString(asin) && !cJSON_IsNull(asin))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->gtin
    cJSON *gtin = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "gtin");
    if (gtin) { 
    if(!cJSON_IsString(gtin) && !cJSON_IsNull(gtin))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->mp_ns
    cJSON *mp_ns = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "mpNs");
    if (mp_ns) { 
    if(!cJSON_IsString(mp_ns) && !cJSON_IsNull(mp_ns))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->part
    cJSON *part = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "part");
    if (part) { 
    if(!cJSON_IsString(part) && !cJSON_IsNull(part))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->on_sale
    cJSON *on_sale = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "onSale");
    if (on_sale) { 
    if(!cJSON_IsBool(on_sale))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->isb_ns
    cJSON *isb_ns = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "isbNs");
    if (isb_ns) { 
    if(!cJSON_IsString(isb_ns) && !cJSON_IsNull(isb_ns))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->asi_ns
    cJSON *asi_ns = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "asiNs");
    if (asi_ns) { 
    if(!cJSON_IsString(asi_ns) && !cJSON_IsNull(asi_ns))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->gti_ns
    cJSON *gti_ns = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "gtiNs");
    if (gti_ns) { 
    if(!cJSON_IsString(gti_ns) && !cJSON_IsNull(gti_ns))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->width
    cJSON *width = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "width");
    if (width) { 
    if(!cJSON_IsNumber(width))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "model");
    if (model) { 
    if(!cJSON_IsString(model) && !cJSON_IsNull(model))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->auction
    cJSON *auction = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "auction");
    if (auction) { 
    if(!cJSON_IsBool(auction))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->color
    cJSON *color = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "color");
    if (color) { 
    if(!cJSON_IsString(color) && !cJSON_IsNull(color))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->deleted
    cJSON *deleted = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "deleted");
    if (deleted) { 
    if(!cJSON_IsBool(deleted))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->digital
    cJSON *digital = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "digital");
    if (digital) { 
    if(!cJSON_IsBool(digital))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->pre_sale
    cJSON *pre_sale = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "preSale");
    if (pre_sale) { 
    if(!cJSON_IsBool(pre_sale))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->taxable
    cJSON *taxable = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "taxable");
    if (taxable) { 
    if(!cJSON_IsBool(taxable))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->in_stock
    cJSON *in_stock = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "inStock");
    if (in_stock) { 
    if(!cJSON_IsBool(in_stock))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->isb_n13
    cJSON *isb_n13 = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "isbN13");
    if (isb_n13) { 
    if(!cJSON_IsString(isb_n13) && !cJSON_IsNull(isb_n13))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->unspsc
    cJSON *unspsc = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "unspsc");
    if (unspsc) { 
    if(!cJSON_IsString(unspsc) && !cJSON_IsNull(unspsc))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "weight");
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->length
    cJSON *length = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "length");
    if (length) { 
    if(!cJSON_IsNumber(length))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->height
    cJSON *height = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "height");
    if (height) { 
    if(!cJSON_IsNumber(height))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->unit_id
    cJSON *unit_id = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "unitId");
    if (unit_id) { 
    if(!cJSON_IsString(unit_id) && !cJSON_IsNull(unit_id))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->series
    cJSON *series = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "series");
    if (series) { 
    if(!cJSON_IsString(series) && !cJSON_IsNull(series))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->featured
    cJSON *featured = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "featured");
    if (featured) { 
    if(!cJSON_IsBool(featured))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->brands
    cJSON *brands = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "brands");
    if (brands) { 
    if(!cJSON_IsString(brands) && !cJSON_IsNull(brands))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->trending
    cJSON *trending = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "trending");
    if (trending) { 
    if(!cJSON_IsBool(trending))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->low_stock
    cJSON *low_stock = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "lowStock");
    if (low_stock) { 
    if(!cJSON_IsBool(low_stock))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->barcode
    cJSON *barcode = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "barcode");
    if (barcode) { 
    if(!cJSON_IsString(barcode) && !cJSON_IsNull(barcode))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->unsps_cs
    cJSON *unsps_cs = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "unspsCs");
    if (unsps_cs) { 
    if(!cJSON_IsString(unsps_cs) && !cJSON_IsNull(unsps_cs))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->pattern
    cJSON *pattern = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "pattern");
    if (pattern) { 
    if(!cJSON_IsString(pattern) && !cJSON_IsNull(pattern))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->published
    cJSON *published = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "published");
    if (published) { 
    if(!cJSON_IsBool(published))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->by_request
    cJSON *by_request = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "byRequest");
    if (by_request) { 
    if(!cJSON_IsBool(by_request))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->summary
    cJSON *summary = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "summary");
    if (summary) { 
    if(!cJSON_IsString(summary) && !cJSON_IsNull(summary))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->brand_id
    cJSON *brand_id = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "brandId");
    if (brand_id) { 
    if(!cJSON_IsString(brand_id) && !cJSON_IsNull(brand_id))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->views_count
    cJSON *views_count = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "viewsCount");
    if (views_count) { 
    if(!cJSON_IsNumber(views_count))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->features
    cJSON *features = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "features");
    if (features) { 
    if(!cJSON_IsString(features) && !cJSON_IsNull(features))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->material
    cJSON *material = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "material");
    if (material) { 
    if(!cJSON_IsString(material) && !cJSON_IsNull(material))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->on_discount
    cJSON *on_discount = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "onDiscount");
    if (on_discount) { 
    if(!cJSON_IsBool(on_discount))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->total_tax
    cJSON *total_tax = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "totalTax");
    if (total_tax) { 
    if(!cJSON_IsNumber(total_tax))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->permalink
    cJSON *permalink = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "permalink");
    if (permalink) { 
    if(!cJSON_IsString(permalink) && !cJSON_IsNull(permalink))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->brand_name
    cJSON *brand_name = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "brandName");
    if (brand_name) { 
    if(!cJSON_IsString(brand_name) && !cJSON_IsNull(brand_name))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->reviews_count
    cJSON *reviews_count = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "reviewsCount");
    if (reviews_count) { 
    if(!cJSON_IsNumber(reviews_count))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->is_daily_deal
    cJSON *is_daily_deal = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "isDailyDeal");
    if (is_daily_deal) { 
    if(!cJSON_IsBool(is_daily_deal))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->language_id
    cJSON *language_id = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "languageId");
    if (language_id) { 
    if(!cJSON_IsString(language_id) && !cJSON_IsNull(language_id))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->categories
    cJSON *categories = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "categories");
    if (categories) { 
    if(!cJSON_IsString(categories) && !cJSON_IsNull(categories))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->final_price
    cJSON *final_price = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "finalPrice");
    if (final_price) { 
    if(!cJSON_IsNumber(final_price))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->item_type_id
    cJSON *item_type_id = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "itemTypeId");
    if (item_type_id) { 
    if(!cJSON_IsString(item_type_id) && !cJSON_IsNull(item_type_id))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->category_id
    cJSON *category_id = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "categoryId");
    if (category_id) { 
    if(!cJSON_IsString(category_id) && !cJSON_IsNull(category_id))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->reviews_avg
    cJSON *reviews_avg = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "reviewsAvg");
    if (reviews_avg) { 
    if(!cJSON_IsNumber(reviews_avg))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->is_new_arrival
    cJSON *is_new_arrival = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "isNewArrival");
    if (is_new_arrival) { 
    if(!cJSON_IsBool(is_new_arrival))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->is_weekly_deal
    cJSON *is_weekly_deal = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "isWeeklyDeal");
    if (is_weekly_deal) { 
    if(!cJSON_IsBool(is_weekly_deal))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->is_best_seller
    cJSON *is_best_seller = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "isBestSeller");
    if (is_best_seller) { 
    if(!cJSON_IsBool(is_best_seller))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->unit_group_id
    cJSON *unit_group_id = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "unitGroupId");
    if (unit_group_id) { 
    if(!cJSON_IsString(unit_group_id) && !cJSON_IsNull(unit_group_id))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->ingredients
    cJSON *ingredients = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "ingredients");
    if (ingredients) { 
    if(!cJSON_IsString(ingredients) && !cJSON_IsNull(ingredients))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->release_date
    cJSON *release_date = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "releaseDate");
    if (release_date) { 
    if(!cJSON_IsString(release_date) && !cJSON_IsNull(release_date))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->is_monthly_deal
    cJSON *is_monthly_deal = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "isMonthlyDeal");
    if (is_monthly_deal) { 
    if(!cJSON_IsBool(is_monthly_deal))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->recurrency
    cJSON *recurrency = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "recurrency");
    if (recurrency) { 
    if(!cJSON_IsNumber(recurrency))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->payment_cost
    cJSON *payment_cost = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "paymentCost");
    if (payment_cost) { 
    if(!cJSON_IsNumber(payment_cost))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->custom_tax_value
    cJSON *custom_tax_value = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "customTaxValue");
    if (custom_tax_value) { 
    if(!cJSON_IsNumber(custom_tax_value))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->has_variations
    cJSON *has_variations = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "hasVariations");
    if (has_variations) { 
    if(!cJSON_IsBool(has_variations))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->questions_count
    cJSON *questions_count = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "questionsCount");
    if (questions_count) { 
    if(!cJSON_IsNumber(questions_count))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->supplier_code
    cJSON *supplier_code = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "supplierCode");
    if (supplier_code) { 
    if(!cJSON_IsString(supplier_code) && !cJSON_IsNull(supplier_code))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->auction_end
    cJSON *auction_end = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "auctionEnd");
    if (auction_end) { 
    if(!cJSON_IsString(auction_end) && !cJSON_IsNull(auction_end))
    {
    goto end; //DateTime
    }
    }

    // catalog_item_update_dto->purchase_note
    cJSON *purchase_note = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "purchaseNote");
    if (purchase_note) { 
    if(!cJSON_IsString(purchase_note) && !cJSON_IsNull(purchase_note))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->ships_to_rules
    cJSON *ships_to_rules = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "shipsToRules");
    if (ships_to_rules) { 
    if(!cJSON_IsString(ships_to_rules) && !cJSON_IsNull(ships_to_rules))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->regular_price
    cJSON *regular_price = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "regularPrice");
    if (regular_price) { 
    if(!cJSON_IsNumber(regular_price))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->images
    cJSON *images = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "images");
    if (images) { 
    cJSON *images_local = NULL;
    if(!cJSON_IsArray(images)) {
        goto end;//primitive container
    }
    imagesList = list_createList();

    cJSON_ArrayForEach(images_local, images)
    {
        if(!cJSON_IsString(images_local))
        {
            goto end;
        }
        list_addElement(imagesList , strdup(images_local->valuestring));
    }
    }

    // catalog_item_update_dto->shipping_cost
    cJSON *shipping_cost = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "shippingCost");
    if (shipping_cost) { 
    if(!cJSON_IsNumber(shipping_cost))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->parent_item_id
    cJSON *parent_item_id = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "parentItemId");
    if (parent_item_id) { 
    if(!cJSON_IsString(parent_item_id) && !cJSON_IsNull(parent_item_id))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->item_type_name
    cJSON *item_type_name = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "itemTypeName");
    if (item_type_name) { 
    if(!cJSON_IsString(item_type_name) && !cJSON_IsNull(item_type_name))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->cart_record_id
    cJSON *cart_record_id = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "cartRecordId");
    if (cart_record_id) { 
    if(!cJSON_IsString(cart_record_id) && !cJSON_IsNull(cart_record_id))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->variations
    cJSON *variations = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "variations");
    if (variations) { 
    cJSON *variations_local = NULL;
    if(!cJSON_IsArray(variations)) {
        goto end;//primitive container
    }
    variationsList = list_createList();

    cJSON_ArrayForEach(variations_local, variations)
    {
        if(!cJSON_IsString(variations_local))
        {
            goto end;
        }
        list_addElement(variationsList , strdup(variations_local->valuestring));
    }
    }

    // catalog_item_update_dto->tariff_heading
    cJSON *tariff_heading = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "tariffHeading");
    if (tariff_heading) { 
    if(!cJSON_IsString(tariff_heading) && !cJSON_IsNull(tariff_heading))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->packaged_quantity
    cJSON *packaged_quantity = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "packagedQuantity");
    if (packaged_quantity) { 
    if(!cJSON_IsNumber(packaged_quantity))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->is_fixed_discount
    cJSON *is_fixed_discount = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "isFixedDiscount");
    if (is_fixed_discount) { 
    if(!cJSON_IsBool(is_fixed_discount))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->discount_price
    cJSON *discount_price = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "discountPrice");
    if (discount_price) { 
    if(!cJSON_IsNumber(discount_price))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->is_dealers_choice
    cJSON *is_dealers_choice = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "isDealersChoice");
    if (is_dealers_choice) { 
    if(!cJSON_IsBool(is_dealers_choice))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->current_stock
    cJSON *current_stock = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "currentStock");
    if (current_stock) { 
    if(!cJSON_IsNumber(current_stock))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->manage_inventory
    cJSON *manage_inventory = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "manageInventory");
    if (manage_inventory) { 
    if(!cJSON_IsBool(manage_inventory))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->auction_start
    cJSON *auction_start = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "auctionStart");
    if (auction_start) { 
    if(!cJSON_IsString(auction_start) && !cJSON_IsNull(auction_start))
    {
    goto end; //DateTime
    }
    }

    // catalog_item_update_dto->nutrition_facts
    cJSON *nutrition_facts = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "nutritionFacts");
    if (nutrition_facts) { 
    if(!cJSON_IsString(nutrition_facts) && !cJSON_IsNull(nutrition_facts))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->mozaic_cover_url
    cJSON *mozaic_cover_url = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "mozaicCoverUrl");
    if (mozaic_cover_url) { 
    if(!cJSON_IsString(mozaic_cover_url) && !cJSON_IsNull(mozaic_cover_url))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->package_content
    cJSON *package_content = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "packageContent");
    if (package_content) { 
    if(!cJSON_IsString(package_content) && !cJSON_IsNull(package_content))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->discount_amount
    cJSON *discount_amount = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "discountAmount");
    if (discount_amount) { 
    if(!cJSON_IsNumber(discount_amount))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->youtube_video_id
    cJSON *youtube_video_id = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "youtubeVideoId");
    if (youtube_video_id) { 
    if(!cJSON_IsString(youtube_video_id) && !cJSON_IsNull(youtube_video_id))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->in_cart_quantity
    cJSON *in_cart_quantity = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "inCartQuantity");
    if (in_cart_quantity) { 
    if(!cJSON_IsNumber(in_cart_quantity))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->is_official_choice
    cJSON *is_official_choice = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "isOfficialChoice");
    if (is_official_choice) { 
    if(!cJSON_IsBool(is_official_choice))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->published_date
    cJSON *published_date = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "publishedDate");
    if (published_date) { 
    if(!cJSON_IsString(published_date) && !cJSON_IsNull(published_date))
    {
    goto end; //DateTime
    }
    }

    // catalog_item_update_dto->primary_image_url
    cJSON *primary_image_url = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "primaryImageUrl");
    if (primary_image_url) { 
    if(!cJSON_IsString(primary_image_url) && !cJSON_IsNull(primary_image_url))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->valid_primary_image
    cJSON *valid_primary_image = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "validPrimaryImage");
    if (valid_primary_image) { 
    if(!cJSON_IsBool(valid_primary_image))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->custom_tax_amount
    cJSON *custom_tax_amount = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "customTaxAmount");
    if (custom_tax_amount) { 
    if(!cJSON_IsNumber(custom_tax_amount))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->long_description
    cJSON *long_description = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "longDescription");
    if (long_description) { 
    if(!cJSON_IsString(long_description) && !cJSON_IsNull(long_description))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->compare_record_id
    cJSON *compare_record_id = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "compareRecordId");
    if (compare_record_id) { 
    if(!cJSON_IsString(compare_record_id) && !cJSON_IsNull(compare_record_id))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->measurement_unit
    cJSON *measurement_unit = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "measurementUnit");
    if (measurement_unit) { 
    if(!cJSON_IsString(measurement_unit) && !cJSON_IsNull(measurement_unit))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->short_description
    cJSON *short_description = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "shortDescription");
    if (short_description) { 
    if(!cJSON_IsString(short_description) && !cJSON_IsNull(short_description))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->google_categories
    cJSON *google_categories = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "googleCategories");
    if (google_categories) { 
    if(!cJSON_IsString(google_categories) && !cJSON_IsNull(google_categories))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->is_deadline_discount
    cJSON *is_deadline_discount = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "isDeadlineDiscount");
    if (is_deadline_discount) { 
    if(!cJSON_IsBool(is_deadline_discount))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->display_showcase_tab
    cJSON *display_showcase_tab = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "displayShowcaseTab");
    if (display_showcase_tab) { 
    if(!cJSON_IsBool(display_showcase_tab))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->tax_included_in_price
    cJSON *tax_included_in_price = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "taxIncludedInPrice");
    if (tax_included_in_price) { 
    if(!cJSON_IsBool(tax_included_in_price))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->is_product_of_the_week
    cJSON *is_product_of_the_week = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "isProductOfTheWeek");
    if (is_product_of_the_week) { 
    if(!cJSON_IsBool(is_product_of_the_week))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->supplier_profile_id
    cJSON *supplier_profile_id = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "supplierProfileId");
    if (supplier_profile_id) { 
    if(!cJSON_IsString(supplier_profile_id) && !cJSON_IsNull(supplier_profile_id))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->shipping_country_id
    cJSON *shipping_country_id = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "shippingCountryId");
    if (shipping_country_id) { 
    if(!cJSON_IsString(shipping_country_id) && !cJSON_IsNull(shipping_country_id))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->is_product_of_the_month
    cJSON *is_product_of_the_month = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "isProductOfTheMonth");
    if (is_product_of_the_month) { 
    if(!cJSON_IsBool(is_product_of_the_month))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->system_requirements
    cJSON *system_requirements = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "systemRequirements");
    if (system_requirements) { 
    if(!cJSON_IsString(system_requirements) && !cJSON_IsNull(system_requirements))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->is_porcentual_discount
    cJSON *is_porcentual_discount = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "isPorcentualDiscount");
    if (is_porcentual_discount) { 
    if(!cJSON_IsBool(is_porcentual_discount))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->discount_percentage
    cJSON *discount_percentage = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "discountPercentage");
    if (discount_percentage) { 
    if(!cJSON_IsNumber(discount_percentage))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->discount_dead_line
    cJSON *discount_dead_line = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "discountDeadLine");
    if (discount_dead_line) { 
    if(!cJSON_IsString(discount_dead_line) && !cJSON_IsNull(discount_dead_line))
    {
    goto end; //DateTime
    }
    }

    // catalog_item_update_dto->display_on_global_mozaic
    cJSON *display_on_global_mozaic = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "displayOnGlobalMozaic");
    if (display_on_global_mozaic) { 
    if(!cJSON_IsBool(display_on_global_mozaic))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->display_on_brands_mozaic
    cJSON *display_on_brands_mozaic = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "displayOnBrandsMozaic");
    if (display_on_brands_mozaic) { 
    if(!cJSON_IsBool(display_on_brands_mozaic))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->custom_tax_percentage
    cJSON *custom_tax_percentage = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "customTaxPercentage");
    if (custom_tax_percentage) { 
    if(!cJSON_IsNumber(custom_tax_percentage))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->estimated_taxes_in_usd
    cJSON *estimated_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "estimatedTaxesInUsd");
    if (estimated_taxes_in_usd) { 
    if(!cJSON_IsNumber(estimated_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->custom_tax_description
    cJSON *custom_tax_description = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "customTaxDescription");
    if (custom_tax_description) { 
    if(!cJSON_IsString(custom_tax_description) && !cJSON_IsNull(custom_tax_description))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->disable_default_policies
    cJSON *disable_default_policies = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "disableDefaultPolicies");
    if (disable_default_policies) { 
    if(!cJSON_IsBool(disable_default_policies))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->estimated_profit_in_usd
    cJSON *estimated_profit_in_usd = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "estimatedProfitInUsd");
    if (estimated_profit_in_usd) { 
    if(!cJSON_IsNumber(estimated_profit_in_usd))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->display_on_category_mozaic
    cJSON *display_on_category_mozaic = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "displayOnCategoryMozaic");
    if (display_on_category_mozaic) { 
    if(!cJSON_IsBool(display_on_category_mozaic))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->official_description_url
    cJSON *official_description_url = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "officialDescriptionUrl");
    if (official_description_url) { 
    if(!cJSON_IsString(official_description_url) && !cJSON_IsNull(official_description_url))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->energy_efficiency_rating
    cJSON *energy_efficiency_rating = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "energyEfficiencyRating");
    if (energy_efficiency_rating) { 
    if(!cJSON_IsString(energy_efficiency_rating) && !cJSON_IsNull(energy_efficiency_rating))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->page_cover_background_url
    cJSON *page_cover_background_url = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "pageCoverBackgroundUrl");
    if (page_cover_background_url) { 
    if(!cJSON_IsString(page_cover_background_url) && !cJSON_IsNull(page_cover_background_url))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->estimated_base_price_in_usd
    cJSON *estimated_base_price_in_usd = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "estimatedBasePriceInUsd");
    if (estimated_base_price_in_usd) { 
    if(!cJSON_IsNumber(estimated_base_price_in_usd))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->estimated_discounts_in_usd
    cJSON *estimated_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "estimatedDiscountsInUsd");
    if (estimated_discounts_in_usd) { 
    if(!cJSON_IsNumber(estimated_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->operating_system_supported
    cJSON *operating_system_supported = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "operatingSystemSupported");
    if (operating_system_supported) { 
    if(!cJSON_IsString(operating_system_supported) && !cJSON_IsNull(operating_system_supported))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->estimated_surcharges_in_usd
    cJSON *estimated_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "estimatedSurchargesInUsd");
    if (estimated_surcharges_in_usd) { 
    if(!cJSON_IsNumber(estimated_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->deadline_discount_due_date
    cJSON *deadline_discount_due_date = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "deadlineDiscountDueDate");
    if (deadline_discount_due_date) { 
    if(!cJSON_IsString(deadline_discount_due_date) && !cJSON_IsNull(deadline_discount_due_date))
    {
    goto end; //DateTime
    }
    }

    // catalog_item_update_dto->deadline_discount_from_date
    cJSON *deadline_discount_from_date = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "deadlineDiscountFromDate");
    if (deadline_discount_from_date) { 
    if(!cJSON_IsString(deadline_discount_from_date) && !cJSON_IsNull(deadline_discount_from_date))
    {
    goto end; //DateTime
    }
    }

    // catalog_item_update_dto->estimated_regular_price_in_usd
    cJSON *estimated_regular_price_in_usd = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "estimatedRegularPriceInUsd");
    if (estimated_regular_price_in_usd) { 
    if(!cJSON_IsNumber(estimated_regular_price_in_usd))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->estimated_tax_base_price_in_usd
    cJSON *estimated_tax_base_price_in_usd = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "estimatedTaxBasePriceInUsd");
    if (estimated_tax_base_price_in_usd) { 
    if(!cJSON_IsNumber(estimated_tax_base_price_in_usd))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->display_on_banner_marketing_rotation
    cJSON *display_on_banner_marketing_rotation = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "displayOnBannerMarketingRotation");
    if (display_on_banner_marketing_rotation) { 
    if(!cJSON_IsBool(display_on_banner_marketing_rotation))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->last_fixed_prices_update_date_time
    cJSON *last_fixed_prices_update_date_time = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "lastFixedPricesUpdateDateTime");
    if (last_fixed_prices_update_date_time) { 
    if(!cJSON_IsString(last_fixed_prices_update_date_time) && !cJSON_IsNull(last_fixed_prices_update_date_time))
    {
    goto end; //DateTime
    }
    }

    // catalog_item_update_dto->estimated_witholding_taxes_in_usd
    cJSON *estimated_witholding_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "estimatedWitholdingTaxesInUsd");
    if (estimated_witholding_taxes_in_usd) { 
    if(!cJSON_IsNumber(estimated_witholding_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->estimated_payment_cost_in_usd
    cJSON *estimated_payment_cost_in_usd = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "estimatedPaymentCostInUsd");
    if (estimated_payment_cost_in_usd) { 
    if(!cJSON_IsNumber(estimated_payment_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->estimated_payment_tax_in_usd
    cJSON *estimated_payment_tax_in_usd = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "estimatedPaymentTaxInUsd");
    if (estimated_payment_tax_in_usd) { 
    if(!cJSON_IsNumber(estimated_payment_tax_in_usd))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->estimated_default_shipping_cost_in_usd
    cJSON *estimated_default_shipping_cost_in_usd = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "estimatedDefaultShippingCostInUsd");
    if (estimated_default_shipping_cost_in_usd) { 
    if(!cJSON_IsNumber(estimated_default_shipping_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->estimated_default_shipping_tax_in_usd
    cJSON *estimated_default_shipping_tax_in_usd = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "estimatedDefaultShippingTaxInUsd");
    if (estimated_default_shipping_tax_in_usd) { 
    if(!cJSON_IsNumber(estimated_default_shipping_tax_in_usd))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->estimated_total_price_in_usd
    cJSON *estimated_total_price_in_usd = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "estimatedTotalPriceInUsd");
    if (estimated_total_price_in_usd) { 
    if(!cJSON_IsNumber(estimated_total_price_in_usd))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->recently_viewed_record_id
    cJSON *recently_viewed_record_id = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "recentlyViewedRecordId");
    if (recently_viewed_record_id) { 
    if(!cJSON_IsString(recently_viewed_record_id) && !cJSON_IsNull(recently_viewed_record_id))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->display_description_editor
    cJSON *display_description_editor = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "displayDescriptionEditor");
    if (display_description_editor) { 
    if(!cJSON_IsBool(display_description_editor))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->primary_google_category_id
    cJSON *primary_google_category_id = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "primaryGoogleCategoryId");
    if (primary_google_category_id) { 
    if(!cJSON_IsString(primary_google_category_id) && !cJSON_IsNull(primary_google_category_id))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->supported_operating_system
    cJSON *supported_operating_system = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "supportedOperatingSystem");
    if (supported_operating_system) { 
    if(!cJSON_IsString(supported_operating_system) && !cJSON_IsNull(supported_operating_system))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->estimated_deal_savings_in_usd
    cJSON *estimated_deal_savings_in_usd = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "estimatedDealSavingsInUsd");
    if (estimated_deal_savings_in_usd) { 
    if(!cJSON_IsNumber(estimated_deal_savings_in_usd))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->primary_google_category_name
    cJSON *primary_google_category_name = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "primaryGoogleCategoryName");
    if (primary_google_category_name) { 
    if(!cJSON_IsString(primary_google_category_name) && !cJSON_IsNull(primary_google_category_name))
    {
    goto end; //String
    }
    }

    // catalog_item_update_dto->display_short_description_editor
    cJSON *display_short_description_editor = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "displayShortDescriptionEditor");
    if (display_short_description_editor) { 
    if(!cJSON_IsBool(display_short_description_editor))
    {
    goto end; //Bool
    }
    }

    // catalog_item_update_dto->estimated_withholding_taxes_in_usd
    cJSON *estimated_withholding_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "estimatedWithholdingTaxesInUsd");
    if (estimated_withholding_taxes_in_usd) { 
    if(!cJSON_IsNumber(estimated_withholding_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // catalog_item_update_dto->selected_tags
    cJSON *selected_tags = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "selectedTags");
    if (selected_tags) { 
    cJSON *selected_tags_local = NULL;
    if(!cJSON_IsArray(selected_tags)) {
        goto end;//primitive container
    }
    selected_tagsList = list_createList();

    cJSON_ArrayForEach(selected_tags_local, selected_tags)
    {
        if(!cJSON_IsString(selected_tags_local))
        {
            goto end;
        }
        list_addElement(selected_tagsList , strdup(selected_tags_local->valuestring));
    }
    }

    // catalog_item_update_dto->selected_types
    cJSON *selected_types = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "selectedTypes");
    if (selected_types) { 
    cJSON *selected_types_local = NULL;
    if(!cJSON_IsArray(selected_types)) {
        goto end;//primitive container
    }
    selected_typesList = list_createList();

    cJSON_ArrayForEach(selected_types_local, selected_types)
    {
        if(!cJSON_IsString(selected_types_local))
        {
            goto end;
        }
        list_addElement(selected_typesList , strdup(selected_types_local->valuestring));
    }
    }

    // catalog_item_update_dto->selected_brands
    cJSON *selected_brands = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "selectedBrands");
    if (selected_brands) { 
    cJSON *selected_brands_local = NULL;
    if(!cJSON_IsArray(selected_brands)) {
        goto end;//primitive container
    }
    selected_brandsList = list_createList();

    cJSON_ArrayForEach(selected_brands_local, selected_brands)
    {
        if(!cJSON_IsString(selected_brands_local))
        {
            goto end;
        }
        list_addElement(selected_brandsList , strdup(selected_brands_local->valuestring));
    }
    }

    // catalog_item_update_dto->selected_categories
    cJSON *selected_categories = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "selectedCategories");
    if (selected_categories) { 
    cJSON *selected_categories_local = NULL;
    if(!cJSON_IsArray(selected_categories)) {
        goto end;//primitive container
    }
    selected_categoriesList = list_createList();

    cJSON_ArrayForEach(selected_categories_local, selected_categories)
    {
        if(!cJSON_IsString(selected_categories_local))
        {
            goto end;
        }
        list_addElement(selected_categoriesList , strdup(selected_categories_local->valuestring));
    }
    }

    // catalog_item_update_dto->selected_tax_policies
    cJSON *selected_tax_policies = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "selectedTaxPolicies");
    if (selected_tax_policies) { 
    cJSON *selected_tax_policies_local = NULL;
    if(!cJSON_IsArray(selected_tax_policies)) {
        goto end;//primitive container
    }
    selected_tax_policiesList = list_createList();

    cJSON_ArrayForEach(selected_tax_policies_local, selected_tax_policies)
    {
        if(!cJSON_IsString(selected_tax_policies_local))
        {
            goto end;
        }
        list_addElement(selected_tax_policiesList , strdup(selected_tax_policies_local->valuestring));
    }
    }

    // catalog_item_update_dto->selected_pricing_rules
    cJSON *selected_pricing_rules = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "selectedPricingRules");
    if (selected_pricing_rules) { 
    cJSON *selected_pricing_rules_local = NULL;
    if(!cJSON_IsArray(selected_pricing_rules)) {
        goto end;//primitive container
    }
    selected_pricing_rulesList = list_createList();

    cJSON_ArrayForEach(selected_pricing_rules_local, selected_pricing_rules)
    {
        if(!cJSON_IsString(selected_pricing_rules_local))
        {
            goto end;
        }
        list_addElement(selected_pricing_rulesList , strdup(selected_pricing_rules_local->valuestring));
    }
    }

    // catalog_item_update_dto->selected_refund_policies
    cJSON *selected_refund_policies = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "selectedRefundPolicies");
    if (selected_refund_policies) { 
    cJSON *selected_refund_policies_local = NULL;
    if(!cJSON_IsArray(selected_refund_policies)) {
        goto end;//primitive container
    }
    selected_refund_policiesList = list_createList();

    cJSON_ArrayForEach(selected_refund_policies_local, selected_refund_policies)
    {
        if(!cJSON_IsString(selected_refund_policies_local))
        {
            goto end;
        }
        list_addElement(selected_refund_policiesList , strdup(selected_refund_policies_local->valuestring));
    }
    }

    // catalog_item_update_dto->selected_return_policies
    cJSON *selected_return_policies = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "selectedReturnPolicies");
    if (selected_return_policies) { 
    cJSON *selected_return_policies_local = NULL;
    if(!cJSON_IsArray(selected_return_policies)) {
        goto end;//primitive container
    }
    selected_return_policiesList = list_createList();

    cJSON_ArrayForEach(selected_return_policies_local, selected_return_policies)
    {
        if(!cJSON_IsString(selected_return_policies_local))
        {
            goto end;
        }
        list_addElement(selected_return_policiesList , strdup(selected_return_policies_local->valuestring));
    }
    }

    // catalog_item_update_dto->selected_pricing_policies
    cJSON *selected_pricing_policies = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "selectedPricingPolicies");
    if (selected_pricing_policies) { 
    cJSON *selected_pricing_policies_local = NULL;
    if(!cJSON_IsArray(selected_pricing_policies)) {
        goto end;//primitive container
    }
    selected_pricing_policiesList = list_createList();

    cJSON_ArrayForEach(selected_pricing_policies_local, selected_pricing_policies)
    {
        if(!cJSON_IsString(selected_pricing_policies_local))
        {
            goto end;
        }
        list_addElement(selected_pricing_policiesList , strdup(selected_pricing_policies_local->valuestring));
    }
    }

    // catalog_item_update_dto->selected_google_categories
    cJSON *selected_google_categories = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "selectedGoogleCategories");
    if (selected_google_categories) { 
    cJSON *selected_google_categories_local = NULL;
    if(!cJSON_IsArray(selected_google_categories)) {
        goto end;//primitive container
    }
    selected_google_categoriesList = list_createList();

    cJSON_ArrayForEach(selected_google_categories_local, selected_google_categories)
    {
        if(!cJSON_IsString(selected_google_categories_local))
        {
            goto end;
        }
        list_addElement(selected_google_categoriesList , strdup(selected_google_categories_local->valuestring));
    }
    }

    // catalog_item_update_dto->selected_warranty_policies
    cJSON *selected_warranty_policies = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "selectedWarrantyPolicies");
    if (selected_warranty_policies) { 
    cJSON *selected_warranty_policies_local = NULL;
    if(!cJSON_IsArray(selected_warranty_policies)) {
        goto end;//primitive container
    }
    selected_warranty_policiesList = list_createList();

    cJSON_ArrayForEach(selected_warranty_policies_local, selected_warranty_policies)
    {
        if(!cJSON_IsString(selected_warranty_policies_local))
        {
            goto end;
        }
        list_addElement(selected_warranty_policiesList , strdup(selected_warranty_policies_local->valuestring));
    }
    }

    // catalog_item_update_dto->selected_shipment_policies
    cJSON *selected_shipment_policies = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "selectedShipmentPolicies");
    if (selected_shipment_policies) { 
    cJSON *selected_shipment_policies_local = NULL;
    if(!cJSON_IsArray(selected_shipment_policies)) {
        goto end;//primitive container
    }
    selected_shipment_policiesList = list_createList();

    cJSON_ArrayForEach(selected_shipment_policies_local, selected_shipment_policies)
    {
        if(!cJSON_IsString(selected_shipment_policies_local))
        {
            goto end;
        }
        list_addElement(selected_shipment_policiesList , strdup(selected_shipment_policies_local->valuestring));
    }
    }

    // catalog_item_update_dto->selected_attributes_options
    cJSON *selected_attributes_options = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "selectedAttributesOptions");
    if (selected_attributes_options) { 
    cJSON *selected_attributes_options_local = NULL;
    if(!cJSON_IsArray(selected_attributes_options)) {
        goto end;//primitive container
    }
    selected_attributes_optionsList = list_createList();

    cJSON_ArrayForEach(selected_attributes_options_local, selected_attributes_options)
    {
        if(!cJSON_IsString(selected_attributes_options_local))
        {
            goto end;
        }
        list_addElement(selected_attributes_optionsList , strdup(selected_attributes_options_local->valuestring));
    }
    }

    // catalog_item_update_dto->selected_selling_margin_policies
    cJSON *selected_selling_margin_policies = cJSON_GetObjectItemCaseSensitive(catalog_item_update_dtoJSON, "selectedSellingMarginPolicies");
    if (selected_selling_margin_policies) { 
    cJSON *selected_selling_margin_policies_local = NULL;
    if(!cJSON_IsArray(selected_selling_margin_policies)) {
        goto end;//primitive container
    }
    selected_selling_margin_policiesList = list_createList();

    cJSON_ArrayForEach(selected_selling_margin_policies_local, selected_selling_margin_policies)
    {
        if(!cJSON_IsString(selected_selling_margin_policies_local))
        {
            goto end;
        }
        list_addElement(selected_selling_margin_policiesList , strdup(selected_selling_margin_policies_local->valuestring));
    }
    }


    catalog_item_update_dto_local_var = catalog_item_update_dto_create (
        hot ? hot->valueint : 0,
        sku && !cJSON_IsNull(sku) ? strdup(sku->valuestring) : NULL,
        upc && !cJSON_IsNull(upc) ? strdup(upc->valuestring) : NULL,
        ean && !cJSON_IsNull(ean) ? strdup(ean->valuestring) : NULL,
        mpn && !cJSON_IsNull(mpn) ? strdup(mpn->valuestring) : NULL,
        sk_us && !cJSON_IsNull(sk_us) ? strdup(sk_us->valuestring) : NULL,
        isbn && !cJSON_IsNull(isbn) ? strdup(isbn->valuestring) : NULL,
        up_cs && !cJSON_IsNull(up_cs) ? strdup(up_cs->valuestring) : NULL,
        ea_ns && !cJSON_IsNull(ea_ns) ? strdup(ea_ns->valuestring) : NULL,
        asin && !cJSON_IsNull(asin) ? strdup(asin->valuestring) : NULL,
        gtin && !cJSON_IsNull(gtin) ? strdup(gtin->valuestring) : NULL,
        mp_ns && !cJSON_IsNull(mp_ns) ? strdup(mp_ns->valuestring) : NULL,
        part && !cJSON_IsNull(part) ? strdup(part->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        on_sale ? on_sale->valueint : 0,
        isb_ns && !cJSON_IsNull(isb_ns) ? strdup(isb_ns->valuestring) : NULL,
        asi_ns && !cJSON_IsNull(asi_ns) ? strdup(asi_ns->valuestring) : NULL,
        gti_ns && !cJSON_IsNull(gti_ns) ? strdup(gti_ns->valuestring) : NULL,
        width ? width->valuedouble : 0,
        model && !cJSON_IsNull(model) ? strdup(model->valuestring) : NULL,
        auction ? auction->valueint : 0,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        color && !cJSON_IsNull(color) ? strdup(color->valuestring) : NULL,
        deleted ? deleted->valueint : 0,
        digital ? digital->valueint : 0,
        pre_sale ? pre_sale->valueint : 0,
        taxable ? taxable->valueint : 0,
        in_stock ? in_stock->valueint : 0,
        isb_n13 && !cJSON_IsNull(isb_n13) ? strdup(isb_n13->valuestring) : NULL,
        unspsc && !cJSON_IsNull(unspsc) ? strdup(unspsc->valuestring) : NULL,
        weight ? weight->valuedouble : 0,
        length ? length->valuedouble : 0,
        height ? height->valuedouble : 0,
        unit_id && !cJSON_IsNull(unit_id) ? strdup(unit_id->valuestring) : NULL,
        series && !cJSON_IsNull(series) ? strdup(series->valuestring) : NULL,
        featured ? featured->valueint : 0,
        brands && !cJSON_IsNull(brands) ? strdup(brands->valuestring) : NULL,
        trending ? trending->valueint : 0,
        low_stock ? low_stock->valueint : 0,
        barcode && !cJSON_IsNull(barcode) ? strdup(barcode->valuestring) : NULL,
        unsps_cs && !cJSON_IsNull(unsps_cs) ? strdup(unsps_cs->valuestring) : NULL,
        pattern && !cJSON_IsNull(pattern) ? strdup(pattern->valuestring) : NULL,
        published ? published->valueint : 0,
        by_request ? by_request->valueint : 0,
        summary && !cJSON_IsNull(summary) ? strdup(summary->valuestring) : NULL,
        brand_id && !cJSON_IsNull(brand_id) ? strdup(brand_id->valuestring) : NULL,
        views_count ? views_count->valuedouble : 0,
        features && !cJSON_IsNull(features) ? strdup(features->valuestring) : NULL,
        material && !cJSON_IsNull(material) ? strdup(material->valuestring) : NULL,
        on_discount ? on_discount->valueint : 0,
        total_tax ? total_tax->valuedouble : 0,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        permalink && !cJSON_IsNull(permalink) ? strdup(permalink->valuestring) : NULL,
        brand_name && !cJSON_IsNull(brand_name) ? strdup(brand_name->valuestring) : NULL,
        reviews_count ? reviews_count->valuedouble : 0,
        is_daily_deal ? is_daily_deal->valueint : 0,
        language_id && !cJSON_IsNull(language_id) ? strdup(language_id->valuestring) : NULL,
        categories && !cJSON_IsNull(categories) ? strdup(categories->valuestring) : NULL,
        final_price ? final_price->valuedouble : 0,
        item_type_id && !cJSON_IsNull(item_type_id) ? strdup(item_type_id->valuestring) : NULL,
        category_id && !cJSON_IsNull(category_id) ? strdup(category_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        reviews_avg ? reviews_avg->valuedouble : 0,
        is_new_arrival ? is_new_arrival->valueint : 0,
        is_weekly_deal ? is_weekly_deal->valueint : 0,
        is_best_seller ? is_best_seller->valueint : 0,
        unit_group_id && !cJSON_IsNull(unit_group_id) ? strdup(unit_group_id->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        ingredients && !cJSON_IsNull(ingredients) ? strdup(ingredients->valuestring) : NULL,
        release_date && !cJSON_IsNull(release_date) ? strdup(release_date->valuestring) : NULL,
        is_monthly_deal ? is_monthly_deal->valueint : 0,
        recurrency ? recurrency->valuedouble : 0,
        payment_cost ? payment_cost->valuedouble : 0,
        custom_tax_value ? custom_tax_value->valuedouble : 0,
        has_variations ? has_variations->valueint : 0,
        questions_count ? questions_count->valuedouble : 0,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        supplier_code && !cJSON_IsNull(supplier_code) ? strdup(supplier_code->valuestring) : NULL,
        auction_end && !cJSON_IsNull(auction_end) ? strdup(auction_end->valuestring) : NULL,
        purchase_note && !cJSON_IsNull(purchase_note) ? strdup(purchase_note->valuestring) : NULL,
        ships_to_rules && !cJSON_IsNull(ships_to_rules) ? strdup(ships_to_rules->valuestring) : NULL,
        regular_price ? regular_price->valuedouble : 0,
        images ? imagesList : NULL,
        shipping_cost ? shipping_cost->valuedouble : 0,
        parent_item_id && !cJSON_IsNull(parent_item_id) ? strdup(parent_item_id->valuestring) : NULL,
        item_type_name && !cJSON_IsNull(item_type_name) ? strdup(item_type_name->valuestring) : NULL,
        cart_record_id && !cJSON_IsNull(cart_record_id) ? strdup(cart_record_id->valuestring) : NULL,
        variations ? variationsList : NULL,
        tariff_heading && !cJSON_IsNull(tariff_heading) ? strdup(tariff_heading->valuestring) : NULL,
        packaged_quantity ? packaged_quantity->valuedouble : 0,
        is_fixed_discount ? is_fixed_discount->valueint : 0,
        discount_price ? discount_price->valuedouble : 0,
        is_dealers_choice ? is_dealers_choice->valueint : 0,
        current_stock ? current_stock->valuedouble : 0,
        manage_inventory ? manage_inventory->valueint : 0,
        auction_start && !cJSON_IsNull(auction_start) ? strdup(auction_start->valuestring) : NULL,
        nutrition_facts && !cJSON_IsNull(nutrition_facts) ? strdup(nutrition_facts->valuestring) : NULL,
        mozaic_cover_url && !cJSON_IsNull(mozaic_cover_url) ? strdup(mozaic_cover_url->valuestring) : NULL,
        package_content && !cJSON_IsNull(package_content) ? strdup(package_content->valuestring) : NULL,
        discount_amount ? discount_amount->valuedouble : 0,
        youtube_video_id && !cJSON_IsNull(youtube_video_id) ? strdup(youtube_video_id->valuestring) : NULL,
        in_cart_quantity ? in_cart_quantity->valuedouble : 0,
        is_official_choice ? is_official_choice->valueint : 0,
        published_date && !cJSON_IsNull(published_date) ? strdup(published_date->valuestring) : NULL,
        primary_image_url && !cJSON_IsNull(primary_image_url) ? strdup(primary_image_url->valuestring) : NULL,
        valid_primary_image ? valid_primary_image->valueint : 0,
        custom_tax_amount ? custom_tax_amount->valuedouble : 0,
        long_description && !cJSON_IsNull(long_description) ? strdup(long_description->valuestring) : NULL,
        compare_record_id && !cJSON_IsNull(compare_record_id) ? strdup(compare_record_id->valuestring) : NULL,
        measurement_unit && !cJSON_IsNull(measurement_unit) ? strdup(measurement_unit->valuestring) : NULL,
        short_description && !cJSON_IsNull(short_description) ? strdup(short_description->valuestring) : NULL,
        google_categories && !cJSON_IsNull(google_categories) ? strdup(google_categories->valuestring) : NULL,
        is_deadline_discount ? is_deadline_discount->valueint : 0,
        display_showcase_tab ? display_showcase_tab->valueint : 0,
        tax_included_in_price ? tax_included_in_price->valueint : 0,
        is_product_of_the_week ? is_product_of_the_week->valueint : 0,
        supplier_profile_id && !cJSON_IsNull(supplier_profile_id) ? strdup(supplier_profile_id->valuestring) : NULL,
        shipping_country_id && !cJSON_IsNull(shipping_country_id) ? strdup(shipping_country_id->valuestring) : NULL,
        is_product_of_the_month ? is_product_of_the_month->valueint : 0,
        system_requirements && !cJSON_IsNull(system_requirements) ? strdup(system_requirements->valuestring) : NULL,
        is_porcentual_discount ? is_porcentual_discount->valueint : 0,
        discount_percentage ? discount_percentage->valuedouble : 0,
        discount_dead_line && !cJSON_IsNull(discount_dead_line) ? strdup(discount_dead_line->valuestring) : NULL,
        display_on_global_mozaic ? display_on_global_mozaic->valueint : 0,
        display_on_brands_mozaic ? display_on_brands_mozaic->valueint : 0,
        custom_tax_percentage ? custom_tax_percentage->valuedouble : 0,
        estimated_taxes_in_usd ? estimated_taxes_in_usd->valuedouble : 0,
        custom_tax_description && !cJSON_IsNull(custom_tax_description) ? strdup(custom_tax_description->valuestring) : NULL,
        disable_default_policies ? disable_default_policies->valueint : 0,
        estimated_profit_in_usd ? estimated_profit_in_usd->valuedouble : 0,
        display_on_category_mozaic ? display_on_category_mozaic->valueint : 0,
        official_description_url && !cJSON_IsNull(official_description_url) ? strdup(official_description_url->valuestring) : NULL,
        energy_efficiency_rating && !cJSON_IsNull(energy_efficiency_rating) ? strdup(energy_efficiency_rating->valuestring) : NULL,
        page_cover_background_url && !cJSON_IsNull(page_cover_background_url) ? strdup(page_cover_background_url->valuestring) : NULL,
        estimated_base_price_in_usd ? estimated_base_price_in_usd->valuedouble : 0,
        estimated_discounts_in_usd ? estimated_discounts_in_usd->valuedouble : 0,
        operating_system_supported && !cJSON_IsNull(operating_system_supported) ? strdup(operating_system_supported->valuestring) : NULL,
        estimated_surcharges_in_usd ? estimated_surcharges_in_usd->valuedouble : 0,
        deadline_discount_due_date && !cJSON_IsNull(deadline_discount_due_date) ? strdup(deadline_discount_due_date->valuestring) : NULL,
        deadline_discount_from_date && !cJSON_IsNull(deadline_discount_from_date) ? strdup(deadline_discount_from_date->valuestring) : NULL,
        estimated_regular_price_in_usd ? estimated_regular_price_in_usd->valuedouble : 0,
        estimated_tax_base_price_in_usd ? estimated_tax_base_price_in_usd->valuedouble : 0,
        display_on_banner_marketing_rotation ? display_on_banner_marketing_rotation->valueint : 0,
        last_fixed_prices_update_date_time && !cJSON_IsNull(last_fixed_prices_update_date_time) ? strdup(last_fixed_prices_update_date_time->valuestring) : NULL,
        estimated_witholding_taxes_in_usd ? estimated_witholding_taxes_in_usd->valuedouble : 0,
        estimated_payment_cost_in_usd ? estimated_payment_cost_in_usd->valuedouble : 0,
        estimated_payment_tax_in_usd ? estimated_payment_tax_in_usd->valuedouble : 0,
        estimated_default_shipping_cost_in_usd ? estimated_default_shipping_cost_in_usd->valuedouble : 0,
        estimated_default_shipping_tax_in_usd ? estimated_default_shipping_tax_in_usd->valuedouble : 0,
        estimated_total_price_in_usd ? estimated_total_price_in_usd->valuedouble : 0,
        recently_viewed_record_id && !cJSON_IsNull(recently_viewed_record_id) ? strdup(recently_viewed_record_id->valuestring) : NULL,
        display_description_editor ? display_description_editor->valueint : 0,
        primary_google_category_id && !cJSON_IsNull(primary_google_category_id) ? strdup(primary_google_category_id->valuestring) : NULL,
        supported_operating_system && !cJSON_IsNull(supported_operating_system) ? strdup(supported_operating_system->valuestring) : NULL,
        estimated_deal_savings_in_usd ? estimated_deal_savings_in_usd->valuedouble : 0,
        primary_google_category_name && !cJSON_IsNull(primary_google_category_name) ? strdup(primary_google_category_name->valuestring) : NULL,
        display_short_description_editor ? display_short_description_editor->valueint : 0,
        estimated_withholding_taxes_in_usd ? estimated_withholding_taxes_in_usd->valuedouble : 0,
        selected_tags ? selected_tagsList : NULL,
        selected_types ? selected_typesList : NULL,
        selected_brands ? selected_brandsList : NULL,
        selected_categories ? selected_categoriesList : NULL,
        selected_tax_policies ? selected_tax_policiesList : NULL,
        selected_pricing_rules ? selected_pricing_rulesList : NULL,
        selected_refund_policies ? selected_refund_policiesList : NULL,
        selected_return_policies ? selected_return_policiesList : NULL,
        selected_pricing_policies ? selected_pricing_policiesList : NULL,
        selected_google_categories ? selected_google_categoriesList : NULL,
        selected_warranty_policies ? selected_warranty_policiesList : NULL,
        selected_shipment_policies ? selected_shipment_policiesList : NULL,
        selected_attributes_options ? selected_attributes_optionsList : NULL,
        selected_selling_margin_policies ? selected_selling_margin_policiesList : NULL
        );

    return catalog_item_update_dto_local_var;
end:
    if (imagesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, imagesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(imagesList);
        imagesList = NULL;
    }
    if (variationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, variationsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(variationsList);
        variationsList = NULL;
    }
    if (selected_tagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, selected_tagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(selected_tagsList);
        selected_tagsList = NULL;
    }
    if (selected_typesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, selected_typesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(selected_typesList);
        selected_typesList = NULL;
    }
    if (selected_brandsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, selected_brandsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(selected_brandsList);
        selected_brandsList = NULL;
    }
    if (selected_categoriesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, selected_categoriesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(selected_categoriesList);
        selected_categoriesList = NULL;
    }
    if (selected_tax_policiesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, selected_tax_policiesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(selected_tax_policiesList);
        selected_tax_policiesList = NULL;
    }
    if (selected_pricing_rulesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, selected_pricing_rulesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(selected_pricing_rulesList);
        selected_pricing_rulesList = NULL;
    }
    if (selected_refund_policiesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, selected_refund_policiesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(selected_refund_policiesList);
        selected_refund_policiesList = NULL;
    }
    if (selected_return_policiesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, selected_return_policiesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(selected_return_policiesList);
        selected_return_policiesList = NULL;
    }
    if (selected_pricing_policiesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, selected_pricing_policiesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(selected_pricing_policiesList);
        selected_pricing_policiesList = NULL;
    }
    if (selected_google_categoriesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, selected_google_categoriesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(selected_google_categoriesList);
        selected_google_categoriesList = NULL;
    }
    if (selected_warranty_policiesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, selected_warranty_policiesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(selected_warranty_policiesList);
        selected_warranty_policiesList = NULL;
    }
    if (selected_shipment_policiesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, selected_shipment_policiesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(selected_shipment_policiesList);
        selected_shipment_policiesList = NULL;
    }
    if (selected_attributes_optionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, selected_attributes_optionsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(selected_attributes_optionsList);
        selected_attributes_optionsList = NULL;
    }
    if (selected_selling_margin_policiesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, selected_selling_margin_policiesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(selected_selling_margin_policiesList);
        selected_selling_margin_policiesList = NULL;
    }
    return NULL;

}
