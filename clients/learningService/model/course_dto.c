#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_dto.h"



course_dto_t *course_dto_create(
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
    list_t *selected_selling_margin_policies
    ) {
    course_dto_t *course_dto_local_var = malloc(sizeof(course_dto_t));
    if (!course_dto_local_var) {
        return NULL;
    }
    course_dto_local_var->id = id;
    course_dto_local_var->timestamp = timestamp;
    course_dto_local_var->sku = sku;
    course_dto_local_var->upc = upc;
    course_dto_local_var->ean = ean;
    course_dto_local_var->mpn = mpn;
    course_dto_local_var->sk_us = sk_us;
    course_dto_local_var->isbn = isbn;
    course_dto_local_var->up_cs = up_cs;
    course_dto_local_var->ea_ns = ea_ns;
    course_dto_local_var->asin = asin;
    course_dto_local_var->gtin = gtin;
    course_dto_local_var->mp_ns = mp_ns;
    course_dto_local_var->part = part;
    course_dto_local_var->name = name;
    course_dto_local_var->isb_ns = isb_ns;
    course_dto_local_var->asi_ns = asi_ns;
    course_dto_local_var->gti_ns = gti_ns;
    course_dto_local_var->model = model;
    course_dto_local_var->title = title;
    course_dto_local_var->color = color;
    course_dto_local_var->isb_n13 = isb_n13;
    course_dto_local_var->unspsc = unspsc;
    course_dto_local_var->unit_id = unit_id;
    course_dto_local_var->series = series;
    course_dto_local_var->barcode = barcode;
    course_dto_local_var->unsps_cs = unsps_cs;
    course_dto_local_var->pattern = pattern;
    course_dto_local_var->summary = summary;
    course_dto_local_var->brand_id = brand_id;
    course_dto_local_var->features = features;
    course_dto_local_var->material = material;
    course_dto_local_var->tenant_id = tenant_id;
    course_dto_local_var->permalink = permalink;
    course_dto_local_var->brand_name = brand_name;
    course_dto_local_var->language_id = language_id;
    course_dto_local_var->item_type_id = item_type_id;
    course_dto_local_var->category_id = category_id;
    course_dto_local_var->currency_id = currency_id;
    course_dto_local_var->unit_group_id = unit_group_id;
    course_dto_local_var->description = description;
    course_dto_local_var->ingredients = ingredients;
    course_dto_local_var->release_date = release_date;
    course_dto_local_var->enrollment_id = enrollment_id;
    course_dto_local_var->supplier_code = supplier_code;
    course_dto_local_var->ships_to_rules = ships_to_rules;
    course_dto_local_var->purchase_note = purchase_note;
    course_dto_local_var->parent_item_id = parent_item_id;
    course_dto_local_var->item_type_name = item_type_name;
    course_dto_local_var->discriminator = discriminator;
    course_dto_local_var->tariff_heading = tariff_heading;
    course_dto_local_var->nutrition_facts = nutrition_facts;
    course_dto_local_var->mozaic_cover_url = mozaic_cover_url;
    course_dto_local_var->package_content = package_content;
    course_dto_local_var->youtube_video_id = youtube_video_id;
    course_dto_local_var->primary_image_url = primary_image_url;
    course_dto_local_var->long_description = long_description;
    course_dto_local_var->measurement_unit = measurement_unit;
    course_dto_local_var->short_description = short_description;
    course_dto_local_var->google_categories = google_categories;
    course_dto_local_var->supplier_profile_id = supplier_profile_id;
    course_dto_local_var->shipping_country_id = shipping_country_id;
    course_dto_local_var->system_requirements = system_requirements;
    course_dto_local_var->custom_tax_description = custom_tax_description;
    course_dto_local_var->official_description_url = official_description_url;
    course_dto_local_var->energy_efficiency_rating = energy_efficiency_rating;
    course_dto_local_var->page_cover_background_url = page_cover_background_url;
    course_dto_local_var->primary_google_category_id = primary_google_category_id;
    course_dto_local_var->operating_system_supported = operating_system_supported;
    course_dto_local_var->supported_operating_system = supported_operating_system;
    course_dto_local_var->primary_google_category_name = primary_google_category_name;
    course_dto_local_var->hot = hot;
    course_dto_local_var->on_sale = on_sale;
    course_dto_local_var->auction = auction;
    course_dto_local_var->deleted = deleted;
    course_dto_local_var->digital = digital;
    course_dto_local_var->pre_sale = pre_sale;
    course_dto_local_var->taxable = taxable;
    course_dto_local_var->in_stock = in_stock;
    course_dto_local_var->featured = featured;
    course_dto_local_var->trending = trending;
    course_dto_local_var->low_stock = low_stock;
    course_dto_local_var->published = published;
    course_dto_local_var->by_request = by_request;
    course_dto_local_var->on_discount = on_discount;
    course_dto_local_var->is_daily_deal = is_daily_deal;
    course_dto_local_var->is_new_arrival = is_new_arrival;
    course_dto_local_var->is_weekly_deal = is_weekly_deal;
    course_dto_local_var->is_best_seller = is_best_seller;
    course_dto_local_var->is_monthly_deal = is_monthly_deal;
    course_dto_local_var->has_variations = has_variations;
    course_dto_local_var->is_fixed_discount = is_fixed_discount;
    course_dto_local_var->is_dealers_choice = is_dealers_choice;
    course_dto_local_var->manage_inventory = manage_inventory;
    course_dto_local_var->is_official_choice = is_official_choice;
    course_dto_local_var->valid_primary_image = valid_primary_image;
    course_dto_local_var->is_deadline_discount = is_deadline_discount;
    course_dto_local_var->display_showcase_tab = display_showcase_tab;
    course_dto_local_var->tax_included_in_price = tax_included_in_price;
    course_dto_local_var->is_product_of_the_week = is_product_of_the_week;
    course_dto_local_var->is_product_of_the_month = is_product_of_the_month;
    course_dto_local_var->is_percentage_discount = is_percentage_discount;
    course_dto_local_var->display_on_global_mozaic = display_on_global_mozaic;
    course_dto_local_var->display_on_brands_mozaic = display_on_brands_mozaic;
    course_dto_local_var->disable_default_policies = disable_default_policies;
    course_dto_local_var->display_on_category_mozaic = display_on_category_mozaic;
    course_dto_local_var->display_description_editor = display_description_editor;
    course_dto_local_var->display_short_description_editor = display_short_description_editor;
    course_dto_local_var->display_on_banner_marketing_rotation = display_on_banner_marketing_rotation;
    course_dto_local_var->auction_end = auction_end;
    course_dto_local_var->auction_start = auction_start;
    course_dto_local_var->published_date = published_date;
    course_dto_local_var->deadline_discount_from_date = deadline_discount_from_date;
    course_dto_local_var->deadline_discount_due_date = deadline_discount_due_date;
    course_dto_local_var->last_fixed_prices_update_date_time = last_fixed_prices_update_date_time;
    course_dto_local_var->images = images;
    course_dto_local_var->views_count = views_count;
    course_dto_local_var->reviews_count = reviews_count;
    course_dto_local_var->questions_count = questions_count;
    course_dto_local_var->packaged_quantity = packaged_quantity;
    course_dto_local_var->reviews_avg = reviews_avg;
    course_dto_local_var->recurrency = recurrency;
    course_dto_local_var->current_stock = current_stock;
    course_dto_local_var->width = width;
    course_dto_local_var->weight = weight;
    course_dto_local_var->length = length;
    course_dto_local_var->height = height;
    course_dto_local_var->regular_price = regular_price;
    course_dto_local_var->discount_price = discount_price;
    course_dto_local_var->custom_tax_value = custom_tax_value;
    course_dto_local_var->discount_amount = discount_amount;
    course_dto_local_var->in_cart_quantity = in_cart_quantity;
    course_dto_local_var->custom_tax_amount = custom_tax_amount;
    course_dto_local_var->discount_percentage = discount_percentage;
    course_dto_local_var->custom_tax_percentage = custom_tax_percentage;
    course_dto_local_var->estimated_taxes_in_usd = estimated_taxes_in_usd;
    course_dto_local_var->estimated_profit_in_usd = estimated_profit_in_usd;
    course_dto_local_var->estimated_base_price_in_usd = estimated_base_price_in_usd;
    course_dto_local_var->estimated_discounts_in_usd = estimated_discounts_in_usd;
    course_dto_local_var->estimated_surcharges_in_usd = estimated_surcharges_in_usd;
    course_dto_local_var->estimated_payment_tax_in_usd = estimated_payment_tax_in_usd;
    course_dto_local_var->estimated_total_price_in_usd = estimated_total_price_in_usd;
    course_dto_local_var->estimated_payment_cost_in_usd = estimated_payment_cost_in_usd;
    course_dto_local_var->estimated_deal_savings_in_usd = estimated_deal_savings_in_usd;
    course_dto_local_var->estimated_regular_price_in_usd = estimated_regular_price_in_usd;
    course_dto_local_var->estimated_tax_base_price_in_usd = estimated_tax_base_price_in_usd;
    course_dto_local_var->estimated_withholding_taxes_in_usd = estimated_withholding_taxes_in_usd;
    course_dto_local_var->estimated_default_shipping_tax_in_usd = estimated_default_shipping_tax_in_usd;
    course_dto_local_var->estimated_default_shipping_cost_in_usd = estimated_default_shipping_cost_in_usd;
    course_dto_local_var->selected_tags = selected_tags;
    course_dto_local_var->selected_types = selected_types;
    course_dto_local_var->selected_brands = selected_brands;
    course_dto_local_var->selected_categories = selected_categories;
    course_dto_local_var->selected_tax_policies = selected_tax_policies;
    course_dto_local_var->selected_pricing_rules = selected_pricing_rules;
    course_dto_local_var->selected_refund_policies = selected_refund_policies;
    course_dto_local_var->selected_return_policies = selected_return_policies;
    course_dto_local_var->selected_pricing_policies = selected_pricing_policies;
    course_dto_local_var->selected_google_categories = selected_google_categories;
    course_dto_local_var->selected_warranty_policies = selected_warranty_policies;
    course_dto_local_var->selected_shipment_policies = selected_shipment_policies;
    course_dto_local_var->selected_attributes_options = selected_attributes_options;
    course_dto_local_var->selected_selling_margin_policies = selected_selling_margin_policies;

    return course_dto_local_var;
}


