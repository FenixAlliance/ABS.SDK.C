#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subscription_plan_dto.h"



subscription_plan_dto_t *subscription_plan_dto_create(
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
    int allow_subscription_trials,
    int is_perpetual_subscription,
    int trial_subscription_relative_expiration_in_days,
    int standard_subscription_relative_expiration_in_days,
    char *subscriptions_certificate_id
    ) {
    subscription_plan_dto_t *subscription_plan_dto_local_var = malloc(sizeof(subscription_plan_dto_t));
    if (!subscription_plan_dto_local_var) {
        return NULL;
    }
    subscription_plan_dto_local_var->id = id;
    subscription_plan_dto_local_var->timestamp = timestamp;
    subscription_plan_dto_local_var->sku = sku;
    subscription_plan_dto_local_var->upc = upc;
    subscription_plan_dto_local_var->ean = ean;
    subscription_plan_dto_local_var->mpn = mpn;
    subscription_plan_dto_local_var->sk_us = sk_us;
    subscription_plan_dto_local_var->isbn = isbn;
    subscription_plan_dto_local_var->up_cs = up_cs;
    subscription_plan_dto_local_var->ea_ns = ea_ns;
    subscription_plan_dto_local_var->asin = asin;
    subscription_plan_dto_local_var->gtin = gtin;
    subscription_plan_dto_local_var->mp_ns = mp_ns;
    subscription_plan_dto_local_var->part = part;
    subscription_plan_dto_local_var->name = name;
    subscription_plan_dto_local_var->isb_ns = isb_ns;
    subscription_plan_dto_local_var->asi_ns = asi_ns;
    subscription_plan_dto_local_var->gti_ns = gti_ns;
    subscription_plan_dto_local_var->model = model;
    subscription_plan_dto_local_var->title = title;
    subscription_plan_dto_local_var->color = color;
    subscription_plan_dto_local_var->isb_n13 = isb_n13;
    subscription_plan_dto_local_var->unspsc = unspsc;
    subscription_plan_dto_local_var->unit_id = unit_id;
    subscription_plan_dto_local_var->series = series;
    subscription_plan_dto_local_var->barcode = barcode;
    subscription_plan_dto_local_var->unsps_cs = unsps_cs;
    subscription_plan_dto_local_var->pattern = pattern;
    subscription_plan_dto_local_var->summary = summary;
    subscription_plan_dto_local_var->brand_id = brand_id;
    subscription_plan_dto_local_var->features = features;
    subscription_plan_dto_local_var->material = material;
    subscription_plan_dto_local_var->tenant_id = tenant_id;
    subscription_plan_dto_local_var->permalink = permalink;
    subscription_plan_dto_local_var->brand_name = brand_name;
    subscription_plan_dto_local_var->language_id = language_id;
    subscription_plan_dto_local_var->item_type_id = item_type_id;
    subscription_plan_dto_local_var->category_id = category_id;
    subscription_plan_dto_local_var->currency_id = currency_id;
    subscription_plan_dto_local_var->unit_group_id = unit_group_id;
    subscription_plan_dto_local_var->description = description;
    subscription_plan_dto_local_var->ingredients = ingredients;
    subscription_plan_dto_local_var->release_date = release_date;
    subscription_plan_dto_local_var->enrollment_id = enrollment_id;
    subscription_plan_dto_local_var->supplier_code = supplier_code;
    subscription_plan_dto_local_var->ships_to_rules = ships_to_rules;
    subscription_plan_dto_local_var->purchase_note = purchase_note;
    subscription_plan_dto_local_var->parent_item_id = parent_item_id;
    subscription_plan_dto_local_var->item_type_name = item_type_name;
    subscription_plan_dto_local_var->discriminator = discriminator;
    subscription_plan_dto_local_var->tariff_heading = tariff_heading;
    subscription_plan_dto_local_var->nutrition_facts = nutrition_facts;
    subscription_plan_dto_local_var->mozaic_cover_url = mozaic_cover_url;
    subscription_plan_dto_local_var->package_content = package_content;
    subscription_plan_dto_local_var->youtube_video_id = youtube_video_id;
    subscription_plan_dto_local_var->primary_image_url = primary_image_url;
    subscription_plan_dto_local_var->long_description = long_description;
    subscription_plan_dto_local_var->measurement_unit = measurement_unit;
    subscription_plan_dto_local_var->short_description = short_description;
    subscription_plan_dto_local_var->google_categories = google_categories;
    subscription_plan_dto_local_var->supplier_profile_id = supplier_profile_id;
    subscription_plan_dto_local_var->shipping_country_id = shipping_country_id;
    subscription_plan_dto_local_var->system_requirements = system_requirements;
    subscription_plan_dto_local_var->custom_tax_description = custom_tax_description;
    subscription_plan_dto_local_var->official_description_url = official_description_url;
    subscription_plan_dto_local_var->energy_efficiency_rating = energy_efficiency_rating;
    subscription_plan_dto_local_var->page_cover_background_url = page_cover_background_url;
    subscription_plan_dto_local_var->primary_google_category_id = primary_google_category_id;
    subscription_plan_dto_local_var->operating_system_supported = operating_system_supported;
    subscription_plan_dto_local_var->supported_operating_system = supported_operating_system;
    subscription_plan_dto_local_var->primary_google_category_name = primary_google_category_name;
    subscription_plan_dto_local_var->hot = hot;
    subscription_plan_dto_local_var->on_sale = on_sale;
    subscription_plan_dto_local_var->auction = auction;
    subscription_plan_dto_local_var->deleted = deleted;
    subscription_plan_dto_local_var->digital = digital;
    subscription_plan_dto_local_var->pre_sale = pre_sale;
    subscription_plan_dto_local_var->taxable = taxable;
    subscription_plan_dto_local_var->in_stock = in_stock;
    subscription_plan_dto_local_var->featured = featured;
    subscription_plan_dto_local_var->trending = trending;
    subscription_plan_dto_local_var->low_stock = low_stock;
    subscription_plan_dto_local_var->published = published;
    subscription_plan_dto_local_var->by_request = by_request;
    subscription_plan_dto_local_var->on_discount = on_discount;
    subscription_plan_dto_local_var->is_daily_deal = is_daily_deal;
    subscription_plan_dto_local_var->is_new_arrival = is_new_arrival;
    subscription_plan_dto_local_var->is_weekly_deal = is_weekly_deal;
    subscription_plan_dto_local_var->is_best_seller = is_best_seller;
    subscription_plan_dto_local_var->is_monthly_deal = is_monthly_deal;
    subscription_plan_dto_local_var->has_variations = has_variations;
    subscription_plan_dto_local_var->is_fixed_discount = is_fixed_discount;
    subscription_plan_dto_local_var->is_dealers_choice = is_dealers_choice;
    subscription_plan_dto_local_var->manage_inventory = manage_inventory;
    subscription_plan_dto_local_var->is_official_choice = is_official_choice;
    subscription_plan_dto_local_var->valid_primary_image = valid_primary_image;
    subscription_plan_dto_local_var->is_deadline_discount = is_deadline_discount;
    subscription_plan_dto_local_var->display_showcase_tab = display_showcase_tab;
    subscription_plan_dto_local_var->tax_included_in_price = tax_included_in_price;
    subscription_plan_dto_local_var->is_product_of_the_week = is_product_of_the_week;
    subscription_plan_dto_local_var->is_product_of_the_month = is_product_of_the_month;
    subscription_plan_dto_local_var->is_percentage_discount = is_percentage_discount;
    subscription_plan_dto_local_var->display_on_global_mozaic = display_on_global_mozaic;
    subscription_plan_dto_local_var->display_on_brands_mozaic = display_on_brands_mozaic;
    subscription_plan_dto_local_var->disable_default_policies = disable_default_policies;
    subscription_plan_dto_local_var->display_on_category_mozaic = display_on_category_mozaic;
    subscription_plan_dto_local_var->display_description_editor = display_description_editor;
    subscription_plan_dto_local_var->display_short_description_editor = display_short_description_editor;
    subscription_plan_dto_local_var->display_on_banner_marketing_rotation = display_on_banner_marketing_rotation;
    subscription_plan_dto_local_var->auction_end = auction_end;
    subscription_plan_dto_local_var->auction_start = auction_start;
    subscription_plan_dto_local_var->published_date = published_date;
    subscription_plan_dto_local_var->deadline_discount_from_date = deadline_discount_from_date;
    subscription_plan_dto_local_var->deadline_discount_due_date = deadline_discount_due_date;
    subscription_plan_dto_local_var->last_fixed_prices_update_date_time = last_fixed_prices_update_date_time;
    subscription_plan_dto_local_var->images = images;
    subscription_plan_dto_local_var->views_count = views_count;
    subscription_plan_dto_local_var->reviews_count = reviews_count;
    subscription_plan_dto_local_var->questions_count = questions_count;
    subscription_plan_dto_local_var->packaged_quantity = packaged_quantity;
    subscription_plan_dto_local_var->reviews_avg = reviews_avg;
    subscription_plan_dto_local_var->recurrency = recurrency;
    subscription_plan_dto_local_var->current_stock = current_stock;
    subscription_plan_dto_local_var->width = width;
    subscription_plan_dto_local_var->weight = weight;
    subscription_plan_dto_local_var->length = length;
    subscription_plan_dto_local_var->height = height;
    subscription_plan_dto_local_var->regular_price = regular_price;
    subscription_plan_dto_local_var->discount_price = discount_price;
    subscription_plan_dto_local_var->custom_tax_value = custom_tax_value;
    subscription_plan_dto_local_var->discount_amount = discount_amount;
    subscription_plan_dto_local_var->in_cart_quantity = in_cart_quantity;
    subscription_plan_dto_local_var->custom_tax_amount = custom_tax_amount;
    subscription_plan_dto_local_var->discount_percentage = discount_percentage;
    subscription_plan_dto_local_var->custom_tax_percentage = custom_tax_percentage;
    subscription_plan_dto_local_var->estimated_taxes_in_usd = estimated_taxes_in_usd;
    subscription_plan_dto_local_var->estimated_profit_in_usd = estimated_profit_in_usd;
    subscription_plan_dto_local_var->estimated_base_price_in_usd = estimated_base_price_in_usd;
    subscription_plan_dto_local_var->estimated_discounts_in_usd = estimated_discounts_in_usd;
    subscription_plan_dto_local_var->estimated_surcharges_in_usd = estimated_surcharges_in_usd;
    subscription_plan_dto_local_var->estimated_payment_tax_in_usd = estimated_payment_tax_in_usd;
    subscription_plan_dto_local_var->estimated_total_price_in_usd = estimated_total_price_in_usd;
    subscription_plan_dto_local_var->estimated_payment_cost_in_usd = estimated_payment_cost_in_usd;
    subscription_plan_dto_local_var->estimated_deal_savings_in_usd = estimated_deal_savings_in_usd;
    subscription_plan_dto_local_var->estimated_regular_price_in_usd = estimated_regular_price_in_usd;
    subscription_plan_dto_local_var->estimated_tax_base_price_in_usd = estimated_tax_base_price_in_usd;
    subscription_plan_dto_local_var->estimated_withholding_taxes_in_usd = estimated_withholding_taxes_in_usd;
    subscription_plan_dto_local_var->estimated_default_shipping_tax_in_usd = estimated_default_shipping_tax_in_usd;
    subscription_plan_dto_local_var->estimated_default_shipping_cost_in_usd = estimated_default_shipping_cost_in_usd;
    subscription_plan_dto_local_var->selected_tags = selected_tags;
    subscription_plan_dto_local_var->selected_types = selected_types;
    subscription_plan_dto_local_var->selected_brands = selected_brands;
    subscription_plan_dto_local_var->selected_categories = selected_categories;
    subscription_plan_dto_local_var->selected_tax_policies = selected_tax_policies;
    subscription_plan_dto_local_var->selected_pricing_rules = selected_pricing_rules;
    subscription_plan_dto_local_var->selected_refund_policies = selected_refund_policies;
    subscription_plan_dto_local_var->selected_return_policies = selected_return_policies;
    subscription_plan_dto_local_var->selected_pricing_policies = selected_pricing_policies;
    subscription_plan_dto_local_var->selected_google_categories = selected_google_categories;
    subscription_plan_dto_local_var->selected_warranty_policies = selected_warranty_policies;
    subscription_plan_dto_local_var->selected_shipment_policies = selected_shipment_policies;
    subscription_plan_dto_local_var->selected_attributes_options = selected_attributes_options;
    subscription_plan_dto_local_var->selected_selling_margin_policies = selected_selling_margin_policies;
    subscription_plan_dto_local_var->allow_subscription_trials = allow_subscription_trials;
    subscription_plan_dto_local_var->is_perpetual_subscription = is_perpetual_subscription;
    subscription_plan_dto_local_var->trial_subscription_relative_expiration_in_days = trial_subscription_relative_expiration_in_days;
    subscription_plan_dto_local_var->standard_subscription_relative_expiration_in_days = standard_subscription_relative_expiration_in_days;
    subscription_plan_dto_local_var->subscriptions_certificate_id = subscriptions_certificate_id;

    return subscription_plan_dto_local_var;
}


