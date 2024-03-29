<?php
/**
 * @file
 * fusion_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fusion_slideshow_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'fusion_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Fusion Slideshow';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'large-fusion-slideshow';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slide_image' => 0,
    'field_slide_teaser' => 0,
    'field_slide_link' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slide_image' => 0,
    'field_slide_teaser' => 0,
    'field_slide_link' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Slide image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => 'large_slideshow',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slide_image']['field_api_classes'] = 0;
  /* Field: Content: Teaser text */
  $handler->display->display_options['fields']['field_slide_teaser']['id'] = 'field_slide_teaser';
  $handler->display->display_options['fields']['field_slide_teaser']['table'] = 'field_data_field_slide_teaser';
  $handler->display->display_options['fields']['field_slide_teaser']['field'] = 'field_slide_teaser';
  $handler->display->display_options['fields']['field_slide_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_slide_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_teaser']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_teaser']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['field_api_classes'] = 0;
  /* Field: Content: Slide link */
  $handler->display->display_options['fields']['field_slide_link']['id'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['table'] = 'field_data_field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['field'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_link']['element_class'] = 'button';
  $handler->display->display_options['fields']['field_slide_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_link']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slide_link']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>[field_slide_teaser]<span class="button">[field_slide_link]</span>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'fusion-slide-content';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow_slide' => 'slideshow_slide',
  );

  /* Display: Large Slideshow */
  $handler = $view->new_display('block', 'Large Slideshow', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'large-fusion-slideshow';
  $handler->display->display_options['display_description'] = '940px wide slideshow';

  /* Display: Medium Slideshow */
  $handler = $view->new_display('block', 'Medium Slideshow', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'medium-fusion-slideshow';
  $handler->display->display_options['display_description'] = '460px wide slideshow';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Slide image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => 'medium_slideshow',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slide_image']['field_api_classes'] = 0;
  /* Field: Content: Teaser text */
  $handler->display->display_options['fields']['field_slide_teaser']['id'] = 'field_slide_teaser';
  $handler->display->display_options['fields']['field_slide_teaser']['table'] = 'field_data_field_slide_teaser';
  $handler->display->display_options['fields']['field_slide_teaser']['field'] = 'field_slide_teaser';
  $handler->display->display_options['fields']['field_slide_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_slide_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_teaser']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_teaser']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['field_api_classes'] = 0;
  /* Field: Content: Slide link */
  $handler->display->display_options['fields']['field_slide_link']['id'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['table'] = 'field_data_field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['field'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_link']['element_class'] = 'button';
  $handler->display->display_options['fields']['field_slide_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_link']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slide_link']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>[field_slide_teaser]<span class="button">[field_slide_link]</span>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'fusion-slide-content';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;

  /* Display: Small Slideshow */
  $handler = $view->new_display('block', 'Small Slideshow', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'small-fusion-slideshow';
  $handler->display->display_options['display_description'] = '220px wide slideshow';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Slide image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => 'small_slideshow',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slide_image']['field_api_classes'] = 0;
  /* Field: Content: Teaser text */
  $handler->display->display_options['fields']['field_slide_teaser']['id'] = 'field_slide_teaser';
  $handler->display->display_options['fields']['field_slide_teaser']['table'] = 'field_data_field_slide_teaser';
  $handler->display->display_options['fields']['field_slide_teaser']['field'] = 'field_slide_teaser';
  $handler->display->display_options['fields']['field_slide_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_slide_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_teaser']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_teaser']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['field_api_classes'] = 0;
  /* Field: Content: Slide link */
  $handler->display->display_options['fields']['field_slide_link']['id'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['table'] = 'field_data_field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['field'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_link']['element_class'] = 'button';
  $handler->display->display_options['fields']['field_slide_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_link']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slide_link']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>[field_slide_link]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'fusion-slide-content';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;

  /* Display: Homepage slideshow */
  $handler = $view->new_display('page', 'Homepage slideshow', 'page_1');
  $handler->display->display_options['display_description'] = '940px wide slideshow intended for use as site\'s front page';
  $handler->display->display_options['path'] = 'slideshow';
  $export['slideshow'] = $view;

  return $export;
}