void course_dto_free(course_dto_t *course_dto) {
    if(NULL == course_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_dto->id) {
        free(course_dto->id);
        course_dto->id = NULL;
    }
    if (course_dto->timestamp) {
        free(course_dto->timestamp);
        course_dto->timestamp = NULL;
    }
    if (course_dto->sku) {
        free(course_dto->sku);
        course_dto->sku = NULL;
    }
    if (course_dto->upc) {
        free(course_dto->upc);
        course_dto->upc = NULL;
    }
    if (course_dto->ean) {
        free(course_dto->ean);
        course_dto->ean = NULL;
    }
    if (course_dto->mpn) {
        free(course_dto->mpn);
        course_dto->mpn = NULL;
    }
    if (course_dto->sk_us) {
        free(course_dto->sk_us);
        course_dto->sk_us = NULL;
    }
    if (course_dto->isbn) {
        free(course_dto->isbn);
        course_dto->isbn = NULL;
    }
    if (course_dto->up_cs) {
        free(course_dto->up_cs);
        course_dto->up_cs = NULL;
    }
    if (course_dto->ea_ns) {
        free(course_dto->ea_ns);
        course_dto->ea_ns = NULL;
    }
    if (course_dto->asin) {
        free(course_dto->asin);
        course_dto->asin = NULL;
    }
    if (course_dto->gtin) {
        free(course_dto->gtin);
        course_dto->gtin = NULL;
    }
    if (course_dto->mp_ns) {
        free(course_dto->mp_ns);
        course_dto->mp_ns = NULL;
    }
    if (course_dto->part) {
        free(course_dto->part);
        course_dto->part = NULL;
    }
    if (course_dto->name) {
        free(course_dto->name);
        course_dto->name = NULL;
    }
    if (course_dto->isb_ns) {
        free(course_dto->isb_ns);
        course_dto->isb_ns = NULL;
    }
    if (course_dto->asi_ns) {
        free(course_dto->asi_ns);
        course_dto->asi_ns = NULL;
    }
    if (course_dto->gti_ns) {
        free(course_dto->gti_ns);
        course_dto->gti_ns = NULL;
    }
    if (course_dto->model) {
        free(course_dto->model);
        course_dto->model = NULL;
    }
    if (course_dto->title) {
        free(course_dto->title);
        course_dto->title = NULL;
    }
    if (course_dto->color) {
        free(course_dto->color);
        course_dto->color = NULL;
    }
    if (course_dto->isb_n13) {
        free(course_dto->isb_n13);
        course_dto->isb_n13 = NULL;
    }
    if (course_dto->unspsc) {
        free(course_dto->unspsc);
        course_dto->unspsc = NULL;
    }
    if (course_dto->unit_id) {
        free(course_dto->unit_id);
        course_dto->unit_id = NULL;
    }
    if (course_dto->series) {
        free(course_dto->series);
        course_dto->series = NULL;
    }
    if (course_dto->barcode) {
        free(course_dto->barcode);
        course_dto->barcode = NULL;
    }
    if (course_dto->unsps_cs) {
        free(course_dto->unsps_cs);
        course_dto->unsps_cs = NULL;
    }
    if (course_dto->pattern) {
        free(course_dto->pattern);
        course_dto->pattern = NULL;
    }
    if (course_dto->summary) {
        free(course_dto->summary);
        course_dto->summary = NULL;
    }
    if (course_dto->brand_id) {
        free(course_dto->brand_id);
        course_dto->brand_id = NULL;
    }
    if (course_dto->features) {
        free(course_dto->features);
        course_dto->features = NULL;
    }
    if (course_dto->material) {
        free(course_dto->material);
        course_dto->material = NULL;
    }
    if (course_dto->tenant_id) {
        free(course_dto->tenant_id);
        course_dto->tenant_id = NULL;
    }
    if (course_dto->permalink) {
        free(course_dto->permalink);
        course_dto->permalink = NULL;
    }
    if (course_dto->brand_name) {
        free(course_dto->brand_name);
        course_dto->brand_name = NULL;
    }
    if (course_dto->language_id) {
        free(course_dto->language_id);
        course_dto->language_id = NULL;
    }
    if (course_dto->item_type_id) {
        free(course_dto->item_type_id);
        course_dto->item_type_id = NULL;
    }
    if (course_dto->category_id) {
        free(course_dto->category_id);
        course_dto->category_id = NULL;
    }
    if (course_dto->currency_id) {
        free(course_dto->currency_id);
        course_dto->currency_id = NULL;
    }
    if (course_dto->unit_group_id) {
        free(course_dto->unit_group_id);
        course_dto->unit_group_id = NULL;
    }
    if (course_dto->description) {
        free(course_dto->description);
        course_dto->description = NULL;
    }
    if (course_dto->ingredients) {
        free(course_dto->ingredients);
        course_dto->ingredients = NULL;
    }
    if (course_dto->release_date) {
        free(course_dto->release_date);
        course_dto->release_date = NULL;
    }
    if (course_dto->enrollment_id) {
        free(course_dto->enrollment_id);
        course_dto->enrollment_id = NULL;
    }
    if (course_dto->supplier_code) {
        free(course_dto->supplier_code);
        course_dto->supplier_code = NULL;
    }
    if (course_dto->ships_to_rules) {
        free(course_dto->ships_to_rules);
        course_dto->ships_to_rules = NULL;
    }
    if (course_dto->purchase_note) {
        free(course_dto->purchase_note);
        course_dto->purchase_note = NULL;
    }
    if (course_dto->parent_item_id) {
        free(course_dto->parent_item_id);
        course_dto->parent_item_id = NULL;
    }
    if (course_dto->item_type_name) {
        free(course_dto->item_type_name);
        course_dto->item_type_name = NULL;
    }
    if (course_dto->discriminator) {
        free(course_dto->discriminator);
        course_dto->discriminator = NULL;
    }
    if (course_dto->tariff_heading) {
        free(course_dto->tariff_heading);
        course_dto->tariff_heading = NULL;
    }
    if (course_dto->nutrition_facts) {
        free(course_dto->nutrition_facts);
        course_dto->nutrition_facts = NULL;
    }
    if (course_dto->mozaic_cover_url) {
        free(course_dto->mozaic_cover_url);
        course_dto->mozaic_cover_url = NULL;
    }
    if (course_dto->package_content) {
        free(course_dto->package_content);
        course_dto->package_content = NULL;
    }
    if (course_dto->youtube_video_id) {
        free(course_dto->youtube_video_id);
        course_dto->youtube_video_id = NULL;
    }
    if (course_dto->primary_image_url) {
        free(course_dto->primary_image_url);
        course_dto->primary_image_url = NULL;
    }
    if (course_dto->long_description) {
        free(course_dto->long_description);
        course_dto->long_description = NULL;
    }
    if (course_dto->measurement_unit) {
        free(course_dto->measurement_unit);
        course_dto->measurement_unit = NULL;
    }
    if (course_dto->short_description) {
        free(course_dto->short_description);
        course_dto->short_description = NULL;
    }
    if (course_dto->google_categories) {
        free(course_dto->google_categories);
        course_dto->google_categories = NULL;
    }
    if (course_dto->supplier_profile_id) {
        free(course_dto->supplier_profile_id);
        course_dto->supplier_profile_id = NULL;
    }
    if (course_dto->shipping_country_id) {
        free(course_dto->shipping_country_id);
        course_dto->shipping_country_id = NULL;
    }
    if (course_dto->system_requirements) {
        free(course_dto->system_requirements);
        course_dto->system_requirements = NULL;
    }
    if (course_dto->custom_tax_description) {
        free(course_dto->custom_tax_description);
        course_dto->custom_tax_description = NULL;
    }
    if (course_dto->official_description_url) {
        free(course_dto->official_description_url);
        course_dto->official_description_url = NULL;
    }
    if (course_dto->energy_efficiency_rating) {
        free(course_dto->energy_efficiency_rating);
        course_dto->energy_efficiency_rating = NULL;
    }
    if (course_dto->page_cover_background_url) {
        free(course_dto->page_cover_background_url);
        course_dto->page_cover_background_url = NULL;
    }
    if (course_dto->primary_google_category_id) {
        free(course_dto->primary_google_category_id);
        course_dto->primary_google_category_id = NULL;
    }
    if (course_dto->operating_system_supported) {
        free(course_dto->operating_system_supported);
        course_dto->operating_system_supported = NULL;
    }
    if (course_dto->supported_operating_system) {
        free(course_dto->supported_operating_system);
        course_dto->supported_operating_system = NULL;
    }
    if (course_dto->primary_google_category_name) {
        free(course_dto->primary_google_category_name);
        course_dto->primary_google_category_name = NULL;
    }
    if (course_dto->auction_end) {
        free(course_dto->auction_end);
        course_dto->auction_end = NULL;
    }
    if (course_dto->auction_start) {
        free(course_dto->auction_start);
        course_dto->auction_start = NULL;
    }
    if (course_dto->published_date) {
        free(course_dto->published_date);
        course_dto->published_date = NULL;
    }
    if (course_dto->deadline_discount_from_date) {
        free(course_dto->deadline_discount_from_date);
        course_dto->deadline_discount_from_date = NULL;
    }
    if (course_dto->deadline_discount_due_date) {
        free(course_dto->deadline_discount_due_date);
        course_dto->deadline_discount_due_date = NULL;
    }
    if (course_dto->last_fixed_prices_update_date_time) {
        free(course_dto->last_fixed_prices_update_date_time);
        course_dto->last_fixed_prices_update_date_time = NULL;
    }
    if (course_dto->images) {
        list_ForEach(listEntry, course_dto->images) {
            free(listEntry->data);
        }
        list_freeList(course_dto->images);
        course_dto->images = NULL;
    }
    if (course_dto->selected_tags) {
        list_ForEach(listEntry, course_dto->selected_tags) {
            free(listEntry->data);
        }
        list_freeList(course_dto->selected_tags);
        course_dto->selected_tags = NULL;
    }
    if (course_dto->selected_types) {
        list_ForEach(listEntry, course_dto->selected_types) {
            free(listEntry->data);
        }
        list_freeList(course_dto->selected_types);
        course_dto->selected_types = NULL;
    }
    if (course_dto->selected_brands) {
        list_ForEach(listEntry, course_dto->selected_brands) {
            free(listEntry->data);
        }
        list_freeList(course_dto->selected_brands);
        course_dto->selected_brands = NULL;
    }
    if (course_dto->selected_categories) {
        list_ForEach(listEntry, course_dto->selected_categories) {
            free(listEntry->data);
        }
        list_freeList(course_dto->selected_categories);
        course_dto->selected_categories = NULL;
    }
    if (course_dto->selected_tax_policies) {
        list_ForEach(listEntry, course_dto->selected_tax_policies) {
            free(listEntry->data);
        }
        list_freeList(course_dto->selected_tax_policies);
        course_dto->selected_tax_policies = NULL;
    }
    if (course_dto->selected_pricing_rules) {
        list_ForEach(listEntry, course_dto->selected_pricing_rules) {
            free(listEntry->data);
        }
        list_freeList(course_dto->selected_pricing_rules);
        course_dto->selected_pricing_rules = NULL;
    }
    if (course_dto->selected_refund_policies) {
        list_ForEach(listEntry, course_dto->selected_refund_policies) {
            free(listEntry->data);
        }
        list_freeList(course_dto->selected_refund_policies);
        course_dto->selected_refund_policies = NULL;
    }
    if (course_dto->selected_return_policies) {
        list_ForEach(listEntry, course_dto->selected_return_policies) {
            free(listEntry->data);
        }
        list_freeList(course_dto->selected_return_policies);
        course_dto->selected_return_policies = NULL;
    }
    if (course_dto->selected_pricing_policies) {
        list_ForEach(listEntry, course_dto->selected_pricing_policies) {
            free(listEntry->data);
        }
        list_freeList(course_dto->selected_pricing_policies);
        course_dto->selected_pricing_policies = NULL;
    }
    if (course_dto->selected_google_categories) {
        list_ForEach(listEntry, course_dto->selected_google_categories) {
            free(listEntry->data);
        }
        list_freeList(course_dto->selected_google_categories);
        course_dto->selected_google_categories = NULL;
    }
    if (course_dto->selected_warranty_policies) {
        list_ForEach(listEntry, course_dto->selected_warranty_policies) {
            free(listEntry->data);
        }
        list_freeList(course_dto->selected_warranty_policies);
        course_dto->selected_warranty_policies = NULL;
    }
    if (course_dto->selected_shipment_policies) {
        list_ForEach(listEntry, course_dto->selected_shipment_policies) {
            free(listEntry->data);
        }
        list_freeList(course_dto->selected_shipment_policies);
        course_dto->selected_shipment_policies = NULL;
    }
    if (course_dto->selected_attributes_options) {
        list_ForEach(listEntry, course_dto->selected_attributes_options) {
            free(listEntry->data);
        }
        list_freeList(course_dto->selected_attributes_options);
        course_dto->selected_attributes_options = NULL;
    }
    if (course_dto->selected_selling_margin_policies) {
        list_ForEach(listEntry, course_dto->selected_selling_margin_policies) {
            free(listEntry->data);
        }
        list_freeList(course_dto->selected_selling_margin_policies);
        course_dto->selected_selling_margin_policies = NULL;
    }
    free(course_dto);
}

