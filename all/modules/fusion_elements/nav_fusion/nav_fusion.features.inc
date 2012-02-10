<?php
/**
 * @file
 * nav_fusion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nav_fusion_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