void subscription_plan_dto_free(subscription_plan_dto_t *subscription_plan_dto) {
    if(NULL == subscription_plan_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (subscription_plan_dto->id) {
        free(subscription_plan_dto->id);
        subscription_plan_dto->id = NULL;
    }
    if (subscription_plan_dto->timestamp) {
        free(subscription_plan_dto->timestamp);
        subscription_plan_dto->timestamp = NULL;
    }
    if (subscription_plan_dto->sku) {
        free(subscription_plan_dto->sku);
        subscription_plan_dto->sku = NULL;
    }
    if (subscription_plan_dto->upc) {
        free(subscription_plan_dto->upc);
        subscription_plan_dto->upc = NULL;
    }
    if (subscription_plan_dto->ean) {
        free(subscription_plan_dto->ean);
        subscription_plan_dto->ean = NULL;
    }
    if (subscription_plan_dto->mpn) {
        free(subscription_plan_dto->mpn);
        subscription_plan_dto->mpn = NULL;
    }
    if (subscription_plan_dto->sk_us) {
        free(subscription_plan_dto->sk_us);
        subscription_plan_dto->sk_us = NULL;
    }
    if (subscription_plan_dto->isbn) {
        free(subscription_plan_dto->isbn);
        subscription_plan_dto->isbn = NULL;
    }
    if (subscription_plan_dto->up_cs) {
        free(subscription_plan_dto->up_cs);
        subscription_plan_dto->up_cs = NULL;
    }
    if (subscription_plan_dto->ea_ns) {
        free(subscription_plan_dto->ea_ns);
        subscription_plan_dto->ea_ns = NULL;
    }
    if (subscription_plan_dto->asin) {
        free(subscription_plan_dto->asin);
        subscription_plan_dto->asin = NULL;
    }
    if (subscription_plan_dto->gtin) {
        free(subscription_plan_dto->gtin);
        subscription_plan_dto->gtin = NULL;
    }
    if (subscription_plan_dto->mp_ns) {
        free(subscription_plan_dto->mp_ns);
        subscription_plan_dto->mp_ns = NULL;
    }
    if (subscription_plan_dto->part) {
        free(subscription_plan_dto->part);
        subscription_plan_dto->part = NULL;
    }
    if (subscription_plan_dto->name) {
        free(subscription_plan_dto->name);
        subscription_plan_dto->name = NULL;
    }
    if (subscription_plan_dto->isb_ns) {
        free(subscription_plan_dto->isb_ns);
        subscription_plan_dto->isb_ns = NULL;
    }
    if (subscription_plan_dto->asi_ns) {
        free(subscription_plan_dto->asi_ns);
        subscription_plan_dto->asi_ns = NULL;
    }
    if (subscription_plan_dto->gti_ns) {
        free(subscription_plan_dto->gti_ns);
        subscription_plan_dto->gti_ns = NULL;
    }
    if (subscription_plan_dto->model) {
        free(subscription_plan_dto->model);
        subscription_plan_dto->model = NULL;
    }
    if (subscription_plan_dto->title) {
        free(subscription_plan_dto->title);
        subscription_plan_dto->title = NULL;
    }
    if (subscription_plan_dto->color) {
        free(subscription_plan_dto->color);
        subscription_plan_dto->color = NULL;
    }
    if (subscription_plan_dto->isb_n13) {
        free(subscription_plan_dto->isb_n13);
        subscription_plan_dto->isb_n13 = NULL;
    }
    if (subscription_plan_dto->unspsc) {
        free(subscription_plan_dto->unspsc);
        subscription_plan_dto->unspsc = NULL;
    }
    if (subscription_plan_dto->unit_id) {
        free(subscription_plan_dto->unit_id);
        subscription_plan_dto->unit_id = NULL;
    }
    if (subscription_plan_dto->series) {
        free(subscription_plan_dto->series);
        subscription_plan_dto->series = NULL;
    }
    if (subscription_plan_dto->barcode) {
        free(subscription_plan_dto->barcode);
        subscription_plan_dto->barcode = NULL;
    }
    if (subscription_plan_dto->unsps_cs) {
        free(subscription_plan_dto->unsps_cs);
        subscription_plan_dto->unsps_cs = NULL;
    }
    if (subscription_plan_dto->pattern) {
        free(subscription_plan_dto->pattern);
        subscription_plan_dto->pattern = NULL;
    }
    if (subscription_plan_dto->summary) {
        free(subscription_plan_dto->summary);
        subscription_plan_dto->summary = NULL;
    }
    if (subscription_plan_dto->brand_id) {
        free(subscription_plan_dto->brand_id);
        subscription_plan_dto->brand_id = NULL;
    }
    if (subscription_plan_dto->features) {
        free(subscription_plan_dto->features);
        subscription_plan_dto->features = NULL;
    }
    if (subscription_plan_dto->material) {
        free(subscription_plan_dto->material);
        subscription_plan_dto->material = NULL;
    }
    if (subscription_plan_dto->tenant_id) {
        free(subscription_plan_dto->tenant_id);
        subscription_plan_dto->tenant_id = NULL;
    }
    if (subscription_plan_dto->permalink) {
        free(subscription_plan_dto->permalink);
        subscription_plan_dto->permalink = NULL;
    }
    if (subscription_plan_dto->brand_name) {
        free(subscription_plan_dto->brand_name);
        subscription_plan_dto->brand_name = NULL;
    }
    if (subscription_plan_dto->language_id) {
        free(subscription_plan_dto->language_id);
        subscription_plan_dto->language_id = NULL;
    }
    if (subscription_plan_dto->item_type_id) {
        free(subscription_plan_dto->item_type_id);
        subscription_plan_dto->item_type_id = NULL;
    }
    if (subscription_plan_dto->category_id) {
        free(subscription_plan_dto->category_id);
        subscription_plan_dto->category_id = NULL;
    }
    if (subscription_plan_dto->currency_id) {
        free(subscription_plan_dto->currency_id);
        subscription_plan_dto->currency_id = NULL;
    }
    if (subscription_plan_dto->unit_group_id) {
        free(subscription_plan_dto->unit_group_id);
        subscription_plan_dto->unit_group_id = NULL;
    }
    if (subscription_plan_dto->description) {
        free(subscription_plan_dto->description);
        subscription_plan_dto->description = NULL;
    }
    if (subscription_plan_dto->ingredients) {
        free(subscription_plan_dto->ingredients);
        subscription_plan_dto->ingredients = NULL;
    }
    if (subscription_plan_dto->release_date) {
        free(subscription_plan_dto->release_date);
        subscription_plan_dto->release_date = NULL;
    }
    if (subscription_plan_dto->enrollment_id) {
        free(subscription_plan_dto->enrollment_id);
        subscription_plan_dto->enrollment_id = NULL;
    }
    if (subscription_plan_dto->supplier_code) {
        free(subscription_plan_dto->supplier_code);
        subscription_plan_dto->supplier_code = NULL;
    }
    if (subscription_plan_dto->ships_to_rules) {
        free(subscription_plan_dto->ships_to_rules);
        subscription_plan_dto->ships_to_rules = NULL;
    }
    if (subscription_plan_dto->purchase_note) {
        free(subscription_plan_dto->purchase_note);
        subscription_plan_dto->purchase_note = NULL;
    }
    if (subscription_plan_dto->parent_item_id) {
        free(subscription_plan_dto->parent_item_id);
        subscription_plan_dto->parent_item_id = NULL;
    }
    if (subscription_plan_dto->item_type_name) {
        free(subscription_plan_dto->item_type_name);
        subscription_plan_dto->item_type_name = NULL;
    }
    if (subscription_plan_dto->discriminator) {
        free(subscription_plan_dto->discriminator);
        subscription_plan_dto->discriminator = NULL;
    }
    if (subscription_plan_dto->tariff_heading) {
        free(subscription_plan_dto->tariff_heading);
        subscription_plan_dto->tariff_heading = NULL;
    }
    if (subscription_plan_dto->nutrition_facts) {
        free(subscription_plan_dto->nutrition_facts);
        subscription_plan_dto->nutrition_facts = NULL;
    }
    if (subscription_plan_dto->mozaic_cover_url) {
        free(subscription_plan_dto->mozaic_cover_url);
        subscription_plan_dto->mozaic_cover_url = NULL;
    }
    if (subscription_plan_dto->package_content) {
        free(subscription_plan_dto->package_content);
        subscription_plan_dto->package_content = NULL;
    }
    if (subscription_plan_dto->youtube_video_id) {
        free(subscription_plan_dto->youtube_video_id);
        subscription_plan_dto->youtube_video_id = NULL;
    }
    if (subscription_plan_dto->primary_image_url) {
        free(subscription_plan_dto->primary_image_url);
        subscription_plan_dto->primary_image_url = NULL;
    }
    if (subscription_plan_dto->long_description) {
        free(subscription_plan_dto->long_description);
        subscription_plan_dto->long_description = NULL;
    }
    if (subscription_plan_dto->measurement_unit) {
        free(subscription_plan_dto->measurement_unit);
        subscription_plan_dto->measurement_unit = NULL;
    }
    if (subscription_plan_dto->short_description) {
        free(subscription_plan_dto->short_description);
        subscription_plan_dto->short_description = NULL;
    }
    if (subscription_plan_dto->google_categories) {
        free(subscription_plan_dto->google_categories);
        subscription_plan_dto->google_categories = NULL;
    }
    if (subscription_plan_dto->supplier_profile_id) {
        free(subscription_plan_dto->supplier_profile_id);
        subscription_plan_dto->supplier_profile_id = NULL;
    }
    if (subscription_plan_dto->shipping_country_id) {
        free(subscription_plan_dto->shipping_country_id);
        subscription_plan_dto->shipping_country_id = NULL;
    }
    if (subscription_plan_dto->system_requirements) {
        free(subscription_plan_dto->system_requirements);
        subscription_plan_dto->system_requirements = NULL;
    }
    if (subscription_plan_dto->custom_tax_description) {
        free(subscription_plan_dto->custom_tax_description);
        subscription_plan_dto->custom_tax_description = NULL;
    }
    if (subscription_plan_dto->official_description_url) {
        free(subscription_plan_dto->official_description_url);
        subscription_plan_dto->official_description_url = NULL;
    }
    if (subscription_plan_dto->energy_efficiency_rating) {
        free(subscription_plan_dto->energy_efficiency_rating);
        subscription_plan_dto->energy_efficiency_rating = NULL;
    }
    if (subscription_plan_dto->page_cover_background_url) {
        free(subscription_plan_dto->page_cover_background_url);
        subscription_plan_dto->page_cover_background_url = NULL;
    }
    if (subscription_plan_dto->primary_google_category_id) {
        free(subscription_plan_dto->primary_google_category_id);
        subscription_plan_dto->primary_google_category_id = NULL;
    }
    if (subscription_plan_dto->operating_system_supported) {
        free(subscription_plan_dto->operating_system_supported);
        subscription_plan_dto->operating_system_supported = NULL;
    }
    if (subscription_plan_dto->supported_operating_system) {
        free(subscription_plan_dto->supported_operating_system);
        subscription_plan_dto->supported_operating_system = NULL;
    }
    if (subscription_plan_dto->primary_google_category_name) {
        free(subscription_plan_dto->primary_google_category_name);
        subscription_plan_dto->primary_google_category_name = NULL;
    }
    if (subscription_plan_dto->auction_end) {
        free(subscription_plan_dto->auction_end);
        subscription_plan_dto->auction_end = NULL;
    }
    if (subscription_plan_dto->auction_start) {
        free(subscription_plan_dto->auction_start);
        subscription_plan_dto->auction_start = NULL;
    }
    if (subscription_plan_dto->published_date) {
        free(subscription_plan_dto->published_date);
        subscription_plan_dto->published_date = NULL;
    }
    if (subscription_plan_dto->deadline_discount_from_date) {
        free(subscription_plan_dto->deadline_discount_from_date);
        subscription_plan_dto->deadline_discount_from_date = NULL;
    }
    if (subscription_plan_dto->deadline_discount_due_date) {
        free(subscription_plan_dto->deadline_discount_due_date);
        subscription_plan_dto->deadline_discount_due_date = NULL;
    }
    if (subscription_plan_dto->last_fixed_prices_update_date_time) {
        free(subscription_plan_dto->last_fixed_prices_update_date_time);
        subscription_plan_dto->last_fixed_prices_update_date_time = NULL;
    }
    if (subscription_plan_dto->images) {
        list_ForEach(listEntry, subscription_plan_dto->images) {
            free(listEntry->data);
        }
        list_freeList(subscription_plan_dto->images);
        subscription_plan_dto->images = NULL;
    }
    if (subscription_plan_dto->selected_tags) {
        list_ForEach(listEntry, subscription_plan_dto->selected_tags) {
            free(listEntry->data);
        }
        list_freeList(subscription_plan_dto->selected_tags);
        subscription_plan_dto->selected_tags = NULL;
    }
    if (subscription_plan_dto->selected_types) {
        list_ForEach(listEntry, subscription_plan_dto->selected_types) {
            free(listEntry->data);
        }
        list_freeList(subscription_plan_dto->selected_types);
        subscription_plan_dto->selected_types = NULL;
    }
    if (subscription_plan_dto->selected_brands) {
        list_ForEach(listEntry, subscription_plan_dto->selected_brands) {
            free(listEntry->data);
        }
        list_freeList(subscription_plan_dto->selected_brands);
        subscription_plan_dto->selected_brands = NULL;
    }
    if (subscription_plan_dto->selected_categories) {
        list_ForEach(listEntry, subscription_plan_dto->selected_categories) {
            free(listEntry->data);
        }
        list_freeList(subscription_plan_dto->selected_categories);
        subscription_plan_dto->selected_categories = NULL;
    }
    if (subscription_plan_dto->selected_tax_policies) {
        list_ForEach(listEntry, subscription_plan_dto->selected_tax_policies) {
            free(listEntry->data);
        }
        list_freeList(subscription_plan_dto->selected_tax_policies);
        subscription_plan_dto->selected_tax_policies = NULL;
    }
    if (subscription_plan_dto->selected_pricing_rules) {
        list_ForEach(listEntry, subscription_plan_dto->selected_pricing_rules) {
            free(listEntry->data);
        }
        list_freeList(subscription_plan_dto->selected_pricing_rules);
        subscription_plan_dto->selected_pricing_rules = NULL;
    }
    if (subscription_plan_dto->selected_refund_policies) {
        list_ForEach(listEntry, subscription_plan_dto->selected_refund_policies) {
            free(listEntry->data);
        }
        list_freeList(subscription_plan_dto->selected_refund_policies);
        subscription_plan_dto->selected_refund_policies = NULL;
    }
    if (subscription_plan_dto->selected_return_policies) {
        list_ForEach(listEntry, subscription_plan_dto->selected_return_policies) {
            free(listEntry->data);
        }
        list_freeList(subscription_plan_dto->selected_return_policies);
        subscription_plan_dto->selected_return_policies = NULL;
    }
    if (subscription_plan_dto->selected_pricing_policies) {
        list_ForEach(listEntry, subscription_plan_dto->selected_pricing_policies) {
            free(listEntry->data);
        }
        list_freeList(subscription_plan_dto->selected_pricing_policies);
        subscription_plan_dto->selected_pricing_policies = NULL;
    }
    if (subscription_plan_dto->selected_google_categories) {
        list_ForEach(listEntry, subscription_plan_dto->selected_google_categories) {
            free(listEntry->data);
        }
        list_freeList(subscription_plan_dto->selected_google_categories);
        subscription_plan_dto->selected_google_categories = NULL;
    }
    if (subscription_plan_dto->selected_warranty_policies) {
        list_ForEach(listEntry, subscription_plan_dto->selected_warranty_policies) {
            free(listEntry->data);
        }
        list_freeList(subscription_plan_dto->selected_warranty_policies);
        subscription_plan_dto->selected_warranty_policies = NULL;
    }
    if (subscription_plan_dto->selected_shipment_policies) {
        list_ForEach(listEntry, subscription_plan_dto->selected_shipment_policies) {
            free(listEntry->data);
        }
        list_freeList(subscription_plan_dto->selected_shipment_policies);
        subscription_plan_dto->selected_shipment_policies = NULL;
    }
    if (subscription_plan_dto->selected_attributes_options) {
        list_ForEach(listEntry, subscription_plan_dto->selected_attributes_options) {
            free(listEntry->data);
        }
        list_freeList(subscription_plan_dto->selected_attributes_options);
        subscription_plan_dto->selected_attributes_options = NULL;
    }
    if (subscription_plan_dto->selected_selling_margin_policies) {
        list_ForEach(listEntry, subscription_plan_dto->selected_selling_margin_policies) {
            free(listEntry->data);
        }
        list_freeList(subscription_plan_dto->selected_selling_margin_policies);
        subscription_plan_dto->selected_selling_margin_policies = NULL;
    }
    if (subscription_plan_dto->subscriptions_certificate_id) {
        free(subscription_plan_dto->subscriptions_certificate_id);
        subscription_plan_dto->subscriptions_certificate_id = NULL;
    }
    free(subscription_plan_dto);
}

cJSON *subscription_plan_dto_convertToJSON(subscription_plan_dto_t *subscription_plan_dto) {
    cJSON *item = cJSON_CreateObject();

    // subscription_plan_dto->id
    if(subscription_plan_dto->id) {
    if(cJSON_AddStringToObject(item, "id", subscription_plan_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->timestamp
    if(subscription_plan_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", subscription_plan_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // subscription_plan_dto->sku
    if(subscription_plan_dto->sku) {
    if(cJSON_AddStringToObject(item, "sku", subscription_plan_dto->sku) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->upc
    if(subscription_plan_dto->upc) {
    if(cJSON_AddStringToObject(item, "upc", subscription_plan_dto->upc) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->ean
    if(subscription_plan_dto->ean) {
    if(cJSON_AddStringToObject(item, "ean", subscription_plan_dto->ean) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->mpn
    if(subscription_plan_dto->mpn) {
    if(cJSON_AddStringToObject(item, "mpn", subscription_plan_dto->mpn) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->sk_us
    if(subscription_plan_dto->sk_us) {
    if(cJSON_AddStringToObject(item, "skUs", subscription_plan_dto->sk_us) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->isbn
    if(subscription_plan_dto->isbn) {
    if(cJSON_AddStringToObject(item, "isbn", subscription_plan_dto->isbn) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->up_cs
    if(subscription_plan_dto->up_cs) {
    if(cJSON_AddStringToObject(item, "upCs", subscription_plan_dto->up_cs) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->ea_ns
    if(subscription_plan_dto->ea_ns) {
    if(cJSON_AddStringToObject(item, "eaNs", subscription_plan_dto->ea_ns) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->asin
    if(subscription_plan_dto->asin) {
    if(cJSON_AddStringToObject(item, "asin", subscription_plan_dto->asin) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->gtin
    if(subscription_plan_dto->gtin) {
    if(cJSON_AddStringToObject(item, "gtin", subscription_plan_dto->gtin) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->mp_ns
    if(subscription_plan_dto->mp_ns) {
    if(cJSON_AddStringToObject(item, "mpNs", subscription_plan_dto->mp_ns) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->part
    if(subscription_plan_dto->part) {
    if(cJSON_AddStringToObject(item, "part", subscription_plan_dto->part) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->name
    if(subscription_plan_dto->name) {
    if(cJSON_AddStringToObject(item, "name", subscription_plan_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->isb_ns
    if(subscription_plan_dto->isb_ns) {
    if(cJSON_AddStringToObject(item, "isbNs", subscription_plan_dto->isb_ns) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->asi_ns
    if(subscription_plan_dto->asi_ns) {
    if(cJSON_AddStringToObject(item, "asiNs", subscription_plan_dto->asi_ns) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->gti_ns
    if(subscription_plan_dto->gti_ns) {
    if(cJSON_AddStringToObject(item, "gtiNs", subscription_plan_dto->gti_ns) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->model
    if(subscription_plan_dto->model) {
    if(cJSON_AddStringToObject(item, "model", subscription_plan_dto->model) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->title
    if(subscription_plan_dto->title) {
    if(cJSON_AddStringToObject(item, "title", subscription_plan_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->color
    if(subscription_plan_dto->color) {
    if(cJSON_AddStringToObject(item, "color", subscription_plan_dto->color) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->isb_n13
    if(subscription_plan_dto->isb_n13) {
    if(cJSON_AddStringToObject(item, "isbN13", subscription_plan_dto->isb_n13) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->unspsc
    if(subscription_plan_dto->unspsc) {
    if(cJSON_AddStringToObject(item, "unspsc", subscription_plan_dto->unspsc) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->unit_id
    if(subscription_plan_dto->unit_id) {
    if(cJSON_AddStringToObject(item, "unitId", subscription_plan_dto->unit_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->series
    if(subscription_plan_dto->series) {
    if(cJSON_AddStringToObject(item, "series", subscription_plan_dto->series) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->barcode
    if(subscription_plan_dto->barcode) {
    if(cJSON_AddStringToObject(item, "barcode", subscription_plan_dto->barcode) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->unsps_cs
    if(subscription_plan_dto->unsps_cs) {
    if(cJSON_AddStringToObject(item, "unspsCs", subscription_plan_dto->unsps_cs) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->pattern
    if(subscription_plan_dto->pattern) {
    if(cJSON_AddStringToObject(item, "pattern", subscription_plan_dto->pattern) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->summary
    if(subscription_plan_dto->summary) {
    if(cJSON_AddStringToObject(item, "summary", subscription_plan_dto->summary) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->brand_id
    if(subscription_plan_dto->brand_id) {
    if(cJSON_AddStringToObject(item, "brandId", subscription_plan_dto->brand_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->features
    if(subscription_plan_dto->features) {
    if(cJSON_AddStringToObject(item, "features", subscription_plan_dto->features) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->material
    if(subscription_plan_dto->material) {
    if(cJSON_AddStringToObject(item, "material", subscription_plan_dto->material) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->tenant_id
    if(subscription_plan_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", subscription_plan_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->permalink
    if(subscription_plan_dto->permalink) {
    if(cJSON_AddStringToObject(item, "permalink", subscription_plan_dto->permalink) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->brand_name
    if(subscription_plan_dto->brand_name) {
    if(cJSON_AddStringToObject(item, "brandName", subscription_plan_dto->brand_name) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->language_id
    if(subscription_plan_dto->language_id) {
    if(cJSON_AddStringToObject(item, "languageId", subscription_plan_dto->language_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->item_type_id
    if(subscription_plan_dto->item_type_id) {
    if(cJSON_AddStringToObject(item, "itemTypeId", subscription_plan_dto->item_type_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->category_id
    if(subscription_plan_dto->category_id) {
    if(cJSON_AddStringToObject(item, "categoryId", subscription_plan_dto->category_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->currency_id
    if(subscription_plan_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", subscription_plan_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->unit_group_id
    if(subscription_plan_dto->unit_group_id) {
    if(cJSON_AddStringToObject(item, "unitGroupId", subscription_plan_dto->unit_group_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->description
    if(subscription_plan_dto->description) {
    if(cJSON_AddStringToObject(item, "description", subscription_plan_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->ingredients
    if(subscription_plan_dto->ingredients) {
    if(cJSON_AddStringToObject(item, "ingredients", subscription_plan_dto->ingredients) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->release_date
    if(subscription_plan_dto->release_date) {
    if(cJSON_AddStringToObject(item, "releaseDate", subscription_plan_dto->release_date) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->enrollment_id
    if(subscription_plan_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", subscription_plan_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->supplier_code
    if(subscription_plan_dto->supplier_code) {
    if(cJSON_AddStringToObject(item, "supplierCode", subscription_plan_dto->supplier_code) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->ships_to_rules
    if(subscription_plan_dto->ships_to_rules) {
    if(cJSON_AddStringToObject(item, "shipsToRules", subscription_plan_dto->ships_to_rules) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->purchase_note
    if(subscription_plan_dto->purchase_note) {
    if(cJSON_AddStringToObject(item, "purchaseNote", subscription_plan_dto->purchase_note) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->parent_item_id
    if(subscription_plan_dto->parent_item_id) {
    if(cJSON_AddStringToObject(item, "parentItemId", subscription_plan_dto->parent_item_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->item_type_name
    if(subscription_plan_dto->item_type_name) {
    if(cJSON_AddStringToObject(item, "itemTypeName", subscription_plan_dto->item_type_name) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->discriminator
    if(subscription_plan_dto->discriminator) {
    if(cJSON_AddStringToObject(item, "discriminator", subscription_plan_dto->discriminator) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->tariff_heading
    if(subscription_plan_dto->tariff_heading) {
    if(cJSON_AddStringToObject(item, "tariffHeading", subscription_plan_dto->tariff_heading) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->nutrition_facts
    if(subscription_plan_dto->nutrition_facts) {
    if(cJSON_AddStringToObject(item, "nutritionFacts", subscription_plan_dto->nutrition_facts) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->mozaic_cover_url
    if(subscription_plan_dto->mozaic_cover_url) {
    if(cJSON_AddStringToObject(item, "mozaicCoverUrl", subscription_plan_dto->mozaic_cover_url) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->package_content
    if(subscription_plan_dto->package_content) {
    if(cJSON_AddStringToObject(item, "packageContent", subscription_plan_dto->package_content) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->youtube_video_id
    if(subscription_plan_dto->youtube_video_id) {
    if(cJSON_AddStringToObject(item, "youtubeVideoId", subscription_plan_dto->youtube_video_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->primary_image_url
    if(subscription_plan_dto->primary_image_url) {
    if(cJSON_AddStringToObject(item, "primaryImageUrl", subscription_plan_dto->primary_image_url) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->long_description
    if(subscription_plan_dto->long_description) {
    if(cJSON_AddStringToObject(item, "longDescription", subscription_plan_dto->long_description) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->measurement_unit
    if(subscription_plan_dto->measurement_unit) {
    if(cJSON_AddStringToObject(item, "measurementUnit", subscription_plan_dto->measurement_unit) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->short_description
    if(subscription_plan_dto->short_description) {
    if(cJSON_AddStringToObject(item, "shortDescription", subscription_plan_dto->short_description) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->google_categories
    if(subscription_plan_dto->google_categories) {
    if(cJSON_AddStringToObject(item, "googleCategories", subscription_plan_dto->google_categories) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->supplier_profile_id
    if(subscription_plan_dto->supplier_profile_id) {
    if(cJSON_AddStringToObject(item, "supplierProfileId", subscription_plan_dto->supplier_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->shipping_country_id
    if(subscription_plan_dto->shipping_country_id) {
    if(cJSON_AddStringToObject(item, "shippingCountryId", subscription_plan_dto->shipping_country_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->system_requirements
    if(subscription_plan_dto->system_requirements) {
    if(cJSON_AddStringToObject(item, "systemRequirements", subscription_plan_dto->system_requirements) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->custom_tax_description
    if(subscription_plan_dto->custom_tax_description) {
    if(cJSON_AddStringToObject(item, "customTaxDescription", subscription_plan_dto->custom_tax_description) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->official_description_url
    if(subscription_plan_dto->official_description_url) {
    if(cJSON_AddStringToObject(item, "officialDescriptionUrl", subscription_plan_dto->official_description_url) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->energy_efficiency_rating
    if(subscription_plan_dto->energy_efficiency_rating) {
    if(cJSON_AddStringToObject(item, "energyEfficiencyRating", subscription_plan_dto->energy_efficiency_rating) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->page_cover_background_url
    if(subscription_plan_dto->page_cover_background_url) {
    if(cJSON_AddStringToObject(item, "pageCoverBackgroundUrl", subscription_plan_dto->page_cover_background_url) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->primary_google_category_id
    if(subscription_plan_dto->primary_google_category_id) {
    if(cJSON_AddStringToObject(item, "primaryGoogleCategoryId", subscription_plan_dto->primary_google_category_id) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->operating_system_supported
    if(subscription_plan_dto->operating_system_supported) {
    if(cJSON_AddStringToObject(item, "operatingSystemSupported", subscription_plan_dto->operating_system_supported) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->supported_operating_system
    if(subscription_plan_dto->supported_operating_system) {
    if(cJSON_AddStringToObject(item, "supportedOperatingSystem", subscription_plan_dto->supported_operating_system) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->primary_google_category_name
    if(subscription_plan_dto->primary_google_category_name) {
    if(cJSON_AddStringToObject(item, "primaryGoogleCategoryName", subscription_plan_dto->primary_google_category_name) == NULL) {
    goto fail; //String
    }
    }


    // subscription_plan_dto->hot
    if(subscription_plan_dto->hot) {
    if(cJSON_AddBoolToObject(item, "hot", subscription_plan_dto->hot) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->on_sale
    if(subscription_plan_dto->on_sale) {
    if(cJSON_AddBoolToObject(item, "onSale", subscription_plan_dto->on_sale) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->auction
    if(subscription_plan_dto->auction) {
    if(cJSON_AddBoolToObject(item, "auction", subscription_plan_dto->auction) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->deleted
    if(subscription_plan_dto->deleted) {
    if(cJSON_AddBoolToObject(item, "deleted", subscription_plan_dto->deleted) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->digital
    if(subscription_plan_dto->digital) {
    if(cJSON_AddBoolToObject(item, "digital", subscription_plan_dto->digital) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->pre_sale
    if(subscription_plan_dto->pre_sale) {
    if(cJSON_AddBoolToObject(item, "preSale", subscription_plan_dto->pre_sale) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->taxable
    if(subscription_plan_dto->taxable) {
    if(cJSON_AddBoolToObject(item, "taxable", subscription_plan_dto->taxable) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->in_stock
    if(subscription_plan_dto->in_stock) {
    if(cJSON_AddBoolToObject(item, "inStock", subscription_plan_dto->in_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->featured
    if(subscription_plan_dto->featured) {
    if(cJSON_AddBoolToObject(item, "featured", subscription_plan_dto->featured) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->trending
    if(subscription_plan_dto->trending) {
    if(cJSON_AddBoolToObject(item, "trending", subscription_plan_dto->trending) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->low_stock
    if(subscription_plan_dto->low_stock) {
    if(cJSON_AddBoolToObject(item, "lowStock", subscription_plan_dto->low_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->published
    if(subscription_plan_dto->published) {
    if(cJSON_AddBoolToObject(item, "published", subscription_plan_dto->published) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->by_request
    if(subscription_plan_dto->by_request) {
    if(cJSON_AddBoolToObject(item, "byRequest", subscription_plan_dto->by_request) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->on_discount
    if(subscription_plan_dto->on_discount) {
    if(cJSON_AddBoolToObject(item, "onDiscount", subscription_plan_dto->on_discount) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->is_daily_deal
    if(subscription_plan_dto->is_daily_deal) {
    if(cJSON_AddBoolToObject(item, "isDailyDeal", subscription_plan_dto->is_daily_deal) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->is_new_arrival
    if(subscription_plan_dto->is_new_arrival) {
    if(cJSON_AddBoolToObject(item, "isNewArrival", subscription_plan_dto->is_new_arrival) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->is_weekly_deal
    if(subscription_plan_dto->is_weekly_deal) {
    if(cJSON_AddBoolToObject(item, "isWeeklyDeal", subscription_plan_dto->is_weekly_deal) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->is_best_seller
    if(subscription_plan_dto->is_best_seller) {
    if(cJSON_AddBoolToObject(item, "isBestSeller", subscription_plan_dto->is_best_seller) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->is_monthly_deal
    if(subscription_plan_dto->is_monthly_deal) {
    if(cJSON_AddBoolToObject(item, "isMonthlyDeal", subscription_plan_dto->is_monthly_deal) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->has_variations
    if(subscription_plan_dto->has_variations) {
    if(cJSON_AddBoolToObject(item, "hasVariations", subscription_plan_dto->has_variations) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->is_fixed_discount
    if(subscription_plan_dto->is_fixed_discount) {
    if(cJSON_AddBoolToObject(item, "isFixedDiscount", subscription_plan_dto->is_fixed_discount) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->is_dealers_choice
    if(subscription_plan_dto->is_dealers_choice) {
    if(cJSON_AddBoolToObject(item, "isDealersChoice", subscription_plan_dto->is_dealers_choice) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->manage_inventory
    if(subscription_plan_dto->manage_inventory) {
    if(cJSON_AddBoolToObject(item, "manageInventory", subscription_plan_dto->manage_inventory) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->is_official_choice
    if(subscription_plan_dto->is_official_choice) {
    if(cJSON_AddBoolToObject(item, "isOfficialChoice", subscription_plan_dto->is_official_choice) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->valid_primary_image
    if(subscription_plan_dto->valid_primary_image) {
    if(cJSON_AddBoolToObject(item, "validPrimaryImage", subscription_plan_dto->valid_primary_image) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->is_deadline_discount
    if(subscription_plan_dto->is_deadline_discount) {
    if(cJSON_AddBoolToObject(item, "isDeadlineDiscount", subscription_plan_dto->is_deadline_discount) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->display_showcase_tab
    if(subscription_plan_dto->display_showcase_tab) {
    if(cJSON_AddBoolToObject(item, "displayShowcaseTab", subscription_plan_dto->display_showcase_tab) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->tax_included_in_price
    if(subscription_plan_dto->tax_included_in_price) {
    if(cJSON_AddBoolToObject(item, "taxIncludedInPrice", subscription_plan_dto->tax_included_in_price) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->is_product_of_the_week
    if(subscription_plan_dto->is_product_of_the_week) {
    if(cJSON_AddBoolToObject(item, "isProductOfTheWeek", subscription_plan_dto->is_product_of_the_week) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->is_product_of_the_month
    if(subscription_plan_dto->is_product_of_the_month) {
    if(cJSON_AddBoolToObject(item, "isProductOfTheMonth", subscription_plan_dto->is_product_of_the_month) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->is_percentage_discount
    if(subscription_plan_dto->is_percentage_discount) {
    if(cJSON_AddBoolToObject(item, "isPercentageDiscount", subscription_plan_dto->is_percentage_discount) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->display_on_global_mozaic
    if(subscription_plan_dto->display_on_global_mozaic) {
    if(cJSON_AddBoolToObject(item, "displayOnGlobalMozaic", subscription_plan_dto->display_on_global_mozaic) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->display_on_brands_mozaic
    if(subscription_plan_dto->display_on_brands_mozaic) {
    if(cJSON_AddBoolToObject(item, "displayOnBrandsMozaic", subscription_plan_dto->display_on_brands_mozaic) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->disable_default_policies
    if(subscription_plan_dto->disable_default_policies) {
    if(cJSON_AddBoolToObject(item, "disableDefaultPolicies", subscription_plan_dto->disable_default_policies) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->display_on_category_mozaic
    if(subscription_plan_dto->display_on_category_mozaic) {
    if(cJSON_AddBoolToObject(item, "displayOnCategoryMozaic", subscription_plan_dto->display_on_category_mozaic) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->display_description_editor
    if(subscription_plan_dto->display_description_editor) {
    if(cJSON_AddBoolToObject(item, "displayDescriptionEditor", subscription_plan_dto->display_description_editor) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->display_short_description_editor
    if(subscription_plan_dto->display_short_description_editor) {
    if(cJSON_AddBoolToObject(item, "displayShortDescriptionEditor", subscription_plan_dto->display_short_description_editor) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->display_on_banner_marketing_rotation
    if(subscription_plan_dto->display_on_banner_marketing_rotation) {
    if(cJSON_AddBoolToObject(item, "displayOnBannerMarketingRotation", subscription_plan_dto->display_on_banner_marketing_rotation) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->auction_end
    if(subscription_plan_dto->auction_end) {
    if(cJSON_AddStringToObject(item, "auctionEnd", subscription_plan_dto->auction_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // subscription_plan_dto->auction_start
    if(subscription_plan_dto->auction_start) {
    if(cJSON_AddStringToObject(item, "auctionStart", subscription_plan_dto->auction_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // subscription_plan_dto->published_date
    if(subscription_plan_dto->published_date) {
    if(cJSON_AddStringToObject(item, "publishedDate", subscription_plan_dto->published_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // subscription_plan_dto->deadline_discount_from_date
    if(subscription_plan_dto->deadline_discount_from_date) {
    if(cJSON_AddStringToObject(item, "deadlineDiscountFromDate", subscription_plan_dto->deadline_discount_from_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // subscription_plan_dto->deadline_discount_due_date
    if(subscription_plan_dto->deadline_discount_due_date) {
    if(cJSON_AddStringToObject(item, "deadlineDiscountDueDate", subscription_plan_dto->deadline_discount_due_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // subscription_plan_dto->last_fixed_prices_update_date_time
    if(subscription_plan_dto->last_fixed_prices_update_date_time) {
    if(cJSON_AddStringToObject(item, "lastFixedPricesUpdateDateTime", subscription_plan_dto->last_fixed_prices_update_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // subscription_plan_dto->images
    if(subscription_plan_dto->images) {
    cJSON *images = cJSON_AddArrayToObject(item, "images");
    if(images == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *imagesListEntry;
    list_ForEach(imagesListEntry, subscription_plan_dto->images) {
    if(cJSON_AddStringToObject(images, "", (char*)imagesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // subscription_plan_dto->views_count
    if(subscription_plan_dto->views_count) {
    if(cJSON_AddNumberToObject(item, "viewsCount", subscription_plan_dto->views_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->reviews_count
    if(subscription_plan_dto->reviews_count) {
    if(cJSON_AddNumberToObject(item, "reviewsCount", subscription_plan_dto->reviews_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->questions_count
    if(subscription_plan_dto->questions_count) {
    if(cJSON_AddNumberToObject(item, "questionsCount", subscription_plan_dto->questions_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->packaged_quantity
    if(subscription_plan_dto->packaged_quantity) {
    if(cJSON_AddNumberToObject(item, "packagedQuantity", subscription_plan_dto->packaged_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->reviews_avg
    if(subscription_plan_dto->reviews_avg) {
    if(cJSON_AddNumberToObject(item, "reviewsAvg", subscription_plan_dto->reviews_avg) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->recurrency
    if(subscription_plan_dto->recurrency) {
    if(cJSON_AddNumberToObject(item, "recurrency", subscription_plan_dto->recurrency) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->current_stock
    if(subscription_plan_dto->current_stock) {
    if(cJSON_AddNumberToObject(item, "currentStock", subscription_plan_dto->current_stock) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->width
    if(subscription_plan_dto->width) {
    if(cJSON_AddNumberToObject(item, "width", subscription_plan_dto->width) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->weight
    if(subscription_plan_dto->weight) {
    if(cJSON_AddNumberToObject(item, "weight", subscription_plan_dto->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->length
    if(subscription_plan_dto->length) {
    if(cJSON_AddNumberToObject(item, "length", subscription_plan_dto->length) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->height
    if(subscription_plan_dto->height) {
    if(cJSON_AddNumberToObject(item, "height", subscription_plan_dto->height) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->regular_price
    if(subscription_plan_dto->regular_price) {
    if(cJSON_AddNumberToObject(item, "regularPrice", subscription_plan_dto->regular_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->discount_price
    if(subscription_plan_dto->discount_price) {
    if(cJSON_AddNumberToObject(item, "discountPrice", subscription_plan_dto->discount_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->custom_tax_value
    if(subscription_plan_dto->custom_tax_value) {
    if(cJSON_AddNumberToObject(item, "customTaxValue", subscription_plan_dto->custom_tax_value) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->discount_amount
    if(subscription_plan_dto->discount_amount) {
    if(cJSON_AddNumberToObject(item, "discountAmount", subscription_plan_dto->discount_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->in_cart_quantity
    if(subscription_plan_dto->in_cart_quantity) {
    if(cJSON_AddNumberToObject(item, "inCartQuantity", subscription_plan_dto->in_cart_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->custom_tax_amount
    if(subscription_plan_dto->custom_tax_amount) {
    if(cJSON_AddNumberToObject(item, "customTaxAmount", subscription_plan_dto->custom_tax_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->discount_percentage
    if(subscription_plan_dto->discount_percentage) {
    if(cJSON_AddNumberToObject(item, "discountPercentage", subscription_plan_dto->discount_percentage) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->custom_tax_percentage
    if(subscription_plan_dto->custom_tax_percentage) {
    if(cJSON_AddNumberToObject(item, "customTaxPercentage", subscription_plan_dto->custom_tax_percentage) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->estimated_taxes_in_usd
    if(subscription_plan_dto->estimated_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedTaxesInUsd", subscription_plan_dto->estimated_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->estimated_profit_in_usd
    if(subscription_plan_dto->estimated_profit_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedProfitInUsd", subscription_plan_dto->estimated_profit_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->estimated_base_price_in_usd
    if(subscription_plan_dto->estimated_base_price_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedBasePriceInUsd", subscription_plan_dto->estimated_base_price_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->estimated_discounts_in_usd
    if(subscription_plan_dto->estimated_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedDiscountsInUsd", subscription_plan_dto->estimated_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->estimated_surcharges_in_usd
    if(subscription_plan_dto->estimated_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedSurchargesInUsd", subscription_plan_dto->estimated_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->estimated_payment_tax_in_usd
    if(subscription_plan_dto->estimated_payment_tax_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedPaymentTaxInUsd", subscription_plan_dto->estimated_payment_tax_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->estimated_total_price_in_usd
    if(subscription_plan_dto->estimated_total_price_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedTotalPriceInUsd", subscription_plan_dto->estimated_total_price_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->estimated_payment_cost_in_usd
    if(subscription_plan_dto->estimated_payment_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedPaymentCostInUsd", subscription_plan_dto->estimated_payment_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->estimated_deal_savings_in_usd
    if(subscription_plan_dto->estimated_deal_savings_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedDealSavingsInUsd", subscription_plan_dto->estimated_deal_savings_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->estimated_regular_price_in_usd
    if(subscription_plan_dto->estimated_regular_price_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedRegularPriceInUsd", subscription_plan_dto->estimated_regular_price_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->estimated_tax_base_price_in_usd
    if(subscription_plan_dto->estimated_tax_base_price_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedTaxBasePriceInUsd", subscription_plan_dto->estimated_tax_base_price_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->estimated_withholding_taxes_in_usd
    if(subscription_plan_dto->estimated_withholding_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedWithholdingTaxesInUsd", subscription_plan_dto->estimated_withholding_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->estimated_default_shipping_tax_in_usd
    if(subscription_plan_dto->estimated_default_shipping_tax_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedDefaultShippingTaxInUsd", subscription_plan_dto->estimated_default_shipping_tax_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->estimated_default_shipping_cost_in_usd
    if(subscription_plan_dto->estimated_default_shipping_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "estimatedDefaultShippingCostInUsd", subscription_plan_dto->estimated_default_shipping_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->selected_tags
    if(subscription_plan_dto->selected_tags) {
    cJSON *selected_tags = cJSON_AddArrayToObject(item, "selectedTags");
    if(selected_tags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_tagsListEntry;
    list_ForEach(selected_tagsListEntry, subscription_plan_dto->selected_tags) {
    if(cJSON_AddStringToObject(selected_tags, "", (char*)selected_tagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // subscription_plan_dto->selected_types
    if(subscription_plan_dto->selected_types) {
    cJSON *selected_types = cJSON_AddArrayToObject(item, "selectedTypes");
    if(selected_types == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_typesListEntry;
    list_ForEach(selected_typesListEntry, subscription_plan_dto->selected_types) {
    if(cJSON_AddStringToObject(selected_types, "", (char*)selected_typesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // subscription_plan_dto->selected_brands
    if(subscription_plan_dto->selected_brands) {
    cJSON *selected_brands = cJSON_AddArrayToObject(item, "selectedBrands");
    if(selected_brands == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_brandsListEntry;
    list_ForEach(selected_brandsListEntry, subscription_plan_dto->selected_brands) {
    if(cJSON_AddStringToObject(selected_brands, "", (char*)selected_brandsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // subscription_plan_dto->selected_categories
    if(subscription_plan_dto->selected_categories) {
    cJSON *selected_categories = cJSON_AddArrayToObject(item, "selectedCategories");
    if(selected_categories == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_categoriesListEntry;
    list_ForEach(selected_categoriesListEntry, subscription_plan_dto->selected_categories) {
    if(cJSON_AddStringToObject(selected_categories, "", (char*)selected_categoriesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // subscription_plan_dto->selected_tax_policies
    if(subscription_plan_dto->selected_tax_policies) {
    cJSON *selected_tax_policies = cJSON_AddArrayToObject(item, "selectedTaxPolicies");
    if(selected_tax_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_tax_policiesListEntry;
    list_ForEach(selected_tax_policiesListEntry, subscription_plan_dto->selected_tax_policies) {
    if(cJSON_AddStringToObject(selected_tax_policies, "", (char*)selected_tax_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // subscription_plan_dto->selected_pricing_rules
    if(subscription_plan_dto->selected_pricing_rules) {
    cJSON *selected_pricing_rules = cJSON_AddArrayToObject(item, "selectedPricingRules");
    if(selected_pricing_rules == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_pricing_rulesListEntry;
    list_ForEach(selected_pricing_rulesListEntry, subscription_plan_dto->selected_pricing_rules) {
    if(cJSON_AddStringToObject(selected_pricing_rules, "", (char*)selected_pricing_rulesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // subscription_plan_dto->selected_refund_policies
    if(subscription_plan_dto->selected_refund_policies) {
    cJSON *selected_refund_policies = cJSON_AddArrayToObject(item, "selectedRefundPolicies");
    if(selected_refund_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_refund_policiesListEntry;
    list_ForEach(selected_refund_policiesListEntry, subscription_plan_dto->selected_refund_policies) {
    if(cJSON_AddStringToObject(selected_refund_policies, "", (char*)selected_refund_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // subscription_plan_dto->selected_return_policies
    if(subscription_plan_dto->selected_return_policies) {
    cJSON *selected_return_policies = cJSON_AddArrayToObject(item, "selectedReturnPolicies");
    if(selected_return_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_return_policiesListEntry;
    list_ForEach(selected_return_policiesListEntry, subscription_plan_dto->selected_return_policies) {
    if(cJSON_AddStringToObject(selected_return_policies, "", (char*)selected_return_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // subscription_plan_dto->selected_pricing_policies
    if(subscription_plan_dto->selected_pricing_policies) {
    cJSON *selected_pricing_policies = cJSON_AddArrayToObject(item, "selectedPricingPolicies");
    if(selected_pricing_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_pricing_policiesListEntry;
    list_ForEach(selected_pricing_policiesListEntry, subscription_plan_dto->selected_pricing_policies) {
    if(cJSON_AddStringToObject(selected_pricing_policies, "", (char*)selected_pricing_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // subscription_plan_dto->selected_google_categories
    if(subscription_plan_dto->selected_google_categories) {
    cJSON *selected_google_categories = cJSON_AddArrayToObject(item, "selectedGoogleCategories");
    if(selected_google_categories == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_google_categoriesListEntry;
    list_ForEach(selected_google_categoriesListEntry, subscription_plan_dto->selected_google_categories) {
    if(cJSON_AddStringToObject(selected_google_categories, "", (char*)selected_google_categoriesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // subscription_plan_dto->selected_warranty_policies
    if(subscription_plan_dto->selected_warranty_policies) {
    cJSON *selected_warranty_policies = cJSON_AddArrayToObject(item, "selectedWarrantyPolicies");
    if(selected_warranty_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_warranty_policiesListEntry;
    list_ForEach(selected_warranty_policiesListEntry, subscription_plan_dto->selected_warranty_policies) {
    if(cJSON_AddStringToObject(selected_warranty_policies, "", (char*)selected_warranty_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // subscription_plan_dto->selected_shipment_policies
    if(subscription_plan_dto->selected_shipment_policies) {
    cJSON *selected_shipment_policies = cJSON_AddArrayToObject(item, "selectedShipmentPolicies");
    if(selected_shipment_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_shipment_policiesListEntry;
    list_ForEach(selected_shipment_policiesListEntry, subscription_plan_dto->selected_shipment_policies) {
    if(cJSON_AddStringToObject(selected_shipment_policies, "", (char*)selected_shipment_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // subscription_plan_dto->selected_attributes_options
    if(subscription_plan_dto->selected_attributes_options) {
    cJSON *selected_attributes_options = cJSON_AddArrayToObject(item, "selectedAttributesOptions");
    if(selected_attributes_options == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_attributes_optionsListEntry;
    list_ForEach(selected_attributes_optionsListEntry, subscription_plan_dto->selected_attributes_options) {
    if(cJSON_AddStringToObject(selected_attributes_options, "", (char*)selected_attributes_optionsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // subscription_plan_dto->selected_selling_margin_policies
    if(subscription_plan_dto->selected_selling_margin_policies) {
    cJSON *selected_selling_margin_policies = cJSON_AddArrayToObject(item, "selectedSellingMarginPolicies");
    if(selected_selling_margin_policies == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_selling_margin_policiesListEntry;
    list_ForEach(selected_selling_margin_policiesListEntry, subscription_plan_dto->selected_selling_margin_policies) {
    if(cJSON_AddStringToObject(selected_selling_margin_policies, "", (char*)selected_selling_margin_policiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // subscription_plan_dto->allow_subscription_trials
    if(subscription_plan_dto->allow_subscription_trials) {
    if(cJSON_AddBoolToObject(item, "allowSubscriptionTrials", subscription_plan_dto->allow_subscription_trials) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->is_perpetual_subscription
    if(subscription_plan_dto->is_perpetual_subscription) {
    if(cJSON_AddBoolToObject(item, "isPerpetualSubscription", subscription_plan_dto->is_perpetual_subscription) == NULL) {
    goto fail; //Bool
    }
    }


    // subscription_plan_dto->trial_subscription_relative_expiration_in_days
    if(subscription_plan_dto->trial_subscription_relative_expiration_in_days) {
    if(cJSON_AddNumberToObject(item, "trialSubscriptionRelativeExpirationInDays", subscription_plan_dto->trial_subscription_relative_expiration_in_days) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->standard_subscription_relative_expiration_in_days
    if(subscription_plan_dto->standard_subscription_relative_expiration_in_days) {
    if(cJSON_AddNumberToObject(item, "standardSubscriptionRelativeExpirationInDays", subscription_plan_dto->standard_subscription_relative_expiration_in_days) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscription_plan_dto->subscriptions_certificate_id
    if(subscription_plan_dto->subscriptions_certificate_id) {
    if(cJSON_AddStringToObject(item, "subscriptionsCertificateId", subscription_plan_dto->subscriptions_certificate_id) == NULL) {
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

subscription_plan_dto_t *subscription_plan_dto_parseFromJSON(cJSON *subscription_plan_dtoJSON){

    subscription_plan_dto_t *subscription_plan_dto_local_var = NULL;

    // define the local list for subscription_plan_dto->images
    list_t *imagesList = NULL;

    // define the local list for subscription_plan_dto->selected_tags
    list_t *selected_tagsList = NULL;

    // define the local list for subscription_plan_dto->selected_types
    list_t *selected_typesList = NULL;

    // define the local list for subscription_plan_dto->selected_brands
    list_t *selected_brandsList = NULL;

    // define the local list for subscription_plan_dto->selected_categories
    list_t *selected_categoriesList = NULL;

    // define the local list for subscription_plan_dto->selected_tax_policies
    list_t *selected_tax_policiesList = NULL;

    // define the local list for subscription_plan_dto->selected_pricing_rules
    list_t *selected_pricing_rulesList = NULL;

    // define the local list for subscription_plan_dto->selected_refund_policies
    list_t *selected_refund_policiesList = NULL;

    // define the local list for subscription_plan_dto->selected_return_policies
    list_t *selected_return_policiesList = NULL;

    // define the local list for subscription_plan_dto->selected_pricing_policies
    list_t *selected_pricing_policiesList = NULL;

    // define the local list for subscription_plan_dto->selected_google_categories
    list_t *selected_google_categoriesList = NULL;

    // define the local list for subscription_plan_dto->selected_warranty_policies
    list_t *selected_warranty_policiesList = NULL;

    // define the local list for subscription_plan_dto->selected_shipment_policies
    list_t *selected_shipment_policiesList = NULL;

    // define the local list for subscription_plan_dto->selected_attributes_options
    list_t *selected_attributes_optionsList = NULL;

    // define the local list for subscription_plan_dto->selected_selling_margin_policies
    list_t *selected_selling_margin_policiesList = NULL;

    // subscription_plan_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // subscription_plan_dto->sku
    cJSON *sku = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "sku");
    if (sku) { 
    if(!cJSON_IsString(sku) && !cJSON_IsNull(sku))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->upc
    cJSON *upc = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "upc");
    if (upc) { 
    if(!cJSON_IsString(upc) && !cJSON_IsNull(upc))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->ean
    cJSON *ean = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "ean");
    if (ean) { 
    if(!cJSON_IsString(ean) && !cJSON_IsNull(ean))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->mpn
    cJSON *mpn = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "mpn");
    if (mpn) { 
    if(!cJSON_IsString(mpn) && !cJSON_IsNull(mpn))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->sk_us
    cJSON *sk_us = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "skUs");
    if (sk_us) { 
    if(!cJSON_IsString(sk_us) && !cJSON_IsNull(sk_us))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->isbn
    cJSON *isbn = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "isbn");
    if (isbn) { 
    if(!cJSON_IsString(isbn) && !cJSON_IsNull(isbn))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->up_cs
    cJSON *up_cs = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "upCs");
    if (up_cs) { 
    if(!cJSON_IsString(up_cs) && !cJSON_IsNull(up_cs))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->ea_ns
    cJSON *ea_ns = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "eaNs");
    if (ea_ns) { 
    if(!cJSON_IsString(ea_ns) && !cJSON_IsNull(ea_ns))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->asin
    cJSON *asin = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "asin");
    if (asin) { 
    if(!cJSON_IsString(asin) && !cJSON_IsNull(asin))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->gtin
    cJSON *gtin = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "gtin");
    if (gtin) { 
    if(!cJSON_IsString(gtin) && !cJSON_IsNull(gtin))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->mp_ns
    cJSON *mp_ns = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "mpNs");
    if (mp_ns) { 
    if(!cJSON_IsString(mp_ns) && !cJSON_IsNull(mp_ns))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->part
    cJSON *part = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "part");
    if (part) { 
    if(!cJSON_IsString(part) && !cJSON_IsNull(part))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->isb_ns
    cJSON *isb_ns = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "isbNs");
    if (isb_ns) { 
    if(!cJSON_IsString(isb_ns) && !cJSON_IsNull(isb_ns))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->asi_ns
    cJSON *asi_ns = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "asiNs");
    if (asi_ns) { 
    if(!cJSON_IsString(asi_ns) && !cJSON_IsNull(asi_ns))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->gti_ns
    cJSON *gti_ns = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "gtiNs");
    if (gti_ns) { 
    if(!cJSON_IsString(gti_ns) && !cJSON_IsNull(gti_ns))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "model");
    if (model) { 
    if(!cJSON_IsString(model) && !cJSON_IsNull(model))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->color
    cJSON *color = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "color");
    if (color) { 
    if(!cJSON_IsString(color) && !cJSON_IsNull(color))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->isb_n13
    cJSON *isb_n13 = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "isbN13");
    if (isb_n13) { 
    if(!cJSON_IsString(isb_n13) && !cJSON_IsNull(isb_n13))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->unspsc
    cJSON *unspsc = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "unspsc");
    if (unspsc) { 
    if(!cJSON_IsString(unspsc) && !cJSON_IsNull(unspsc))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->unit_id
    cJSON *unit_id = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "unitId");
    if (unit_id) { 
    if(!cJSON_IsString(unit_id) && !cJSON_IsNull(unit_id))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->series
    cJSON *series = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "series");
    if (series) { 
    if(!cJSON_IsString(series) && !cJSON_IsNull(series))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->barcode
    cJSON *barcode = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "barcode");
    if (barcode) { 
    if(!cJSON_IsString(barcode) && !cJSON_IsNull(barcode))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->unsps_cs
    cJSON *unsps_cs = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "unspsCs");
    if (unsps_cs) { 
    if(!cJSON_IsString(unsps_cs) && !cJSON_IsNull(unsps_cs))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->pattern
    cJSON *pattern = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "pattern");
    if (pattern) { 
    if(!cJSON_IsString(pattern) && !cJSON_IsNull(pattern))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->summary
    cJSON *summary = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "summary");
    if (summary) { 
    if(!cJSON_IsString(summary) && !cJSON_IsNull(summary))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->brand_id
    cJSON *brand_id = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "brandId");
    if (brand_id) { 
    if(!cJSON_IsString(brand_id) && !cJSON_IsNull(brand_id))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->features
    cJSON *features = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "features");
    if (features) { 
    if(!cJSON_IsString(features) && !cJSON_IsNull(features))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->material
    cJSON *material = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "material");
    if (material) { 
    if(!cJSON_IsString(material) && !cJSON_IsNull(material))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->permalink
    cJSON *permalink = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "permalink");
    if (permalink) { 
    if(!cJSON_IsString(permalink) && !cJSON_IsNull(permalink))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->brand_name
    cJSON *brand_name = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "brandName");
    if (brand_name) { 
    if(!cJSON_IsString(brand_name) && !cJSON_IsNull(brand_name))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->language_id
    cJSON *language_id = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "languageId");
    if (language_id) { 
    if(!cJSON_IsString(language_id) && !cJSON_IsNull(language_id))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->item_type_id
    cJSON *item_type_id = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "itemTypeId");
    if (item_type_id) { 
    if(!cJSON_IsString(item_type_id) && !cJSON_IsNull(item_type_id))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->category_id
    cJSON *category_id = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "categoryId");
    if (category_id) { 
    if(!cJSON_IsString(category_id) && !cJSON_IsNull(category_id))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->unit_group_id
    cJSON *unit_group_id = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "unitGroupId");
    if (unit_group_id) { 
    if(!cJSON_IsString(unit_group_id) && !cJSON_IsNull(unit_group_id))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->ingredients
    cJSON *ingredients = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "ingredients");
    if (ingredients) { 
    if(!cJSON_IsString(ingredients) && !cJSON_IsNull(ingredients))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->release_date
    cJSON *release_date = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "releaseDate");
    if (release_date) { 
    if(!cJSON_IsString(release_date) && !cJSON_IsNull(release_date))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->supplier_code
    cJSON *supplier_code = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "supplierCode");
    if (supplier_code) { 
    if(!cJSON_IsString(supplier_code) && !cJSON_IsNull(supplier_code))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->ships_to_rules
    cJSON *ships_to_rules = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "shipsToRules");
    if (ships_to_rules) { 
    if(!cJSON_IsString(ships_to_rules) && !cJSON_IsNull(ships_to_rules))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->purchase_note
    cJSON *purchase_note = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "purchaseNote");
    if (purchase_note) { 
    if(!cJSON_IsString(purchase_note) && !cJSON_IsNull(purchase_note))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->parent_item_id
    cJSON *parent_item_id = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "parentItemId");
    if (parent_item_id) { 
    if(!cJSON_IsString(parent_item_id) && !cJSON_IsNull(parent_item_id))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->item_type_name
    cJSON *item_type_name = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "itemTypeName");
    if (item_type_name) { 
    if(!cJSON_IsString(item_type_name) && !cJSON_IsNull(item_type_name))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->discriminator
    cJSON *discriminator = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "discriminator");
    if (discriminator) { 
    if(!cJSON_IsString(discriminator) && !cJSON_IsNull(discriminator))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->tariff_heading
    cJSON *tariff_heading = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "tariffHeading");
    if (tariff_heading) { 
    if(!cJSON_IsString(tariff_heading) && !cJSON_IsNull(tariff_heading))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->nutrition_facts
    cJSON *nutrition_facts = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "nutritionFacts");
    if (nutrition_facts) { 
    if(!cJSON_IsString(nutrition_facts) && !cJSON_IsNull(nutrition_facts))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->mozaic_cover_url
    cJSON *mozaic_cover_url = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "mozaicCoverUrl");
    if (mozaic_cover_url) { 
    if(!cJSON_IsString(mozaic_cover_url) && !cJSON_IsNull(mozaic_cover_url))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->package_content
    cJSON *package_content = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "packageContent");
    if (package_content) { 
    if(!cJSON_IsString(package_content) && !cJSON_IsNull(package_content))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->youtube_video_id
    cJSON *youtube_video_id = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "youtubeVideoId");
    if (youtube_video_id) { 
    if(!cJSON_IsString(youtube_video_id) && !cJSON_IsNull(youtube_video_id))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->primary_image_url
    cJSON *primary_image_url = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "primaryImageUrl");
    if (primary_image_url) { 
    if(!cJSON_IsString(primary_image_url) && !cJSON_IsNull(primary_image_url))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->long_description
    cJSON *long_description = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "longDescription");
    if (long_description) { 
    if(!cJSON_IsString(long_description) && !cJSON_IsNull(long_description))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->measurement_unit
    cJSON *measurement_unit = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "measurementUnit");
    if (measurement_unit) { 
    if(!cJSON_IsString(measurement_unit) && !cJSON_IsNull(measurement_unit))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->short_description
    cJSON *short_description = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "shortDescription");
    if (short_description) { 
    if(!cJSON_IsString(short_description) && !cJSON_IsNull(short_description))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->google_categories
    cJSON *google_categories = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "googleCategories");
    if (google_categories) { 
    if(!cJSON_IsString(google_categories) && !cJSON_IsNull(google_categories))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->supplier_profile_id
    cJSON *supplier_profile_id = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "supplierProfileId");
    if (supplier_profile_id) { 
    if(!cJSON_IsString(supplier_profile_id) && !cJSON_IsNull(supplier_profile_id))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->shipping_country_id
    cJSON *shipping_country_id = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "shippingCountryId");
    if (shipping_country_id) { 
    if(!cJSON_IsString(shipping_country_id) && !cJSON_IsNull(shipping_country_id))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->system_requirements
    cJSON *system_requirements = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "systemRequirements");
    if (system_requirements) { 
    if(!cJSON_IsString(system_requirements) && !cJSON_IsNull(system_requirements))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->custom_tax_description
    cJSON *custom_tax_description = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "customTaxDescription");
    if (custom_tax_description) { 
    if(!cJSON_IsString(custom_tax_description) && !cJSON_IsNull(custom_tax_description))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->official_description_url
    cJSON *official_description_url = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "officialDescriptionUrl");
    if (official_description_url) { 
    if(!cJSON_IsString(official_description_url) && !cJSON_IsNull(official_description_url))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->energy_efficiency_rating
    cJSON *energy_efficiency_rating = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "energyEfficiencyRating");
    if (energy_efficiency_rating) { 
    if(!cJSON_IsString(energy_efficiency_rating) && !cJSON_IsNull(energy_efficiency_rating))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->page_cover_background_url
    cJSON *page_cover_background_url = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "pageCoverBackgroundUrl");
    if (page_cover_background_url) { 
    if(!cJSON_IsString(page_cover_background_url) && !cJSON_IsNull(page_cover_background_url))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->primary_google_category_id
    cJSON *primary_google_category_id = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "primaryGoogleCategoryId");
    if (primary_google_category_id) { 
    if(!cJSON_IsString(primary_google_category_id) && !cJSON_IsNull(primary_google_category_id))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->operating_system_supported
    cJSON *operating_system_supported = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "operatingSystemSupported");
    if (operating_system_supported) { 
    if(!cJSON_IsString(operating_system_supported) && !cJSON_IsNull(operating_system_supported))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->supported_operating_system
    cJSON *supported_operating_system = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "supportedOperatingSystem");
    if (supported_operating_system) { 
    if(!cJSON_IsString(supported_operating_system) && !cJSON_IsNull(supported_operating_system))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->primary_google_category_name
    cJSON *primary_google_category_name = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "primaryGoogleCategoryName");
    if (primary_google_category_name) { 
    if(!cJSON_IsString(primary_google_category_name) && !cJSON_IsNull(primary_google_category_name))
    {
    goto end; //String
    }
    }

    // subscription_plan_dto->hot
    cJSON *hot = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "hot");
    if (hot) { 
    if(!cJSON_IsBool(hot))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->on_sale
    cJSON *on_sale = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "onSale");
    if (on_sale) { 
    if(!cJSON_IsBool(on_sale))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->auction
    cJSON *auction = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "auction");
    if (auction) { 
    if(!cJSON_IsBool(auction))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->deleted
    cJSON *deleted = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "deleted");
    if (deleted) { 
    if(!cJSON_IsBool(deleted))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->digital
    cJSON *digital = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "digital");
    if (digital) { 
    if(!cJSON_IsBool(digital))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->pre_sale
    cJSON *pre_sale = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "preSale");
    if (pre_sale) { 
    if(!cJSON_IsBool(pre_sale))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->taxable
    cJSON *taxable = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "taxable");
    if (taxable) { 
    if(!cJSON_IsBool(taxable))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->in_stock
    cJSON *in_stock = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "inStock");
    if (in_stock) { 
    if(!cJSON_IsBool(in_stock))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->featured
    cJSON *featured = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "featured");
    if (featured) { 
    if(!cJSON_IsBool(featured))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->trending
    cJSON *trending = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "trending");
    if (trending) { 
    if(!cJSON_IsBool(trending))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->low_stock
    cJSON *low_stock = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "lowStock");
    if (low_stock) { 
    if(!cJSON_IsBool(low_stock))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->published
    cJSON *published = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "published");
    if (published) { 
    if(!cJSON_IsBool(published))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->by_request
    cJSON *by_request = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "byRequest");
    if (by_request) { 
    if(!cJSON_IsBool(by_request))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->on_discount
    cJSON *on_discount = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "onDiscount");
    if (on_discount) { 
    if(!cJSON_IsBool(on_discount))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->is_daily_deal
    cJSON *is_daily_deal = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "isDailyDeal");
    if (is_daily_deal) { 
    if(!cJSON_IsBool(is_daily_deal))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->is_new_arrival
    cJSON *is_new_arrival = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "isNewArrival");
    if (is_new_arrival) { 
    if(!cJSON_IsBool(is_new_arrival))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->is_weekly_deal
    cJSON *is_weekly_deal = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "isWeeklyDeal");
    if (is_weekly_deal) { 
    if(!cJSON_IsBool(is_weekly_deal))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->is_best_seller
    cJSON *is_best_seller = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "isBestSeller");
    if (is_best_seller) { 
    if(!cJSON_IsBool(is_best_seller))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->is_monthly_deal
    cJSON *is_monthly_deal = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "isMonthlyDeal");
    if (is_monthly_deal) { 
    if(!cJSON_IsBool(is_monthly_deal))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->has_variations
    cJSON *has_variations = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "hasVariations");
    if (has_variations) { 
    if(!cJSON_IsBool(has_variations))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->is_fixed_discount
    cJSON *is_fixed_discount = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "isFixedDiscount");
    if (is_fixed_discount) { 
    if(!cJSON_IsBool(is_fixed_discount))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->is_dealers_choice
    cJSON *is_dealers_choice = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "isDealersChoice");
    if (is_dealers_choice) { 
    if(!cJSON_IsBool(is_dealers_choice))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->manage_inventory
    cJSON *manage_inventory = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "manageInventory");
    if (manage_inventory) { 
    if(!cJSON_IsBool(manage_inventory))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->is_official_choice
    cJSON *is_official_choice = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "isOfficialChoice");
    if (is_official_choice) { 
    if(!cJSON_IsBool(is_official_choice))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->valid_primary_image
    cJSON *valid_primary_image = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "validPrimaryImage");
    if (valid_primary_image) { 
    if(!cJSON_IsBool(valid_primary_image))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->is_deadline_discount
    cJSON *is_deadline_discount = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "isDeadlineDiscount");
    if (is_deadline_discount) { 
    if(!cJSON_IsBool(is_deadline_discount))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->display_showcase_tab
    cJSON *display_showcase_tab = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "displayShowcaseTab");
    if (display_showcase_tab) { 
    if(!cJSON_IsBool(display_showcase_tab))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->tax_included_in_price
    cJSON *tax_included_in_price = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "taxIncludedInPrice");
    if (tax_included_in_price) { 
    if(!cJSON_IsBool(tax_included_in_price))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->is_product_of_the_week
    cJSON *is_product_of_the_week = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "isProductOfTheWeek");
    if (is_product_of_the_week) { 
    if(!cJSON_IsBool(is_product_of_the_week))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->is_product_of_the_month
    cJSON *is_product_of_the_month = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "isProductOfTheMonth");
    if (is_product_of_the_month) { 
    if(!cJSON_IsBool(is_product_of_the_month))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->is_percentage_discount
    cJSON *is_percentage_discount = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "isPercentageDiscount");
    if (is_percentage_discount) { 
    if(!cJSON_IsBool(is_percentage_discount))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->display_on_global_mozaic
    cJSON *display_on_global_mozaic = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "displayOnGlobalMozaic");
    if (display_on_global_mozaic) { 
    if(!cJSON_IsBool(display_on_global_mozaic))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->display_on_brands_mozaic
    cJSON *display_on_brands_mozaic = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "displayOnBrandsMozaic");
    if (display_on_brands_mozaic) { 
    if(!cJSON_IsBool(display_on_brands_mozaic))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->disable_default_policies
    cJSON *disable_default_policies = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "disableDefaultPolicies");
    if (disable_default_policies) { 
    if(!cJSON_IsBool(disable_default_policies))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->display_on_category_mozaic
    cJSON *display_on_category_mozaic = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "displayOnCategoryMozaic");
    if (display_on_category_mozaic) { 
    if(!cJSON_IsBool(display_on_category_mozaic))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->display_description_editor
    cJSON *display_description_editor = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "displayDescriptionEditor");
    if (display_description_editor) { 
    if(!cJSON_IsBool(display_description_editor))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->display_short_description_editor
    cJSON *display_short_description_editor = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "displayShortDescriptionEditor");
    if (display_short_description_editor) { 
    if(!cJSON_IsBool(display_short_description_editor))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->display_on_banner_marketing_rotation
    cJSON *display_on_banner_marketing_rotation = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "displayOnBannerMarketingRotation");
    if (display_on_banner_marketing_rotation) { 
    if(!cJSON_IsBool(display_on_banner_marketing_rotation))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->auction_end
    cJSON *auction_end = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "auctionEnd");
    if (auction_end) { 
    if(!cJSON_IsString(auction_end) && !cJSON_IsNull(auction_end))
    {
    goto end; //DateTime
    }
    }

    // subscription_plan_dto->auction_start
    cJSON *auction_start = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "auctionStart");
    if (auction_start) { 
    if(!cJSON_IsString(auction_start) && !cJSON_IsNull(auction_start))
    {
    goto end; //DateTime
    }
    }

    // subscription_plan_dto->published_date
    cJSON *published_date = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "publishedDate");
    if (published_date) { 
    if(!cJSON_IsString(published_date) && !cJSON_IsNull(published_date))
    {
    goto end; //DateTime
    }
    }

    // subscription_plan_dto->deadline_discount_from_date
    cJSON *deadline_discount_from_date = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "deadlineDiscountFromDate");
    if (deadline_discount_from_date) { 
    if(!cJSON_IsString(deadline_discount_from_date) && !cJSON_IsNull(deadline_discount_from_date))
    {
    goto end; //DateTime
    }
    }

    // subscription_plan_dto->deadline_discount_due_date
    cJSON *deadline_discount_due_date = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "deadlineDiscountDueDate");
    if (deadline_discount_due_date) { 
    if(!cJSON_IsString(deadline_discount_due_date) && !cJSON_IsNull(deadline_discount_due_date))
    {
    goto end; //DateTime
    }
    }

    // subscription_plan_dto->last_fixed_prices_update_date_time
    cJSON *last_fixed_prices_update_date_time = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "lastFixedPricesUpdateDateTime");
    if (last_fixed_prices_update_date_time) { 
    if(!cJSON_IsString(last_fixed_prices_update_date_time) && !cJSON_IsNull(last_fixed_prices_update_date_time))
    {
    goto end; //DateTime
    }
    }

    // subscription_plan_dto->images
    cJSON *images = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "images");
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

    // subscription_plan_dto->views_count
    cJSON *views_count = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "viewsCount");
    if (views_count) { 
    if(!cJSON_IsNumber(views_count))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->reviews_count
    cJSON *reviews_count = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "reviewsCount");
    if (reviews_count) { 
    if(!cJSON_IsNumber(reviews_count))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->questions_count
    cJSON *questions_count = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "questionsCount");
    if (questions_count) { 
    if(!cJSON_IsNumber(questions_count))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->packaged_quantity
    cJSON *packaged_quantity = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "packagedQuantity");
    if (packaged_quantity) { 
    if(!cJSON_IsNumber(packaged_quantity))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->reviews_avg
    cJSON *reviews_avg = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "reviewsAvg");
    if (reviews_avg) { 
    if(!cJSON_IsNumber(reviews_avg))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->recurrency
    cJSON *recurrency = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "recurrency");
    if (recurrency) { 
    if(!cJSON_IsNumber(recurrency))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->current_stock
    cJSON *current_stock = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "currentStock");
    if (current_stock) { 
    if(!cJSON_IsNumber(current_stock))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->width
    cJSON *width = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "width");
    if (width) { 
    if(!cJSON_IsNumber(width))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "weight");
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->length
    cJSON *length = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "length");
    if (length) { 
    if(!cJSON_IsNumber(length))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->height
    cJSON *height = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "height");
    if (height) { 
    if(!cJSON_IsNumber(height))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->regular_price
    cJSON *regular_price = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "regularPrice");
    if (regular_price) { 
    if(!cJSON_IsNumber(regular_price))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->discount_price
    cJSON *discount_price = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "discountPrice");
    if (discount_price) { 
    if(!cJSON_IsNumber(discount_price))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->custom_tax_value
    cJSON *custom_tax_value = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "customTaxValue");
    if (custom_tax_value) { 
    if(!cJSON_IsNumber(custom_tax_value))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->discount_amount
    cJSON *discount_amount = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "discountAmount");
    if (discount_amount) { 
    if(!cJSON_IsNumber(discount_amount))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->in_cart_quantity
    cJSON *in_cart_quantity = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "inCartQuantity");
    if (in_cart_quantity) { 
    if(!cJSON_IsNumber(in_cart_quantity))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->custom_tax_amount
    cJSON *custom_tax_amount = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "customTaxAmount");
    if (custom_tax_amount) { 
    if(!cJSON_IsNumber(custom_tax_amount))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->discount_percentage
    cJSON *discount_percentage = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "discountPercentage");
    if (discount_percentage) { 
    if(!cJSON_IsNumber(discount_percentage))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->custom_tax_percentage
    cJSON *custom_tax_percentage = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "customTaxPercentage");
    if (custom_tax_percentage) { 
    if(!cJSON_IsNumber(custom_tax_percentage))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->estimated_taxes_in_usd
    cJSON *estimated_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "estimatedTaxesInUsd");
    if (estimated_taxes_in_usd) { 
    if(!cJSON_IsNumber(estimated_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->estimated_profit_in_usd
    cJSON *estimated_profit_in_usd = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "estimatedProfitInUsd");
    if (estimated_profit_in_usd) { 
    if(!cJSON_IsNumber(estimated_profit_in_usd))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->estimated_base_price_in_usd
    cJSON *estimated_base_price_in_usd = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "estimatedBasePriceInUsd");
    if (estimated_base_price_in_usd) { 
    if(!cJSON_IsNumber(estimated_base_price_in_usd))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->estimated_discounts_in_usd
    cJSON *estimated_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "estimatedDiscountsInUsd");
    if (estimated_discounts_in_usd) { 
    if(!cJSON_IsNumber(estimated_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->estimated_surcharges_in_usd
    cJSON *estimated_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "estimatedSurchargesInUsd");
    if (estimated_surcharges_in_usd) { 
    if(!cJSON_IsNumber(estimated_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->estimated_payment_tax_in_usd
    cJSON *estimated_payment_tax_in_usd = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "estimatedPaymentTaxInUsd");
    if (estimated_payment_tax_in_usd) { 
    if(!cJSON_IsNumber(estimated_payment_tax_in_usd))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->estimated_total_price_in_usd
    cJSON *estimated_total_price_in_usd = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "estimatedTotalPriceInUsd");
    if (estimated_total_price_in_usd) { 
    if(!cJSON_IsNumber(estimated_total_price_in_usd))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->estimated_payment_cost_in_usd
    cJSON *estimated_payment_cost_in_usd = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "estimatedPaymentCostInUsd");
    if (estimated_payment_cost_in_usd) { 
    if(!cJSON_IsNumber(estimated_payment_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->estimated_deal_savings_in_usd
    cJSON *estimated_deal_savings_in_usd = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "estimatedDealSavingsInUsd");
    if (estimated_deal_savings_in_usd) { 
    if(!cJSON_IsNumber(estimated_deal_savings_in_usd))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->estimated_regular_price_in_usd
    cJSON *estimated_regular_price_in_usd = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "estimatedRegularPriceInUsd");
    if (estimated_regular_price_in_usd) { 
    if(!cJSON_IsNumber(estimated_regular_price_in_usd))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->estimated_tax_base_price_in_usd
    cJSON *estimated_tax_base_price_in_usd = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "estimatedTaxBasePriceInUsd");
    if (estimated_tax_base_price_in_usd) { 
    if(!cJSON_IsNumber(estimated_tax_base_price_in_usd))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->estimated_withholding_taxes_in_usd
    cJSON *estimated_withholding_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "estimatedWithholdingTaxesInUsd");
    if (estimated_withholding_taxes_in_usd) { 
    if(!cJSON_IsNumber(estimated_withholding_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->estimated_default_shipping_tax_in_usd
    cJSON *estimated_default_shipping_tax_in_usd = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "estimatedDefaultShippingTaxInUsd");
    if (estimated_default_shipping_tax_in_usd) { 
    if(!cJSON_IsNumber(estimated_default_shipping_tax_in_usd))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->estimated_default_shipping_cost_in_usd
    cJSON *estimated_default_shipping_cost_in_usd = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "estimatedDefaultShippingCostInUsd");
    if (estimated_default_shipping_cost_in_usd) { 
    if(!cJSON_IsNumber(estimated_default_shipping_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->selected_tags
    cJSON *selected_tags = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "selectedTags");
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

    // subscription_plan_dto->selected_types
    cJSON *selected_types = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "selectedTypes");
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

    // subscription_plan_dto->selected_brands
    cJSON *selected_brands = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "selectedBrands");
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

    // subscription_plan_dto->selected_categories
    cJSON *selected_categories = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "selectedCategories");
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

    // subscription_plan_dto->selected_tax_policies
    cJSON *selected_tax_policies = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "selectedTaxPolicies");
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

    // subscription_plan_dto->selected_pricing_rules
    cJSON *selected_pricing_rules = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "selectedPricingRules");
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

    // subscription_plan_dto->selected_refund_policies
    cJSON *selected_refund_policies = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "selectedRefundPolicies");
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

    // subscription_plan_dto->selected_return_policies
    cJSON *selected_return_policies = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "selectedReturnPolicies");
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

    // subscription_plan_dto->selected_pricing_policies
    cJSON *selected_pricing_policies = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "selectedPricingPolicies");
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

    // subscription_plan_dto->selected_google_categories
    cJSON *selected_google_categories = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "selectedGoogleCategories");
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

    // subscription_plan_dto->selected_warranty_policies
    cJSON *selected_warranty_policies = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "selectedWarrantyPolicies");
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

    // subscription_plan_dto->selected_shipment_policies
    cJSON *selected_shipment_policies = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "selectedShipmentPolicies");
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

    // subscription_plan_dto->selected_attributes_options
    cJSON *selected_attributes_options = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "selectedAttributesOptions");
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

    // subscription_plan_dto->selected_selling_margin_policies
    cJSON *selected_selling_margin_policies = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "selectedSellingMarginPolicies");
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

    // subscription_plan_dto->allow_subscription_trials
    cJSON *allow_subscription_trials = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "allowSubscriptionTrials");
    if (allow_subscription_trials) { 
    if(!cJSON_IsBool(allow_subscription_trials))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->is_perpetual_subscription
    cJSON *is_perpetual_subscription = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "isPerpetualSubscription");
    if (is_perpetual_subscription) { 
    if(!cJSON_IsBool(is_perpetual_subscription))
    {
    goto end; //Bool
    }
    }

    // subscription_plan_dto->trial_subscription_relative_expiration_in_days
    cJSON *trial_subscription_relative_expiration_in_days = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "trialSubscriptionRelativeExpirationInDays");
    if (trial_subscription_relative_expiration_in_days) { 
    if(!cJSON_IsNumber(trial_subscription_relative_expiration_in_days))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->standard_subscription_relative_expiration_in_days
    cJSON *standard_subscription_relative_expiration_in_days = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "standardSubscriptionRelativeExpirationInDays");
    if (standard_subscription_relative_expiration_in_days) { 
    if(!cJSON_IsNumber(standard_subscription_relative_expiration_in_days))
    {
    goto end; //Numeric
    }
    }

    // subscription_plan_dto->subscriptions_certificate_id
    cJSON *subscriptions_certificate_id = cJSON_GetObjectItemCaseSensitive(subscription_plan_dtoJSON, "subscriptionsCertificateId");
    if (subscriptions_certificate_id) { 
    if(!cJSON_IsString(subscriptions_certificate_id) && !cJSON_IsNull(subscriptions_certificate_id))
    {
    goto end; //String
    }
    }


    subscription_plan_dto_local_var = subscription_plan_dto_create (
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
        selected_selling_margin_policies ? selected_selling_margin_policiesList : NULL,
        allow_subscription_trials ? allow_subscription_trials->valueint : 0,
        is_perpetual_subscription ? is_perpetual_subscription->valueint : 0,
        trial_subscription_relative_expiration_in_days ? trial_subscription_relative_expiration_in_days->valuedouble : 0,
        standard_subscription_relative_expiration_in_days ? standard_subscription_relative_expiration_in_days->valuedouble : 0,
        subscriptions_certificate_id && !cJSON_IsNull(subscriptions_certificate_id) ? strdup(subscriptions_certificate_id->valuestring) : NULL
        );

    return subscription_plan_dto_local_var;
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
