<?php
/**
 * @file
 * imagex_date.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_date_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
