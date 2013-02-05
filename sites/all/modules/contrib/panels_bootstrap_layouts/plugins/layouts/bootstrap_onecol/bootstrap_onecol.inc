<?php

/**
 * Implements hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title' => t('Single column'),
  'category' => t('Bootstrap'),
  'icon' => 'bootstrap_onecol.png',
  'theme' => 'bootstrap_onecol',
  'admin css' => '../bootstrap_panels_admin.css',
  'regions' => array('middle' => t('Middle column')),
);
