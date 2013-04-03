<?php
$view = new view();
$view->name = 'carousel_front';
$view->description = '';
$view->tag = 'views_import';
$view->base_table = 'node';
$view->human_name = 'carousel_front';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
$handler->display->display_options['row_plugin'] = 'views_bootstrap_carousel_plugin_rows';
$handler->display->display_options['row_options']['image'] = 'field_pict';
$handler->display->display_options['row_options']['title'] = 'title';
$handler->display->display_options['row_options']['description'] = '';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Content: Pict */
$handler->display->display_options['fields']['field_pict']['id'] = 'field_pict';
$handler->display->display_options['fields']['field_pict']['table'] = 'field_data_field_pict';
$handler->display->display_options['fields']['field_pict']['field'] = 'field_pict';
$handler->display->display_options['fields']['field_pict']['label'] = '';
$handler->display->display_options['fields']['field_pict']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_pict']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_pict']['settings'] = array(
  'image_style' => 'carousel',
  'image_link' => '',
);
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'photo' => 'photo',
);
$translatables['carousel_front'] = array(
  t('Master'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
);

