<?php

/**
 * Bootstrap theme wrapper function for the primary menu links
 */
function borovoe_menu_tree__primary(&$variables) {
  return '<ul class="nav nav-pills nav-stacked">' . $variables['tree'] . '</ul>';
}
