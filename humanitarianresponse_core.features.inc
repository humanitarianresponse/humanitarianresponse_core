<?php
/**
 * @file
 * humanitarianresponse_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