cJSON *course_dto_convertToJSON(course_dto_t *course_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_dto->id
    if(course_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->timestamp
    if(course_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_dto->sku
    if(course_dto->sku) {
    if(cJSON_AddStringToObject(item, "sku", course_dto->sku) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->upc
    if(course_dto->upc) {
    if(cJSON_AddStringToObject(item, "upc", course_dto->upc) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->ean
    if(course_dto->ean) {
    if(cJSON_AddStringToObject(item, "ean", course_dto->ean) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->mpn
    if(course_dto->mpn) {
    if(cJSON_AddStringToObject(item, "mpn", course_dto->mpn) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->sk_us
    if(course_dto->sk_us) {
    if(cJSON_AddStringToObject(item, "skUs", course_dto->sk_us) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->isbn
    if(course_dto->isbn) {
    if(cJSON_AddStringToObject(item, "isbn", course_dto->isbn) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->up_cs
    if(course_dto->up_cs) {
    if(cJSON_AddStringToObject(item, "upCs", course_dto->up_cs) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->ea_ns
    if(course_dto->ea_ns) {
    if(cJSON_AddStringToObject(item, "eaNs", course_dto->ea_ns) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->asin
    if(course_dto->asin) {
    if(cJSON_AddStringToObject(item, "asin", course_dto->asin) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->gtin
    if(course_dto->gtin) {
    if(cJSON_AddStringToObject(item, "gtin", course_dto->gtin) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->mp_ns
    if(course_dto->mp_ns) {
    if(cJSON_AddStringToObject(item, "mpNs", course_dto->mp_ns) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->part
    if(course_dto->part) {
    if(cJSON_AddStringToObject(item, "part", course_dto->part) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->name
    if(course_dto->name) {
    if(cJSON_AddStringToObject(item, "name", course_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->isb_ns
    if(course_dto->isb_ns) {
    if(cJSON_AddStringToObject(item, "isbNs", course_dto->isb_ns) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->asi_ns
    if(course_dto->asi_ns) {
    if(cJSON_AddStringToObject(item, "asiNs", course_dto->asi_ns) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->gti_ns
    if(course_dto->gti_ns) {
    if(cJSON_AddStringToObject(item, "gtiNs", course_dto->gti_ns) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->model
    if(course_dto->model) {
    if(cJSON_AddStringToObject(item, "model", course_dto->model) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->title
    if(course_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->color
    if(course_dto->color) {
    if(cJSON_AddStringToObject(item, "color", course_dto->color) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->isb_n13
    if(course_dto->isb_n13) {
    if(cJSON_AddStringToObject(item, "isbN13", course_dto->isb_n13) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->unspsc
    if(course_dto->unspsc) {
    if(cJSON_AddStringToObject(item, "unspsc", course_dto->unspsc) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->unit_id
    if(course_dto->unit_id) {
    if(cJSON_AddStringToObject(item, "unitId", course_dto->unit_id) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->series
    if(course_dto->series) {
    if(cJSON_AddStringToObject(item, "series", course_dto->series) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->barcode
    if(course_dto->barcode) {
    if(cJSON_AddStringToObject(item, "barcode", course_dto->barcode) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->unsps_cs
    if(course_dto->unsps_cs) {
    if(cJSON_AddStringToObject(item, "unspsCs", course_dto->unsps_cs) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->pattern
    if(course_dto->pattern) {
    if(cJSON_AddStringToObject(item, "pattern", course_dto->pattern) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->summary
    if(course_dto->summary) {
    if(cJSON_AddStringToObject(item, "summary", course_dto->summary) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->brand_id
    if(course_dto->brand_id) {
    if(cJSON_AddStringToObject(item, "brandId", course_dto->brand_id) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->features
    if(course_dto->features) {
    if(cJSON_AddStringToObject(item, "features", course_dto->features) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->material
    if(course_dto->material) {
    if(cJSON_AddStringToObject(item, "material", course_dto->material) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->tenant_id
    if(course_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", course_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->permalink
    if(course_dto->permalink) {
    if(cJSON_AddStringToObject(item, "permalink", course_dto->permalink) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->brand_name
    if(course_dto->brand_name) {
    if(cJSON_AddStringToObject(item, "brandName", course_dto->brand_name) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->language_id
    if(course_dto->language_id) {
    if(cJSON_AddStringToObject(item, "languageId", course_dto->language_id) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->item_type_id
    if(course_dto->item_type_id) {
    if(cJSON_AddStringToObject(item, "itemTypeId", course_dto->item_type_id) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->category_id
    if(course_dto->category_id) {
    if(cJSON_AddStringToObject(item, "categoryId", course_dto->category_id) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->currency_id
    if(course_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", course_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->unit_group_id
    if(course_dto->unit_group_id) {
    if(cJSON_AddStringToObject(item, "unitGroupId", course_dto->unit_group_id) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->description
    if(course_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->ingredients
    if(course_dto->ingredients) {
    if(cJSON_AddStringToObject(item, "ingredients", course_dto->ingredients) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->release_date
    if(course_dto->release_date) {
    if(cJSON_AddStringToObject(item, "releaseDate", course_dto->release_date) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->enrollment_id
    if(course_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", course_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->supplier_code
    if(course_dto->supplier_code) {
    if(cJSON_AddStringToObject(item, "supplierCode", course_dto->supplier_code) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->ships_to_rules
    if(course_dto->ships_to_rules) {
    if(cJSON_AddStringToObject(item, "shipsToRules", course_dto->ships_to_rules) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->purchase_note
    if(course_dto->purchase_note) {
    if(cJSON_AddStringToObject(item, "purchaseNote", course_dto->purchase_note) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->parent_item_id
    if(course_dto->parent_item_id) {
    if(cJSON_AddStringToObject(item, "parentItemId", course_dto->parent_item_id) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->item_type_name
    if(course_dto->item_type_name) {
    if(cJSON_AddStringToObject(item, "itemTypeName", course_dto->item_type_name) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->discriminator
    if(course_dto->discriminator) {
    if(cJSON_AddStringToObject(item, "discriminator", course_dto->discriminator) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->tariff_heading
    if(course_dto->tariff_heading) {
    if(cJSON_AddStringToObject(item, "tariffHeading", course_dto->tariff_heading) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->nutrition_facts
    if(course_dto->nutrition_facts) {
    if(cJSON_AddStringToObject(item, "nutritionFacts", course_dto->nutrition_facts) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->mozaic_cover_url
    if(course_dto->mozaic_cover_url) {
    if(cJSON_AddStringToObject(item, "mozaicCoverUrl", course_dto->mozaic_cover_url) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->package_content
    if(course_dto->package_content) {
    if(cJSON_AddStringToObject(item, "packageContent", course_dto->package_content) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->youtube_video_id
    if(course_dto->youtube_video_id) {
    if(cJSON_AddStringToObject(item, "youtubeVideoId", course_dto->youtube_video_id) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->primary_image_url
    if(course_dto->primary_image_url) {
    if(cJSON_AddStringToObject(item, "primaryImageUrl", course_dto->primary_image_url) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->long_description
    if(course_dto->long_description) {
    if(cJSON_AddStringToObject(item, "longDescription", course_dto->long_description) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->measurement_unit
    if(course_dto->measurement_unit) {
    if(cJSON_AddStringToObject(item, "measurementUnit", course_dto->measurement_unit) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->short_description
    if(course_dto->short_description) {
    if(cJSON_AddStringToObject(item, "shortDescription", course_dto->short_description) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->google_categories
    if(course_dto->google_categories) {
    if(cJSON_AddStringToObject(item, "googleCategories", course_dto->google_categories) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->supplier_profile_id
    if(course_dto->supplier_profile_id) {
    if(cJSON_AddStringToObject(item, "supplierProfileId", course_dto->supplier_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->shipping_country_id
    if(course_dto->shipping_country_id) {
    if(cJSON_AddStringToObject(item, "shippingCountryId", course_dto->shipping_country_id) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->system_requirements
    if(course_dto->system_requirements) {
    if(cJSON_AddStringToObject(item, "systemRequirements", course_dto->system_requirements) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->custom_tax_description
    if(course_dto->custom_tax_description) {
    if(cJSON_AddStringToObject(item, "customTaxDescription", course_dto->custom_tax_description) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->official_description_url
    if(course_dto->official_description_url) {
    if(cJSON_AddStringToObject(item, "officialDescriptionUrl", course_dto->official_description_url) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->energy_efficiency_rating
    if(course_dto->energy_efficiency_rating) {
    if(cJSON_AddStringToObject(item, "energyEfficiencyRating", course_dto->energy_efficiency_rating) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->page_cover_background_url
    if(course_dto->page_cover_background_url) {
    if(cJSON_AddStringToObject(item, "pageCoverBackgroundUrl", course_dto->page_cover_background_url) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->primary_google_category_id
    if(course_dto->primary_google_category_id) {
    if(cJSON_AddStringToObject(item, "primaryGoogleCategoryId", course_dto->primary_google_category_id) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->operating_system_supported
    if(course_dto->operating_system_supported) {
    if(cJSON_AddStringToObject(item, "operatingSystemSupported", course_dto->operating_system_supported) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->supported_operating_system
    if(course_dto->supported_operating_system) {
    if(cJSON_AddStringToObject(item, "supportedOperatingSystem", course_dto->supported_operating_system) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->primary_google_category_name
    if(course_dto->primary_google_category_name) {
    if(cJSON_AddStringToObject(item, "primaryGoogleCategoryName", course_dto->primary_google_category_name) == NULL) {
    goto fail; //String
    }
    }


    // course_dto->hot
    if(course_dto->hot) {
    if(cJSON_AddBoolToObject(item, "hot", course_dto->hot) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->on_sale
    if(course_dto->on_sale) {
    if(cJSON_AddBoolToObject(item, "onSale", course_dto->on_sale) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->auction
    if(course_dto->auction) {
    if(cJSON_AddBoolToObject(item, "auction", course_dto->auction) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->deleted
    if(course_dto->deleted) {
    if(cJSON_AddBoolToObject(item, "deleted", course_dto->deleted) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->digital
    if(course_dto->digital) {
    if(cJSON_AddBoolToObject(item, "digital", course_dto->digital) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->pre_sale
    if(course_dto->pre_sale) {
    if(cJSON_AddBoolToObject(item, "preSale", course_dto->pre_sale) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->taxable
    if(course_dto->taxable) {
    if(cJSON_AddBoolToObject(item, "taxable", course_dto->taxable) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->in_stock
    if(course_dto->in_stock) {
    if(cJSON_AddBoolToObject(item, "inStock", course_dto->in_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->featured
    if(course_dto->featured) {
    if(cJSON_AddBoolToObject(item, "featured", course_dto->featured) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->trending
    if(course_dto->trending) {
    if(cJSON_AddBoolToObject(item, "trending", course_dto->trending) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->low_stock
    if(course_dto->low_stock) {
    if(cJSON_AddBoolToObject(item, "lowStock", course_dto->low_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->published
    if(course_dto->published) {
    if(cJSON_AddBoolToObject(item, "published", course_dto->published) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->by_request
    if(course_dto->by_request) {
    if(cJSON_AddBoolToObject(item, "byRequest", course_dto->by_request) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->on_discount
    if(course_dto->on_discount) {
    if(cJSON_AddBoolToObject(item, "onDiscount", course_dto->on_discount) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->is_daily_deal
    if(course_dto->is_daily_deal) {
    if(cJSON_AddBoolToObject(item, "isDailyDeal", course_dto->is_daily_deal) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->is_new_arrival
    if(course_dto->is_new_arrival) {
    if(cJSON_AddBoolToObject(item, "isNewArrival", course_dto->is_new_arrival) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->is_weekly_deal
    if(course_dto->is_weekly_deal) {
    if(cJSON_AddBoolToObject(item, "isWeeklyDeal", course_dto->is_weekly_deal) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->is_best_seller
    if(course_dto->is_best_seller) {
    if(cJSON_AddBoolToObject(item, "isBestSeller", course_dto->is_best_seller) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->is_monthly_deal
    if(course_dto->is_monthly_deal) {
    if(cJSON_AddBoolToObject(item, "isMonthlyDeal", course_dto->is_monthly_deal) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->has_variations
    if(course_dto->has_variations) {
    if(cJSON_AddBoolToObject(item, "hasVariations", course_dto->has_variations) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->is_fixed_discount
    if(course_dto->is_fixed_discount) {
    if(cJSON_AddBoolToObject(item, "isFixedDiscount", course_dto->is_fixed_discount) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->is_dealers_choice
    if(course_dto->is_dealers_choice) {
    if(cJSON_AddBoolToObject(item, "isDealersChoice", course_dto->is_dealers_choice) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->manage_inventory
    if(course_dto->manage_inventory) {
    if(cJSON_AddBoolToObject(item, "manageInventory", course_dto->manage_inventory) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->is_official_choice
    if(course_dto->is_official_choice) {
    if(cJSON_AddBoolToObject(item, "isOfficialChoice", course_dto->is_official_choice) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->valid_primary_image
    if(course_dto->valid_primary_image) {
    if(cJSON_AddBoolToObject(item, "validPrimaryImage", course_dto->valid_primary_image) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->is_deadline_discount
    if(course_dto->is_deadline_discount) {
    if(cJSON_AddBoolToObject(item, "isDeadlineDiscount", course_dto->is_deadline_discount) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->display_showcase_tab
    if(course_dto->display_showcase_tab) {
    if(cJSON_AddBoolToObject(item, "displayShowcaseTab", course_dto->display_showcase_tab) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->tax_included_in_price
    if(course_dto->tax_included_in_price) {
    if(cJSON_AddBoolToObject(item, "taxIncludedInPrice", course_dto->tax_included_in_price) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->is_product_of_the_week
    if(course_dto->is_product_of_the_week) {
    if(cJSON_AddBoolToObject(item, "isProductOfTheWeek", course_dto->is_product_of_the_week) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->is_product_of_the_month
    if(course_dto->is_product_of_the_month) {
    if(cJSON_AddBoolToObject(item, "isProductOfTheMonth", course_dto->is_product_of_the_month) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->is_percentage_discount
    if(course_dto->is_percentage_discount) {
    if(cJSON_AddBoolToObject(item, "isPercentageDiscount", course_dto->is_percentage_discount) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->display_on_global_mozaic
    if(course_dto->display_on_global_mozaic) {
    if(cJSON_AddBoolToObject(item, "displayOnGlobalMozaic", course_dto->display_on_global_mozaic) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->display_on_brands_mozaic
    if(course_dto->display_on_brands_mozaic) {
    if(cJSON_AddBoolToObject(item, "displayOnBrandsMozaic", course_dto->display_on_brands_mozaic) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->disable_default_policies
    if(course_dto->disable_default_policies) {
    if(cJSON_AddBoolToObject(item, "disableDefaultPolicies", course_dto->disable_default_policies) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->display_on_category_mozaic
    if(course_dto->display_on_category_mozaic) {
    if(cJSON_AddBoolToObject(item, "displayOnCategoryMozaic", course_dto->display_on_category_mozaic) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->display_description_editor
    if(course_dto->display_description_editor) {
    if(cJSON_AddBoolToObject(item, "displayDescriptionEditor", course_dto->display_description_editor) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->display_short_description_editor
    if(course_dto->display_short_description_editor) {
    if(cJSON_AddBoolToObject(item, "displayShortDescriptionEditor", course_dto->display_short_description_editor) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->display_on_banner_marketing_rotation
    if(course_dto->display_on_banner_marketing_rotation) {
    if(cJSON_AddBoolToObject(item, "displayOnBannerMarketingRotation", course_dto->display_on_banner_marketing_rotation) == NULL) {
    goto fail; //Bool
    }
    }


    // course_dto->auction_end
    if(course_dto->auction_end) {
    if(cJSON_AddStringToObject(item, "auctionEnd", course_dto->auction_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_dto->auction_start
    if(course_dto->auction_start) {
    if(cJSON_AddStringToObject(item, "auctionStart", course_dto->auction_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_dto->published_date
    if(course_dto->published_date) {
    if(cJSON_AddStringToObject(item, "publishedDate", course_dto->published_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_dto->deadline_discount_from_date
    if(course_dto->deadline_discount_from_date) {
    if(cJSON_AddStringToObject(item, "deadlineDiscountFromDate", course_dto->deadline_discount_from_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_dto->deadline_discount_due_date
    if(course_dto->deadline_discount_due_date) {
    if(cJSON_AddStringToObject(item, "deadlineDiscountDueDate", course_dto->deadline_discount_due_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_dto->last_fixed_prices_update_date_time
    if(course_dto->last_fixed_prices_update_date_time) {
    if(cJSON_AddStringToObject(item, "lastFixedPricesUpdateDateTime", course_dto->last_fixed_prices_update_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_dto->images
    if(course_dto->images) {
    cJSON *images = cJSON_AddArrayToObject(item, "images");
    if(images == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *imagesListEntry;
    list_ForEach(imagesListEntry, course_dto->images) {
    if(cJSON_AddStringToObject(images, "", (char*)imagesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // course_dto->views_count
    if(course_dto->views_count) {
    if(cJSON_AddNumberToObject(item, "viewsCount", course_dto->views_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->reviews_count
    if(course_dto->reviews_count) {
    if(cJSON_AddNumberToObject(item, "reviewsCount", course_dto->reviews_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->questions_count
    if(course_dto->questions_count) {
    if(cJSON_AddNumberToObject(item, "questionsCount", course_dto->questions_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->packaged_quantity
    if(course_dto->packaged_quantity) {
    if(cJSON_AddNumberToObject(item, "packagedQuantity", course_dto->packaged_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->reviews_avg
    if(course_dto->reviews_avg) {
    if(cJSON_AddNumberToObject(item, "reviewsAvg", course_dto->reviews_avg) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->recurrency
    if(course_dto->recurrency) {
    if(cJSON_AddNumberToObject(item, "recurrency", course_dto->recurrency) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->current_stock
    if(course_dto->current_stock) {
    if(cJSON_AddNumberToObject(item, "currentStock", course_dto->current_stock) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->width
    if(course_dto->width) {
    if(cJSON_AddNumberToObject(item, "width", course_dto->width) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->weight
    if(course_dto->weight) {
    if(cJSON_AddNumberToObject(item, "weight", course_dto->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->length
    if(course_dto->length) {
    if(cJSON_AddNumberToObject(item, "length", course_dto->length) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->height
    if(course_dto->height) {
    if(cJSON_AddNumberToObject(item, "height", course_dto->height) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->regular_price
    if(course_dto->regular_price) {
    if(cJSON_AddNumberToObject(item, "regularPrice", course_dto->regular_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->discount_price
    if(course_dto->discount_price) {
    if(cJSON_AddNumberToObject(item, "discountPrice", course_dto->discount_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->custom_tax_value
    if(course_dto->custom_tax_value) {
    if(cJSON_AddNumberToObject(item, "customTaxValue", course_dto->custom_tax_value) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->discount_amount
    if(course_dto->discount_amount) {
    if(cJSON_AddNumberToObject(item, "discountAmount", course_dto->discount_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->in_cart_quantity
    if(course_dto->in_cart_quantity) {
    if(cJSON_AddNumberToObject(item, "inCartQuantity", course_dto->in_cart_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->custom_tax_amount
    if(course_dto->custom_tax_amount) {
    if(cJSON_AddNumberToObject(item, "customTaxAmount", course_dto->custom_tax_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->discount_percentage
    if(course_dto->discount_percentage) {
    if(cJSON_AddNumberToObject(item, "discountPercentage", course_dto->discount_percentage) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->custom_tax_percentage
    if(course_dto->custom_tax_percentage) {
    if(cJSON_AddNumberToObject(item, "customTaxPercentage", course_dto->custom_tax_percentage) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->estimated_taxes_in_usd
    if(course_dto->estimated_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedTaxesInUsd", course_dto->estimated_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->estimated_profit_in_usd
    if(course_dto->estimated_profit_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedProfitInUsd", course_dto->estimated_profit_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->estimated_base_price_in_usd
    if(course_dto->estimated_base_price_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedBasePriceInUsd", course_dto->estimated_base_price_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->estimated_discounts_in_usd
    if(course_dto->estimated_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedDiscountsInUsd", course_dto->estimated_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->estimated_surcharges_in_usd
    if(course_dto->estimated_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedSurchargesInUsd", course_dto->estimated_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->estimated_payment_tax_in_usd
    if(course_dto->estimated_payment_tax_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedPaymentTaxInUsd", course_dto->estimated_payment_tax_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->estimated_total_price_in_usd
    if(course_dto->estimated_total_price_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedTotalPriceInUsd", course_dto->estimated_total_price_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->estimated_payment_cost_in_usd
    if(course_dto->estimated_payment_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedPaymentCostInUsd", course_dto->estimated_payment_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->estimated_deal_savings_in_usd
    if(course_dto->estimated_deal_savings_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedDealSavingsInUsd", course_dto->estimated_deal_savings_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->estimated_regular_price_in_usd
    if(course_dto->estimated_regular_price_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedRegularPriceInUsd", course_dto->estimated_regular_price_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->estimated_tax_base_price_in_usd
    if(course_dto->estimated_tax_base_price_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedTaxBasePriceInUsd", course_dto->estimated_tax_base_price_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->estimated_withholding_taxes_in_usd
    if(course_dto->estimated_withholding_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedWithholdingTaxesInUsd", course_dto->estimated_withholding_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->estimated_default_shipping_tax_in_usd
    if(course_dto->estimated_default_shipping_tax_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedDefaultShippingTaxInUsd", course_dto->estimated_default_shipping_tax_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->estimated_default_shipping_cost_in_usd
    if(course_dto->estimated_default_shipping_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedDefaultShippingCostInUsd", course_dto->estimated_default_shipping_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_dto->selected_tags
    if(course_dto->selected_tags) {
    cJSON *selected_tags = cJSON_AddArrayToObject(item, "selectedTags");
    if(selected_tags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_tagsListEntry;
    list_ForEach(selected_tagsListEntry, course_dto->selected_tags) {
    if(cJSON_AddStringToObject(selected_tags, "", (char*)selected_tagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // course_dto->selected_types
    if(course_dto->selected_types) {
    cJSON *selected_types = cJSON_AddArrayToObject(item, "selectedTypes");
    if(selected_types == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_typesListEntry;
    list_ForEach(selected_typesListEntry, course_dto->selected_types) {
    if(cJSON_AddStringToObject(selected_types, "", (char*)selected_typesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // course_dto->selected_brands
    if(course_dto->selected_brands) {
    cJSON *selected_brands = cJSON_AddArrayToObject(item, "selectedBrands");
    if(selected_brands == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_brandsListEntry;
    list_ForEach(selected_brandsListEntry, course_dto->selected_brands) {
    if(cJSON_AddStringToObject(selected_brands, "", (char*)selected_brandsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // course_dto->selected_categories
    if(course_dto->selected_categories) {
    cJSON *selected_categories = cJSON_AddArrayToObject(item, "selectedCategories");
    if(selected_categories == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_categoriesListEntry;
    list_ForEach(selected_categoriesListEntry, course_dto->selected_categories) {
    if(cJSON_AddStringToObject(selected_categories, "", (char*)selected_categoriesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // course_dto->selected_tax_policies
    if(course_dto->selected_tax_policies) {
    cJSON *selected_tax_policies = cJSON_AddArrayToObject(item, "selectedTaxPolicies");
    if(selected_tax_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_tax_policiesListEntry;
    list_ForEach(selected_tax_policiesListEntry, course_dto->selected_tax_policies) {
    if(cJSON_AddStringToObject(selected_tax_policies, "", (char*)selected_tax_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // course_dto->selected_pricing_rules
    if(course_dto->selected_pricing_rules) {
    cJSON *selected_pricing_rules = cJSON_AddArrayToObject(item, "selectedPricingRules");
    if(selected_pricing_rules == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_pricing_rulesListEntry;
    list_ForEach(selected_pricing_rulesListEntry, course_dto->selected_pricing_rules) {
    if(cJSON_AddStringToObject(selected_pricing_rules, "", (char*)selected_pricing_rulesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // course_dto->selected_refund_policies
    if(course_dto->selected_refund_policies) {
    cJSON *selected_refund_policies = cJSON_AddArrayToObject(item, "selectedRefundPolicies");
    if(selected_refund_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_refund_policiesListEntry;
    list_ForEach(selected_refund_policiesListEntry, course_dto->selected_refund_policies) {
    if(cJSON_AddStringToObject(selected_refund_policies, "", (char*)selected_refund_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // course_dto->selected_return_policies
    if(course_dto->selected_return_policies) {
    cJSON *selected_return_policies = cJSON_AddArrayToObject(item, "selectedReturnPolicies");
    if(selected_return_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_return_policiesListEntry;
    list_ForEach(selected_return_policiesListEntry, course_dto->selected_return_policies) {
    if(cJSON_AddStringToObject(selected_return_policies, "", (char*)selected_return_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // course_dto->selected_pricing_policies
    if(course_dto->selected_pricing_policies) {
    cJSON *selected_pricing_policies = cJSON_AddArrayToObject(item, "selectedPricingPolicies");
    if(selected_pricing_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_pricing_policiesListEntry;
    list_ForEach(selected_pricing_policiesListEntry, course_dto->selected_pricing_policies) {
    if(cJSON_AddStringToObject(selected_pricing_policies, "", (char*)selected_pricing_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // course_dto->selected_google_categories
    if(course_dto->selected_google_categories) {
    cJSON *selected_google_categories = cJSON_AddArrayToObject(item, "selectedGoogleCategories");
    if(selected_google_categories == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_google_categoriesListEntry;
    list_ForEach(selected_google_categoriesListEntry, course_dto->selected_google_categories) {
    if(cJSON_AddStringToObject(selected_google_categories, "", (char*)selected_google_categoriesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // course_dto->selected_warranty_policies
    if(course_dto->selected_warranty_policies) {
    cJSON *selected_warranty_policies = cJSON_AddArrayToObject(item, "selectedWarrantyPolicies");
    if(selected_warranty_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_warranty_policiesListEntry;
    list_ForEach(selected_warranty_policiesListEntry, course_dto->selected_warranty_policies) {
    if(cJSON_AddStringToObject(selected_warranty_policies, "", (char*)selected_warranty_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // course_dto->selected_shipment_policies
    if(course_dto->selected_shipment_policies) {
    cJSON *selected_shipment_policies = cJSON_AddArrayToObject(item, "selectedShipmentPolicies");
    if(selected_shipment_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_shipment_policiesListEntry;
    list_ForEach(selected_shipment_policiesListEntry, course_dto->selected_shipment_policies) {
    if(cJSON_AddStringToObject(selected_shipment_policies, "", (char*)selected_shipment_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // course_dto->selected_attributes_options
    if(course_dto->selected_attributes_options) {
    cJSON *selected_attributes_options = cJSON_AddArrayToObject(item, "selectedAttributesOptions");
    if(selected_attributes_options == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_attributes_optionsListEntry;
    list_ForEach(selected_attributes_optionsListEntry, course_dto->selected_attributes_options) {
    if(cJSON_AddStringToObject(selected_attributes_options, "", (char*)selected_attributes_optionsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // course_dto->selected_selling_margin_policies
    if(course_dto->selected_selling_margin_policies) {
    cJSON *selected_selling_margin_policies = cJSON_AddArrayToObject(item, "selectedSellingMarginPolicies");
    if(selected_selling_margin_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_selling_margin_policiesListEntry;
    list_ForEach(selected_selling_margin_policiesListEntry, course_dto->selected_selling_margin_policies) {
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

course_dto_t *course_dto_parseFromJSON(cJSON *course_dtoJSON){

    course_dto_t *course_dto_local_var = NULL;

    // define the local list for course_dto->images
    list_t *imagesList = NULL;

    // define the local list for course_dto->selected_tags
    list_t *selected_tagsList = NULL;

    // define the local list for course_dto->selected_types
    list_t *selected_typesList = NULL;

    // define the local list for course_dto->selected_brands
    list_t *selected_brandsList = NULL;

    // define the local list for course_dto->selected_categories
    list_t *selected_categoriesList = NULL;

    // define the local list for course_dto->selected_tax_policies
    list_t *selected_tax_policiesList = NULL;

    // define the local list for course_dto->selected_pricing_rules
    list_t *selected_pricing_rulesList = NULL;

    // define the local list for course_dto->selected_refund_policies
    list_t *selected_refund_policiesList = NULL;

    // define the local list for course_dto->selected_return_policies
    list_t *selected_return_policiesList = NULL;

    // define the local list for course_dto->selected_pricing_policies
    list_t *selected_pricing_policiesList = NULL;

    // define the local list for course_dto->selected_google_categories
    list_t *selected_google_categoriesList = NULL;

    // define the local list for course_dto->selected_warranty_policies
    list_t *selected_warranty_policiesList = NULL;

    // define the local list for course_dto->selected_shipment_policies
    list_t *selected_shipment_policiesList = NULL;

    // define the local list for course_dto->selected_attributes_options
    list_t *selected_attributes_optionsList = NULL;

    // define the local list for course_dto->selected_selling_margin_policies
    list_t *selected_selling_margin_policiesList = NULL;

    // course_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_dto->sku
    cJSON *sku = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "sku");
    if (sku) { 
    if(!cJSON_IsString(sku) && !cJSON_IsNull(sku))
    {
    goto end; //String
    }
    }

    // course_dto->upc
    cJSON *upc = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "upc");
    if (upc) { 
    if(!cJSON_IsString(upc) && !cJSON_IsNull(upc))
    {
    goto end; //String
    }
    }

    // course_dto->ean
    cJSON *ean = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "ean");
    if (ean) { 
    if(!cJSON_IsString(ean) && !cJSON_IsNull(ean))
    {
    goto end; //String
    }
    }

    // course_dto->mpn
    cJSON *mpn = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "mpn");
    if (mpn) { 
    if(!cJSON_IsString(mpn) && !cJSON_IsNull(mpn))
    {
    goto end; //String
    }
    }

    // course_dto->sk_us
    cJSON *sk_us = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "skUs");
    if (sk_us) { 
    if(!cJSON_IsString(sk_us) && !cJSON_IsNull(sk_us))
    {
    goto end; //String
    }
    }

    // course_dto->isbn
    cJSON *isbn = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "isbn");
    if (isbn) { 
    if(!cJSON_IsString(isbn) && !cJSON_IsNull(isbn))
    {
    goto end; //String
    }
    }

    // course_dto->up_cs
    cJSON *up_cs = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "upCs");
    if (up_cs) { 
    if(!cJSON_IsString(up_cs) && !cJSON_IsNull(up_cs))
    {
    goto end; //String
    }
    }

    // course_dto->ea_ns
    cJSON *ea_ns = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "eaNs");
    if (ea_ns) { 
    if(!cJSON_IsString(ea_ns) && !cJSON_IsNull(ea_ns))
    {
    goto end; //String
    }
    }

    // course_dto->asin
    cJSON *asin = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "asin");
    if (asin) { 
    if(!cJSON_IsString(asin) && !cJSON_IsNull(asin))
    {
    goto end; //String
    }
    }

    // course_dto->gtin
    cJSON *gtin = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "gtin");
    if (gtin) { 
    if(!cJSON_IsString(gtin) && !cJSON_IsNull(gtin))
    {
    goto end; //String
    }
    }

    // course_dto->mp_ns
    cJSON *mp_ns = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "mpNs");
    if (mp_ns) { 
    if(!cJSON_IsString(mp_ns) && !cJSON_IsNull(mp_ns))
    {
    goto end; //String
    }
    }

    // course_dto->part
    cJSON *part = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "part");
    if (part) { 
    if(!cJSON_IsString(part) && !cJSON_IsNull(part))
    {
    goto end; //String
    }
    }

    // course_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // course_dto->isb_ns
    cJSON *isb_ns = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "isbNs");
    if (isb_ns) { 
    if(!cJSON_IsString(isb_ns) && !cJSON_IsNull(isb_ns))
    {
    goto end; //String
    }
    }

    // course_dto->asi_ns
    cJSON *asi_ns = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "asiNs");
    if (asi_ns) { 
    if(!cJSON_IsString(asi_ns) && !cJSON_IsNull(asi_ns))
    {
    goto end; //String
    }
    }

    // course_dto->gti_ns
    cJSON *gti_ns = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "gtiNs");
    if (gti_ns) { 
    if(!cJSON_IsString(gti_ns) && !cJSON_IsNull(gti_ns))
    {
    goto end; //String
    }
    }

    // course_dto->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "model");
    if (model) { 
    if(!cJSON_IsString(model) && !cJSON_IsNull(model))
    {
    goto end; //String
    }
    }

    // course_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // course_dto->color
    cJSON *color = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "color");
    if (color) { 
    if(!cJSON_IsString(color) && !cJSON_IsNull(color))
    {
    goto end; //String
    }
    }

    // course_dto->isb_n13
    cJSON *isb_n13 = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "isbN13");
    if (isb_n13) { 
    if(!cJSON_IsString(isb_n13) && !cJSON_IsNull(isb_n13))
    {
    goto end; //String
    }
    }

    // course_dto->unspsc
    cJSON *unspsc = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "unspsc");
    if (unspsc) { 
    if(!cJSON_IsString(unspsc) && !cJSON_IsNull(unspsc))
    {
    goto end; //String
    }
    }

    // course_dto->unit_id
    cJSON *unit_id = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "unitId");
    if (unit_id) { 
    if(!cJSON_IsString(unit_id) && !cJSON_IsNull(unit_id))
    {
    goto end; //String
    }
    }

    // course_dto->series
    cJSON *series = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "series");
    if (series) { 
    if(!cJSON_IsString(series) && !cJSON_IsNull(series))
    {
    goto end; //String
    }
    }

    // course_dto->barcode
    cJSON *barcode = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "barcode");
    if (barcode) { 
    if(!cJSON_IsString(barcode) && !cJSON_IsNull(barcode))
    {
    goto end; //String
    }
    }

    // course_dto->unsps_cs
    cJSON *unsps_cs = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "unspsCs");
    if (unsps_cs) { 
    if(!cJSON_IsString(unsps_cs) && !cJSON_IsNull(unsps_cs))
    {
    goto end; //String
    }
    }

    // course_dto->pattern
    cJSON *pattern = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "pattern");
    if (pattern) { 
    if(!cJSON_IsString(pattern) && !cJSON_IsNull(pattern))
    {
    goto end; //String
    }
    }

    // course_dto->summary
    cJSON *summary = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "summary");
    if (summary) { 
    if(!cJSON_IsString(summary) && !cJSON_IsNull(summary))
    {
    goto end; //String
    }
    }

    // course_dto->brand_id
    cJSON *brand_id = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "brandId");
    if (brand_id) { 
    if(!cJSON_IsString(brand_id) && !cJSON_IsNull(brand_id))
    {
    goto end; //String
    }
    }

    // course_dto->features
    cJSON *features = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "features");
    if (features) { 
    if(!cJSON_IsString(features) && !cJSON_IsNull(features))
    {
    goto end; //String
    }
    }

    // course_dto->material
    cJSON *material = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "material");
    if (material) { 
    if(!cJSON_IsString(material) && !cJSON_IsNull(material))
    {
    goto end; //String
    }
    }

    // course_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // course_dto->permalink
    cJSON *permalink = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "permalink");
    if (permalink) { 
    if(!cJSON_IsString(permalink) && !cJSON_IsNull(permalink))
    {
    goto end; //String
    }
    }

    // course_dto->brand_name
    cJSON *brand_name = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "brandName");
    if (brand_name) { 
    if(!cJSON_IsString(brand_name) && !cJSON_IsNull(brand_name))
    {
    goto end; //String
    }
    }

    // course_dto->language_id
    cJSON *language_id = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "languageId");
    if (language_id) { 
    if(!cJSON_IsString(language_id) && !cJSON_IsNull(language_id))
    {
    goto end; //String
    }
    }

    // course_dto->item_type_id
    cJSON *item_type_id = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "itemTypeId");
    if (item_type_id) { 
    if(!cJSON_IsString(item_type_id) && !cJSON_IsNull(item_type_id))
    {
    goto end; //String
    }
    }

    // course_dto->category_id
    cJSON *category_id = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "categoryId");
    if (category_id) { 
    if(!cJSON_IsString(category_id) && !cJSON_IsNull(category_id))
    {
    goto end; //String
    }
    }

    // course_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // course_dto->unit_group_id
    cJSON *unit_group_id = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "unitGroupId");
    if (unit_group_id) { 
    if(!cJSON_IsString(unit_group_id) && !cJSON_IsNull(unit_group_id))
    {
    goto end; //String
    }
    }

    // course_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_dto->ingredients
    cJSON *ingredients = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "ingredients");
    if (ingredients) { 
    if(!cJSON_IsString(ingredients) && !cJSON_IsNull(ingredients))
    {
    goto end; //String
    }
    }

    // course_dto->release_date
    cJSON *release_date = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "releaseDate");
    if (release_date) { 
    if(!cJSON_IsString(release_date) && !cJSON_IsNull(release_date))
    {
    goto end; //String
    }
    }

    // course_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // course_dto->supplier_code
    cJSON *supplier_code = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "supplierCode");
    if (supplier_code) { 
    if(!cJSON_IsString(supplier_code) && !cJSON_IsNull(supplier_code))
    {
    goto end; //String
    }
    }

    // course_dto->ships_to_rules
    cJSON *ships_to_rules = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "shipsToRules");
    if (ships_to_rules) { 
    if(!cJSON_IsString(ships_to_rules) && !cJSON_IsNull(ships_to_rules))
    {
    goto end; //String
    }
    }

    // course_dto->purchase_note
    cJSON *purchase_note = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "purchaseNote");
    if (purchase_note) { 
    if(!cJSON_IsString(purchase_note) && !cJSON_IsNull(purchase_note))
    {
    goto end; //String
    }
    }

    // course_dto->parent_item_id
    cJSON *parent_item_id = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "parentItemId");
    if (parent_item_id) { 
    if(!cJSON_IsString(parent_item_id) && !cJSON_IsNull(parent_item_id))
    {
    goto end; //String
    }
    }

    // course_dto->item_type_name
    cJSON *item_type_name = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "itemTypeName");
    if (item_type_name) { 
    if(!cJSON_IsString(item_type_name) && !cJSON_IsNull(item_type_name))
    {
    goto end; //String
    }
    }

    // course_dto->discriminator
    cJSON *discriminator = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "discriminator");
    if (discriminator) { 
    if(!cJSON_IsString(discriminator) && !cJSON_IsNull(discriminator))
    {
    goto end; //String
    }
    }

    // course_dto->tariff_heading
    cJSON *tariff_heading = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "tariffHeading");
    if (tariff_heading) { 
    if(!cJSON_IsString(tariff_heading) && !cJSON_IsNull(tariff_heading))
    {
    goto end; //String
    }
    }

    // course_dto->nutrition_facts
    cJSON *nutrition_facts = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "nutritionFacts");
    if (nutrition_facts) { 
    if(!cJSON_IsString(nutrition_facts) && !cJSON_IsNull(nutrition_facts))
    {
    goto end; //String
    }
    }

    // course_dto->mozaic_cover_url
    cJSON *mozaic_cover_url = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "mozaicCoverUrl");
    if (mozaic_cover_url) { 
    if(!cJSON_IsString(mozaic_cover_url) && !cJSON_IsNull(mozaic_cover_url))
    {
    goto end; //String
    }
    }

    // course_dto->package_content
    cJSON *package_content = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "packageContent");
    if (package_content) { 
    if(!cJSON_IsString(package_content) && !cJSON_IsNull(package_content))
    {
    goto end; //String
    }
    }

    // course_dto->youtube_video_id
    cJSON *youtube_video_id = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "youtubeVideoId");
    if (youtube_video_id) { 
    if(!cJSON_IsString(youtube_video_id) && !cJSON_IsNull(youtube_video_id))
    {
    goto end; //String
    }
    }

    // course_dto->primary_image_url
    cJSON *primary_image_url = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "primaryImageUrl");
    if (primary_image_url) { 
    if(!cJSON_IsString(primary_image_url) && !cJSON_IsNull(primary_image_url))
    {
    goto end; //String
    }
    }

    // course_dto->long_description
    cJSON *long_description = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "longDescription");
    if (long_description) { 
    if(!cJSON_IsString(long_description) && !cJSON_IsNull(long_description))
    {
    goto end; //String
    }
    }

    // course_dto->measurement_unit
    cJSON *measurement_unit = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "measurementUnit");
    if (measurement_unit) { 
    if(!cJSON_IsString(measurement_unit) && !cJSON_IsNull(measurement_unit))
    {
    goto end; //String
    }
    }

    // course_dto->short_description
    cJSON *short_description = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "shortDescription");
    if (short_description) { 
    if(!cJSON_IsString(short_description) && !cJSON_IsNull(short_description))
    {
    goto end; //String
    }
    }

    // course_dto->google_categories
    cJSON *google_categories = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "googleCategories");
    if (google_categories) { 
    if(!cJSON_IsString(google_categories) && !cJSON_IsNull(google_categories))
    {
    goto end; //String
    }
    }

    // course_dto->supplier_profile_id
    cJSON *supplier_profile_id = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "supplierProfileId");
    if (supplier_profile_id) { 
    if(!cJSON_IsString(supplier_profile_id) && !cJSON_IsNull(supplier_profile_id))
    {
    goto end; //String
    }
    }

    // course_dto->shipping_country_id
    cJSON *shipping_country_id = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "shippingCountryId");
    if (shipping_country_id) { 
    if(!cJSON_IsString(shipping_country_id) && !cJSON_IsNull(shipping_country_id))
    {
    goto end; //String
    }
    }

    // course_dto->system_requirements
    cJSON *system_requirements = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "systemRequirements");
    if (system_requirements) { 
    if(!cJSON_IsString(system_requirements) && !cJSON_IsNull(system_requirements))
    {
    goto end; //String
    }
    }

    // course_dto->custom_tax_description
    cJSON *custom_tax_description = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "customTaxDescription");
    if (custom_tax_description) { 
    if(!cJSON_IsString(custom_tax_description) && !cJSON_IsNull(custom_tax_description))
    {
    goto end; //String
    }
    }

    // course_dto->official_description_url
    cJSON *official_description_url = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "officialDescriptionUrl");
    if (official_description_url) { 
    if(!cJSON_IsString(official_description_url) && !cJSON_IsNull(official_description_url))
    {
    goto end; //String
    }
    }

    // course_dto->energy_efficiency_rating
    cJSON *energy_efficiency_rating = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "energyEfficiencyRating");
    if (energy_efficiency_rating) { 
    if(!cJSON_IsString(energy_efficiency_rating) && !cJSON_IsNull(energy_efficiency_rating))
    {
    goto end; //String
    }
    }

    // course_dto->page_cover_background_url
    cJSON *page_cover_background_url = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "pageCoverBackgroundUrl");
    if (page_cover_background_url) { 
    if(!cJSON_IsString(page_cover_background_url) && !cJSON_IsNull(page_cover_background_url))
    {
    goto end; //String
    }
    }

    // course_dto->primary_google_category_id
    cJSON *primary_google_category_id = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "primaryGoogleCategoryId");
    if (primary_google_category_id) { 
    if(!cJSON_IsString(primary_google_category_id) && !cJSON_IsNull(primary_google_category_id))
    {
    goto end; //String
    }
    }

    // course_dto->operating_system_supported
    cJSON *operating_system_supported = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "operatingSystemSupported");
    if (operating_system_supported) { 
    if(!cJSON_IsString(operating_system_supported) && !cJSON_IsNull(operating_system_supported))
    {
    goto end; //String
    }
    }

    // course_dto->supported_operating_system
    cJSON *supported_operating_system = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "supportedOperatingSystem");
    if (supported_operating_system) { 
    if(!cJSON_IsString(supported_operating_system) && !cJSON_IsNull(supported_operating_system))
    {
    goto end; //String
    }
    }

    // course_dto->primary_google_category_name
    cJSON *primary_google_category_name = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "primaryGoogleCategoryName");
    if (primary_google_category_name) { 
    if(!cJSON_IsString(primary_google_category_name) && !cJSON_IsNull(primary_google_category_name))
    {
    goto end; //String
    }
    }

    // course_dto->hot
    cJSON *hot = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "hot");
    if (hot) { 
    if(!cJSON_IsBool(hot))
    {
    goto end; //Bool
    }
    }

    // course_dto->on_sale
    cJSON *on_sale = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "onSale");
    if (on_sale) { 
    if(!cJSON_IsBool(on_sale))
    {
    goto end; //Bool
    }
    }

    // course_dto->auction
    cJSON *auction = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "auction");
    if (auction) { 
    if(!cJSON_IsBool(auction))
    {
    goto end; //Bool
    }
    }

    // course_dto->deleted
    cJSON *deleted = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "deleted");
    if (deleted) { 
    if(!cJSON_IsBool(deleted))
    {
    goto end; //Bool
    }
    }

    // course_dto->digital
    cJSON *digital = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "digital");
    if (digital) { 
    if(!cJSON_IsBool(digital))
    {
    goto end; //Bool
    }
    }

    // course_dto->pre_sale
    cJSON *pre_sale = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "preSale");
    if (pre_sale) { 
    if(!cJSON_IsBool(pre_sale))
    {
    goto end; //Bool
    }
    }

    // course_dto->taxable
    cJSON *taxable = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "taxable");
    if (taxable) { 
    if(!cJSON_IsBool(taxable))
    {
    goto end; //Bool
    }
    }

    // course_dto->in_stock
    cJSON *in_stock = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "inStock");
    if (in_stock) { 
    if(!cJSON_IsBool(in_stock))
    {
    goto end; //Bool
    }
    }

    // course_dto->featured
    cJSON *featured = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "featured");
    if (featured) { 
    if(!cJSON_IsBool(featured))
    {
    goto end; //Bool
    }
    }

    // course_dto->trending
    cJSON *trending = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "trending");
    if (trending) { 
    if(!cJSON_IsBool(trending))
    {
    goto end; //Bool
    }
    }

    // course_dto->low_stock
    cJSON *low_stock = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "lowStock");
    if (low_stock) { 
    if(!cJSON_IsBool(low_stock))
    {
    goto end; //Bool
    }
    }

    // course_dto->published
    cJSON *published = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "published");
    if (published) { 
    if(!cJSON_IsBool(published))
    {
    goto end; //Bool
    }
    }

    // course_dto->by_request
    cJSON *by_request = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "byRequest");
    if (by_request) { 
    if(!cJSON_IsBool(by_request))
    {
    goto end; //Bool
    }
    }

    // course_dto->on_discount
    cJSON *on_discount = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "onDiscount");
    if (on_discount) { 
    if(!cJSON_IsBool(on_discount))
    {
    goto end; //Bool
    }
    }

    // course_dto->is_daily_deal
    cJSON *is_daily_deal = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "isDailyDeal");
    if (is_daily_deal) { 
    if(!cJSON_IsBool(is_daily_deal))
    {
    goto end; //Bool
    }
    }

    // course_dto->is_new_arrival
    cJSON *is_new_arrival = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "isNewArrival");
    if (is_new_arrival) { 
    if(!cJSON_IsBool(is_new_arrival))
    {
    goto end; //Bool
    }
    }

    // course_dto->is_weekly_deal
    cJSON *is_weekly_deal = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "isWeeklyDeal");
    if (is_weekly_deal) { 
    if(!cJSON_IsBool(is_weekly_deal))
    {
    goto end; //Bool
    }
    }

    // course_dto->is_best_seller
    cJSON *is_best_seller = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "isBestSeller");
    if (is_best_seller) { 
    if(!cJSON_IsBool(is_best_seller))
    {
    goto end; //Bool
    }
    }

    // course_dto->is_monthly_deal
    cJSON *is_monthly_deal = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "isMonthlyDeal");
    if (is_monthly_deal) { 
    if(!cJSON_IsBool(is_monthly_deal))
    {
    goto end; //Bool
    }
    }

    // course_dto->has_variations
    cJSON *has_variations = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "hasVariations");
    if (has_variations) { 
    if(!cJSON_IsBool(has_variations))
    {
    goto end; //Bool
    }
    }

    // course_dto->is_fixed_discount
    cJSON *is_fixed_discount = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "isFixedDiscount");
    if (is_fixed_discount) { 
    if(!cJSON_IsBool(is_fixed_discount))
    {
    goto end; //Bool
    }
    }

    // course_dto->is_dealers_choice
    cJSON *is_dealers_choice = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "isDealersChoice");
    if (is_dealers_choice) { 
    if(!cJSON_IsBool(is_dealers_choice))
    {
    goto end; //Bool
    }
    }

    // course_dto->manage_inventory
    cJSON *manage_inventory = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "manageInventory");
    if (manage_inventory) { 
    if(!cJSON_IsBool(manage_inventory))
    {
    goto end; //Bool
    }
    }

    // course_dto->is_official_choice
    cJSON *is_official_choice = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "isOfficialChoice");
    if (is_official_choice) { 
    if(!cJSON_IsBool(is_official_choice))
    {
    goto end; //Bool
    }
    }

    // course_dto->valid_primary_image
    cJSON *valid_primary_image = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "validPrimaryImage");
    if (valid_primary_image) { 
    if(!cJSON_IsBool(valid_primary_image))
    {
    goto end; //Bool
    }
    }

    // course_dto->is_deadline_discount
    cJSON *is_deadline_discount = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "isDeadlineDiscount");
    if (is_deadline_discount) { 
    if(!cJSON_IsBool(is_deadline_discount))
    {
    goto end; //Bool
    }
    }

    // course_dto->display_showcase_tab
    cJSON *display_showcase_tab = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "displayShowcaseTab");
    if (display_showcase_tab) { 
    if(!cJSON_IsBool(display_showcase_tab))
    {
    goto end; //Bool
    }
    }

    // course_dto->tax_included_in_price
    cJSON *tax_included_in_price = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "taxIncludedInPrice");
    if (tax_included_in_price) { 
    if(!cJSON_IsBool(tax_included_in_price))
    {
    goto end; //Bool
    }
    }

    // course_dto->is_product_of_the_week
    cJSON *is_product_of_the_week = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "isProductOfTheWeek");
    if (is_product_of_the_week) { 
    if(!cJSON_IsBool(is_product_of_the_week))
    {
    goto end; //Bool
    }
    }

    // course_dto->is_product_of_the_month
    cJSON *is_product_of_the_month = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "isProductOfTheMonth");
    if (is_product_of_the_month) { 
    if(!cJSON_IsBool(is_product_of_the_month))
    {
    goto end; //Bool
    }
    }

    // course_dto->is_percentage_discount
    cJSON *is_percentage_discount = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "isPercentageDiscount");
    if (is_percentage_discount) { 
    if(!cJSON_IsBool(is_percentage_discount))
    {
    goto end; //Bool
    }
    }

    // course_dto->display_on_global_mozaic
    cJSON *display_on_global_mozaic = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "displayOnGlobalMozaic");
    if (display_on_global_mozaic) { 
    if(!cJSON_IsBool(display_on_global_mozaic))
    {
    goto end; //Bool
    }
    }

    // course_dto->display_on_brands_mozaic
    cJSON *display_on_brands_mozaic = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "displayOnBrandsMozaic");
    if (display_on_brands_mozaic) { 
    if(!cJSON_IsBool(display_on_brands_mozaic))
    {
    goto end; //Bool
    }
    }

    // course_dto->disable_default_policies
    cJSON *disable_default_policies = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "disableDefaultPolicies");
    if (disable_default_policies) { 
    if(!cJSON_IsBool(disable_default_policies))
    {
    goto end; //Bool
    }
    }

    // course_dto->display_on_category_mozaic
    cJSON *display_on_category_mozaic = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "displayOnCategoryMozaic");
    if (display_on_category_mozaic) { 
    if(!cJSON_IsBool(display_on_category_mozaic))
    {
    goto end; //Bool
    }
    }

    // course_dto->display_description_editor
    cJSON *display_description_editor = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "displayDescriptionEditor");
    if (display_description_editor) { 
    if(!cJSON_IsBool(display_description_editor))
    {
    goto end; //Bool
    }
    }

    // course_dto->display_short_description_editor
    cJSON *display_short_description_editor = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "displayShortDescriptionEditor");
    if (display_short_description_editor) { 
    if(!cJSON_IsBool(display_short_description_editor))
    {
    goto end; //Bool
    }
    }

    // course_dto->display_on_banner_marketing_rotation
    cJSON *display_on_banner_marketing_rotation = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "displayOnBannerMarketingRotation");
    if (display_on_banner_marketing_rotation) { 
    if(!cJSON_IsBool(display_on_banner_marketing_rotation))
    {
    goto end; //Bool
    }
    }

    // course_dto->auction_end
    cJSON *auction_end = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "auctionEnd");
    if (auction_end) { 
    if(!cJSON_IsString(auction_end) && !cJSON_IsNull(auction_end))
    {
    goto end; //DateTime
    }
    }

    // course_dto->auction_start
    cJSON *auction_start = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "auctionStart");
    if (auction_start) { 
    if(!cJSON_IsString(auction_start) && !cJSON_IsNull(auction_start))
    {
    goto end; //DateTime
    }
    }

    // course_dto->published_date
    cJSON *published_date = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "publishedDate");
    if (published_date) { 
    if(!cJSON_IsString(published_date) && !cJSON_IsNull(published_date))
    {
    goto end; //DateTime
    }
    }

    // course_dto->deadline_discount_from_date
    cJSON *deadline_discount_from_date = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "deadlineDiscountFromDate");
    if (deadline_discount_from_date) { 
    if(!cJSON_IsString(deadline_discount_from_date) && !cJSON_IsNull(deadline_discount_from_date))
    {
    goto end; //DateTime
    }
    }

    // course_dto->deadline_discount_due_date
    cJSON *deadline_discount_due_date = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "deadlineDiscountDueDate");
    if (deadline_discount_due_date) { 
    if(!cJSON_IsString(deadline_discount_due_date) && !cJSON_IsNull(deadline_discount_due_date))
    {
    goto end; //DateTime
    }
    }

    // course_dto->last_fixed_prices_update_date_time
    cJSON *last_fixed_prices_update_date_time = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "lastFixedPricesUpdateDateTime");
    if (last_fixed_prices_update_date_time) { 
    if(!cJSON_IsString(last_fixed_prices_update_date_time) && !cJSON_IsNull(last_fixed_prices_update_date_time))
    {
    goto end; //DateTime
    }
    }

    // course_dto->images
    cJSON *images = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "images");
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

    // course_dto->views_count
    cJSON *views_count = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "viewsCount");
    if (views_count) { 
    if(!cJSON_IsNumber(views_count))
    {
    goto end; //Numeric
    }
    }

    // course_dto->reviews_count
    cJSON *reviews_count = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "reviewsCount");
    if (reviews_count) { 
    if(!cJSON_IsNumber(reviews_count))
    {
    goto end; //Numeric
    }
    }

    // course_dto->questions_count
    cJSON *questions_count = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "questionsCount");
    if (questions_count) { 
    if(!cJSON_IsNumber(questions_count))
    {
    goto end; //Numeric
    }
    }

    // course_dto->packaged_quantity
    cJSON *packaged_quantity = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "packagedQuantity");
    if (packaged_quantity) { 
    if(!cJSON_IsNumber(packaged_quantity))
    {
    goto end; //Numeric
    }
    }

    // course_dto->reviews_avg
    cJSON *reviews_avg = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "reviewsAvg");
    if (reviews_avg) { 
    if(!cJSON_IsNumber(reviews_avg))
    {
    goto end; //Numeric
    }
    }

    // course_dto->recurrency
    cJSON *recurrency = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "recurrency");
    if (recurrency) { 
    if(!cJSON_IsNumber(recurrency))
    {
    goto end; //Numeric
    }
    }

    // course_dto->current_stock
    cJSON *current_stock = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "currentStock");
    if (current_stock) { 
    if(!cJSON_IsNumber(current_stock))
    {
    goto end; //Numeric
    }
    }

    // course_dto->width
    cJSON *width = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "width");
    if (width) { 
    if(!cJSON_IsNumber(width))
    {
    goto end; //Numeric
    }
    }

    // course_dto->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "weight");
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // course_dto->length
    cJSON *length = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "length");
    if (length) { 
    if(!cJSON_IsNumber(length))
    {
    goto end; //Numeric
    }
    }

    // course_dto->height
    cJSON *height = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "height");
    if (height) { 
    if(!cJSON_IsNumber(height))
    {
    goto end; //Numeric
    }
    }

    // course_dto->regular_price
    cJSON *regular_price = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "regularPrice");
    if (regular_price) { 
    if(!cJSON_IsNumber(regular_price))
    {
    goto end; //Numeric
    }
    }

    // course_dto->discount_price
    cJSON *discount_price = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "discountPrice");
    if (discount_price) { 
    if(!cJSON_IsNumber(discount_price))
    {
    goto end; //Numeric
    }
    }

    // course_dto->custom_tax_value
    cJSON *custom_tax_value = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "customTaxValue");
    if (custom_tax_value) { 
    if(!cJSON_IsNumber(custom_tax_value))
    {
    goto end; //Numeric
    }
    }

    // course_dto->discount_amount
    cJSON *discount_amount = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "discountAmount");
    if (discount_amount) { 
    if(!cJSON_IsNumber(discount_amount))
    {
    goto end; //Numeric
    }
    }

    // course_dto->in_cart_quantity
    cJSON *in_cart_quantity = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "inCartQuantity");
    if (in_cart_quantity) { 
    if(!cJSON_IsNumber(in_cart_quantity))
    {
    goto end; //Numeric
    }
    }

    // course_dto->custom_tax_amount
    cJSON *custom_tax_amount = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "customTaxAmount");
    if (custom_tax_amount) { 
    if(!cJSON_IsNumber(custom_tax_amount))
    {
    goto end; //Numeric
    }
    }

    // course_dto->discount_percentage
    cJSON *discount_percentage = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "discountPercentage");
    if (discount_percentage) { 
    if(!cJSON_IsNumber(discount_percentage))
    {
    goto end; //Numeric
    }
    }

    // course_dto->custom_tax_percentage
    cJSON *custom_tax_percentage = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "customTaxPercentage");
    if (custom_tax_percentage) { 
    if(!cJSON_IsNumber(custom_tax_percentage))
    {
    goto end; //Numeric
    }
    }

    // course_dto->estimated_taxes_in_usd
    cJSON *estimated_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "estimatedTaxesInUsd");
    if (estimated_taxes_in_usd) { 
    if(!cJSON_IsNumber(estimated_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // course_dto->estimated_profit_in_usd
    cJSON *estimated_profit_in_usd = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "estimatedProfitInUsd");
    if (estimated_profit_in_usd) { 
    if(!cJSON_IsNumber(estimated_profit_in_usd))
    {
    goto end; //Numeric
    }
    }

    // course_dto->estimated_base_price_in_usd
    cJSON *estimated_base_price_in_usd = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "estimatedBasePriceInUsd");
    if (estimated_base_price_in_usd) { 
    if(!cJSON_IsNumber(estimated_base_price_in_usd))
    {
    goto end; //Numeric
    }
    }

    // course_dto->estimated_discounts_in_usd
    cJSON *estimated_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "estimatedDiscountsInUsd");
    if (estimated_discounts_in_usd) { 
    if(!cJSON_IsNumber(estimated_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // course_dto->estimated_surcharges_in_usd
    cJSON *estimated_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "estimatedSurchargesInUsd");
    if (estimated_surcharges_in_usd) { 
    if(!cJSON_IsNumber(estimated_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // course_dto->estimated_payment_tax_in_usd
    cJSON *estimated_payment_tax_in_usd = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "estimatedPaymentTaxInUsd");
    if (estimated_payment_tax_in_usd) { 
    if(!cJSON_IsNumber(estimated_payment_tax_in_usd))
    {
    goto end; //Numeric
    }
    }

    // course_dto->estimated_total_price_in_usd
    cJSON *estimated_total_price_in_usd = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "estimatedTotalPriceInUsd");
    if (estimated_total_price_in_usd) { 
    if(!cJSON_IsNumber(estimated_total_price_in_usd))
    {
    goto end; //Numeric
    }
    }

    // course_dto->estimated_payment_cost_in_usd
    cJSON *estimated_payment_cost_in_usd = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "estimatedPaymentCostInUsd");
    if (estimated_payment_cost_in_usd) { 
    if(!cJSON_IsNumber(estimated_payment_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // course_dto->estimated_deal_savings_in_usd
    cJSON *estimated_deal_savings_in_usd = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "estimatedDealSavingsInUsd");
    if (estimated_deal_savings_in_usd) { 
    if(!cJSON_IsNumber(estimated_deal_savings_in_usd))
    {
    goto end; //Numeric
    }
    }

    // course_dto->estimated_regular_price_in_usd
    cJSON *estimated_regular_price_in_usd = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "estimatedRegularPriceInUsd");
    if (estimated_regular_price_in_usd) { 
    if(!cJSON_IsNumber(estimated_regular_price_in_usd))
    {
    goto end; //Numeric
    }
    }

    // course_dto->estimated_tax_base_price_in_usd
    cJSON *estimated_tax_base_price_in_usd = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "estimatedTaxBasePriceInUsd");
    if (estimated_tax_base_price_in_usd) { 
    if(!cJSON_IsNumber(estimated_tax_base_price_in_usd))
    {
    goto end; //Numeric
    }
    }

    // course_dto->estimated_withholding_taxes_in_usd
    cJSON *estimated_withholding_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "estimatedWithholdingTaxesInUsd");
    if (estimated_withholding_taxes_in_usd) { 
    if(!cJSON_IsNumber(estimated_withholding_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // course_dto->estimated_default_shipping_tax_in_usd
    cJSON *estimated_default_shipping_tax_in_usd = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "estimatedDefaultShippingTaxInUsd");
    if (estimated_default_shipping_tax_in_usd) { 
    if(!cJSON_IsNumber(estimated_default_shipping_tax_in_usd))
    {
    goto end; //Numeric
    }
    }

    // course_dto->estimated_default_shipping_cost_in_usd
    cJSON *estimated_default_shipping_cost_in_usd = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "estimatedDefaultShippingCostInUsd");
    if (estimated_default_shipping_cost_in_usd) { 
    if(!cJSON_IsNumber(estimated_default_shipping_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // course_dto->selected_tags
    cJSON *selected_tags = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "selectedTags");
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

    // course_dto->selected_types
    cJSON *selected_types = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "selectedTypes");
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

    // course_dto->selected_brands
    cJSON *selected_brands = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "selectedBrands");
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

    // course_dto->selected_categories
    cJSON *selected_categories = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "selectedCategories");
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

    // course_dto->selected_tax_policies
    cJSON *selected_tax_policies = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "selectedTaxPolicies");
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

    // course_dto->selected_pricing_rules
    cJSON *selected_pricing_rules = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "selectedPricingRules");
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

    // course_dto->selected_refund_policies
    cJSON *selected_refund_policies = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "selectedRefundPolicies");
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

    // course_dto->selected_return_policies
    cJSON *selected_return_policies = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "selectedReturnPolicies");
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

    // course_dto->selected_pricing_policies
    cJSON *selected_pricing_policies = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "selectedPricingPolicies");
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

    // course_dto->selected_google_categories
    cJSON *selected_google_categories = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "selectedGoogleCategories");
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

    // course_dto->selected_warranty_policies
    cJSON *selected_warranty_policies = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "selectedWarrantyPolicies");
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

    // course_dto->selected_shipment_policies
    cJSON *selected_shipment_policies = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "selectedShipmentPolicies");
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

    // course_dto->selected_attributes_options
    cJSON *selected_attributes_options = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "selectedAttributesOptions");
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

    // course_dto->selected_selling_margin_policies
    cJSON *selected_selling_margin_policies = cJSON_GetObjectItemCaseSensitive(course_dtoJSON, "selectedSellingMarginPolicies");
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


    course_dto_local_var = course_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
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
        isb_ns && !cJSON_IsNull(isb_ns) ? strdup(isb_ns->valuestring) : NULL,
        asi_ns && !cJSON_IsNull(asi_ns) ? strdup(asi_ns->valuestring) : NULL,
        gti_ns && !cJSON_IsNull(gti_ns) ? strdup(gti_ns->valuestring) : NULL,
        model && !cJSON_IsNull(model) ? strdup(model->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        color && !cJSON_IsNull(color) ? strdup(color->valuestring) : NULL,
        isb_n13 && !cJSON_IsNull(isb_n13) ? strdup(isb_n13->valuestring) : NULL,
        unspsc && !cJSON_IsNull(unspsc) ? strdup(unspsc->valuestring) : NULL,
        unit_id && !cJSON_IsNull(unit_id) ? strdup(unit_id->valuestring) : NULL,
        series && !cJSON_IsNull(series) ? strdup(series->valuestring) : NULL,
        barcode && !cJSON_IsNull(barcode) ? strdup(barcode->valuestring) : NULL,
        unsps_cs && !cJSON_IsNull(unsps_cs) ? strdup(unsps_cs->valuestring) : NULL,
        pattern && !cJSON_IsNull(pattern) ? strdup(pattern->valuestring) : NULL,
        summary && !cJSON_IsNull(summary) ? strdup(summary->valuestring) : NULL,
        brand_id && !cJSON_IsNull(brand_id) ? strdup(brand_id->valuestring) : NULL,
        features && !cJSON_IsNull(features) ? strdup(features->valuestring) : NULL,
        material && !cJSON_IsNull(material) ? strdup(material->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        permalink && !cJSON_IsNull(permalink) ? strdup(permalink->valuestring) : NULL,
        brand_name && !cJSON_IsNull(brand_name) ? strdup(brand_name->valuestring) : NULL,
        language_id && !cJSON_IsNull(language_id) ? strdup(language_id->valuestring) : NULL,
        item_type_id && !cJSON_IsNull(item_type_id) ? strdup(item_type_id->valuestring) : NULL,
        category_id && !cJSON_IsNull(category_id) ? strdup(category_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        unit_group_id && !cJSON_IsNull(unit_group_id) ? strdup(unit_group_id->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        ingredients && !cJSON_IsNull(ingredients) ? strdup(ingredients->valuestring) : NULL,
        release_date && !cJSON_IsNull(release_date) ? strdup(release_date->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        supplier_code && !cJSON_IsNull(supplier_code) ? strdup(supplier_code->valuestring) : NULL,
        ships_to_rules && !cJSON_IsNull(ships_to_rules) ? strdup(ships_to_rules->valuestring) : NULL,
        purchase_note && !cJSON_IsNull(purchase_note) ? strdup(purchase_note->valuestring) : NULL,
        parent_item_id && !cJSON_IsNull(parent_item_id) ? strdup(parent_item_id->valuestring) : NULL,
        item_type_name && !cJSON_IsNull(item_type_name) ? strdup(item_type_name->valuestring) : NULL,
        discriminator && !cJSON_IsNull(discriminator) ? strdup(discriminator->valuestring) : NULL,
        tariff_heading && !cJSON_IsNull(tariff_heading) ? strdup(tariff_heading->valuestring) : NULL,
        nutrition_facts && !cJSON_IsNull(nutrition_facts) ? strdup(nutrition_facts->valuestring) : NULL,
        mozaic_cover_url && !cJSON_IsNull(mozaic_cover_url) ? strdup(mozaic_cover_url->valuestring) : NULL,
        package_content && !cJSON_IsNull(package_content) ? strdup(package_content->valuestring) : NULL,
        youtube_video_id && !cJSON_IsNull(youtube_video_id) ? strdup(youtube_video_id->valuestring) : NULL,
        primary_image_url && !cJSON_IsNull(primary_image_url) ? strdup(primary_image_url->valuestring) : NULL,
        long_description && !cJSON_IsNull(long_description) ? strdup(long_description->valuestring) : NULL,
        measurement_unit && !cJSON_IsNull(measurement_unit) ? strdup(measurement_unit->valuestring) : NULL,
        short_description && !cJSON_IsNull(short_description) ? strdup(short_description->valuestring) : NULL,
        google_categories && !cJSON_IsNull(google_categories) ? strdup(google_categories->valuestring) : NULL,
        supplier_profile_id && !cJSON_IsNull(supplier_profile_id) ? strdup(supplier_profile_id->valuestring) : NULL,
        shipping_country_id && !cJSON_IsNull(shipping_country_id) ? strdup(shipping_country_id->valuestring) : NULL,
        system_requirements && !cJSON_IsNull(system_requirements) ? strdup(system_requirements->valuestring) : NULL,
        custom_tax_description && !cJSON_IsNull(custom_tax_description) ? strdup(custom_tax_description->valuestring) : NULL,
        official_description_url && !cJSON_IsNull(official_description_url) ? strdup(official_description_url->valuestring) : NULL,
        energy_efficiency_rating && !cJSON_IsNull(energy_efficiency_rating) ? strdup(energy_efficiency_rating->valuestring) : NULL,
        page_cover_background_url && !cJSON_IsNull(page_cover_background_url) ? strdup(page_cover_background_url->valuestring) : NULL,
        primary_google_category_id && !cJSON_IsNull(primary_google_category_id) ? strdup(primary_google_category_id->valuestring) : NULL,
        operating_system_supported && !cJSON_IsNull(operating_system_supported) ? strdup(operating_system_supported->valuestring) : NULL,
        supported_operating_system && !cJSON_IsNull(supported_operating_system) ? strdup(supported_operating_system->valuestring) : NULL,
        primary_google_category_name && !cJSON_IsNull(primary_google_category_name) ? strdup(primary_google_category_name->valuestring) : NULL,
        hot ? hot->valueint : 0,
        on_sale ? on_sale->valueint : 0,
        auction ? auction->valueint : 0,
        deleted ? deleted->valueint : 0,
        digital ? digital->valueint : 0,
        pre_sale ? pre_sale->valueint : 0,
        taxable ? taxable->valueint : 0,
        in_stock ? in_stock->valueint : 0,
        featured ? featured->valueint : 0,
        trending ? trending->valueint : 0,
        low_stock ? low_stock->valueint : 0,
        published ? published->valueint : 0,
        by_request ? by_request->valueint : 0,
        on_discount ? on_discount->valueint : 0,
        is_daily_deal ? is_daily_deal->valueint : 0,
        is_new_arrival ? is_new_arrival->valueint : 0,
        is_weekly_deal ? is_weekly_deal->valueint : 0,
        is_best_seller ? is_best_seller->valueint : 0,
        is_monthly_deal ? is_monthly_deal->valueint : 0,
        has_variations ? has_variations->valueint : 0,
        is_fixed_discount ? is_fixed_discount->valueint : 0,
        is_dealers_choice ? is_dealers_choice->valueint : 0,
        manage_inventory ? manage_inventory->valueint : 0,
        is_official_choice ? is_official_choice->valueint : 0,
        valid_primary_image ? valid_primary_image->valueint : 0,
        is_deadline_discount ? is_deadline_discount->valueint : 0,
        display_showcase_tab ? display_showcase_tab->valueint : 0,
        tax_included_in_price ? tax_included_in_price->valueint : 0,
        is_product_of_the_week ? is_product_of_the_week->valueint : 0,
        is_product_of_the_month ? is_product_of_the_month->valueint : 0,
        is_percentage_discount ? is_percentage_discount->valueint : 0,
        display_on_global_mozaic ? display_on_global_mozaic->valueint : 0,
        display_on_brands_mozaic ? display_on_brands_mozaic->valueint : 0,
        disable_default_policies ? disable_default_policies->valueint : 0,
        display_on_category_mozaic ? display_on_category_mozaic->valueint : 0,
        display_description_editor ? display_description_editor->valueint : 0,
        display_short_description_editor ? display_short_description_editor->valueint : 0,
        display_on_banner_marketing_rotation ? display_on_banner_marketing_rotation->valueint : 0,
        auction_end && !cJSON_IsNull(auction_end) ? strdup(auction_end->valuestring) : NULL,
        auction_start && !cJSON_IsNull(auction_start) ? strdup(auction_start->valuestring) : NULL,
        published_date && !cJSON_IsNull(published_date) ? strdup(published_date->valuestring) : NULL,
        deadline_discount_from_date && !cJSON_IsNull(deadline_discount_from_date) ? strdup(deadline_discount_from_date->valuestring) : NULL,
        deadline_discount_due_date && !cJSON_IsNull(deadline_discount_due_date) ? strdup(deadline_discount_due_date->valuestring) : NULL,
        last_fixed_prices_update_date_time && !cJSON_IsNull(last_fixed_prices_update_date_time) ? strdup(last_fixed_prices_update_date_time->valuestring) : NULL,
        images ? imagesList : NULL,
        views_count ? views_count->valuedouble : 0,
        reviews_count ? reviews_count->valuedouble : 0,
        questions_count ? questions_count->valuedouble : 0,
        packaged_quantity ? packaged_quantity->valuedouble : 0,
        reviews_avg ? reviews_avg->valuedouble : 0,
        recurrency ? recurrency->valuedouble : 0,
        current_stock ? current_stock->valuedouble : 0,
        width ? width->valuedouble : 0,
        weight ? weight->valuedouble : 0,
        length ? length->valuedouble : 0,
        height ? height->valuedouble : 0,
        regular_price ? regular_price->valuedouble : 0,
        discount_price ? discount_price->valuedouble : 0,
        custom_tax_value ? custom_tax_value->valuedouble : 0,
        discount_amount ? discount_amount->valuedouble : 0,
        in_cart_quantity ? in_cart_quantity->valuedouble : 0,
        custom_tax_amount ? custom_tax_amount->valuedouble : 0,
        discount_percentage ? discount_percentage->valuedouble : 0,
        custom_tax_percentage ? custom_tax_percentage->valuedouble : 0,
        estimated_taxes_in_usd ? estimated_taxes_in_usd->valuedouble : 0,
        estimated_profit_in_usd ? estimated_profit_in_usd->valuedouble : 0,
        estimated_base_price_in_usd ? estimated_base_price_in_usd->valuedouble : 0,
        estimated_discounts_in_usd ? estimated_discounts_in_usd->valuedouble : 0,
        estimated_surcharges_in_usd ? estimated_surcharges_in_usd->valuedouble : 0,
        estimated_payment_tax_in_usd ? estimated_payment_tax_in_usd->valuedouble : 0,
        estimated_total_price_in_usd ? estimated_total_price_in_usd->valuedouble : 0,
        estimated_payment_cost_in_usd ? estimated_payment_cost_in_usd->valuedouble : 0,
        estimated_deal_savings_in_usd ? estimated_deal_savings_in_usd->valuedouble : 0,
        estimated_regular_price_in_usd ? estimated_regular_price_in_usd->valuedouble : 0,
        estimated_tax_base_price_in_usd ? estimated_tax_base_price_in_usd->valuedouble : 0,
        estimated_withholding_taxes_in_usd ? estimated_withholding_taxes_in_usd->valuedouble : 0,
        estimated_default_shipping_tax_in_usd ? estimated_default_shipping_tax_in_usd->valuedouble : 0,
        estimated_default_shipping_cost_in_usd ? estimated_default_shipping_cost_in_usd->valuedouble : 0,
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

    return course_dto_local_var;
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
