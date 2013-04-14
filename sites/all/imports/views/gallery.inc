<?php
$view = new view();
$view->name = 'gallery';
$view->description = '';
$view->tag = 'views_import';
$view->base_table = 'node';
$view->human_name = 'Gallery';
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
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'views_stapel_plugin_style';
$handler->display->display_options['style_options']['randomAngle'] = 1;
$handler->display->display_options['style_options']['delay'] = '50';
$handler->display->display_options['style_options']['gutter'] = '70';
$handler->display->display_options['style_options']['pileAngles'] = '5';
$handler->display->display_options['row_plugin'] = 'views_stapel_plugin_rows';
$handler->display->display_options['row_options']['stapel_title'] = 'title';
$handler->display->display_options['row_options']['stapel_image'] = 'field_pict';
$handler->display->display_options['row_options']['stapel_group'] = 'field_taxonomy';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Pict */
$handler->display->display_options['fields']['field_pict']['id'] = 'field_pict';
$handler->display->display_options['fields']['field_pict']['table'] = 'field_data_field_pict';
$handler->display->display_options['fields']['field_pict']['field'] = 'field_pict';
$handler->display->display_options['fields']['field_pict']['label'] = '';
$handler->display->display_options['fields']['field_pict']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_pict']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_pict']['settings'] = array(
  'image_style' => 'gallery',
  'image_link' => 'content',
);
/* Field: Content: Taxonomy */
$handler->display->display_options['fields']['field_taxonomy']['id'] = 'field_taxonomy';
$handler->display->display_options['fields']['field_taxonomy']['table'] = 'field_data_field_taxonomy';
$handler->display->display_options['fields']['field_taxonomy']['field'] = 'field_taxonomy';
$handler->display->display_options['fields']['field_taxonomy']['label'] = '';
$handler->display->display_options['fields']['field_taxonomy']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
$translatables['gallery'] = array(
  t('Master'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
);
